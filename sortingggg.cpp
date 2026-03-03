#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    vector<int> bubbleSort(vector<int> nums)
    { // lets see what happens withot &, my bet is no change cause duplicate values are being swapped. Probably.

        // okay, so no change in x (the input vector), but we make a copy of x, push it intocnums, sort it, return it, store it in bub, and then print the values of bub. so if you print x, no change. good since we want to try/test for all different sorting techniques, which we cant tell if it is sorted or not if we only give a sorted input!

        // if you want a change in x, an sort it, write: vector<int> bubbleSort(vector<int> &nums){} or bubbleSort(vector<int>& nums){}, the space doesnt matter, apparently

        int n = nums.size();
        for (int i = 0; i < n - 1; i++)
        {
            bool swapped = false;
            for (int j = 0; j < n - i - 1; j++)
            {
                if (nums[j] > nums[j + 1])
                {
                    swap(nums[j], nums[j + 1]);
                    swapped = true;
                }
            }
            if (!swapped)
                break;
        }
        return nums;
    }

    vector<int> selectionSort(vector<int> nums)
    {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++)
        {
            int minIndex = i;
            for (int j = i + 1; j < n; j++)
            {
                if (nums[j] < nums[minIndex])
                    minIndex = j;
            }
            swap(nums[minIndex], nums[i]);
        }
        return nums;
    }

    vector<int> insertionSort(vector<int> nums)
    {
        int n = nums.size();
        for (int i = 1; i < n; i++)
        {
            int x = nums[i];
            int j = i - 1;
            while (j >= 0 && nums[j] > x)
            {
                nums[j + 1] = nums[j];
                j--;
            }
            nums[j + 1] = x;
        }
        return nums;
    }

    //From here on it's not working
    vector<int> mergeSort1(vector<int> &nums)
    {
        int n = nums.size();
        if (n <= 1)
            return nums;
        auto middle = nums.begin() + n / 2;
        vector<int> vecLeft(nums.begin(), middle);
        vector<int> vecRight(middle, nums.end());

        vector<int> left = mergeSort(vecLeft);
        vector<int> right = mergeSort(vecRight);

        vector<int> sorted_vec;
        int i = 0;
        int j = 0;
        while (i < left.size() && j < right.size())
        {
            if (left[i] < right[j])
            {
                sorted_vec.push_back(left[i]);
                i++;
            }
            else
            {
                sorted_vec.push_back(right[j]);
                j++;
            }
        }

        while (i < left.size())
        {
            sorted_vec.push_back(left[i]);
            i++;
        }

        while (j < right.size())
        {
            sorted_vec.push_back(right[j]);
            j++;
        }

        return sorted_vec;
    }

    void merge(vector<int>& arr, int left, 
                     int mid, int right){
                         
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temp vectors
    vector<int> L(n1), R(n2);

    // Copy data to temp vectors L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0;
    int k = left;

    // Merge the temp vectors back 
    // into arr[left..right]
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], 
    // if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], 
    // if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// begin is for left index and end is right index
// of the sub-array of arr to be sorted
void mergeSort(vector<int>& arr, int left, int right){
    
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}
};

int main()
{
    vector<int> x = {5, 3, 4, 1, 2};
    solution obj;
    vector<int> bub = obj.bubbleSort(x);
    vector<int> sel = obj.selectionSort(x);
    vector<int> ins = obj.insertionSort(x);
    vector<int> mer = obj.mergeSort(x);

    for (auto it : bub)
    {
        cout << it << " ";
    }

    cout << endl;

    for (auto it : sel)
    {
        cout << it << " ";
    }

    cout << endl;

    for (auto it : ins)
    {
        cout << it << " ";
    }

    cout << endl;

    for (auto it : mer)
    {
        cout << it << " ";
    }
}