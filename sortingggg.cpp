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

    vector<int> insertionSort(vector<int> nums){
        int n = nums.size();
        for(int i = 1; i < n; i++){
            int x = nums[i];
            int j = i-1;
            while(j>=0 && nums[j]>x){
                nums[j+1] = nums[j];
                j--;
            }
            nums[j+1] = x;
        }
        return nums;
    }
};

int main()
{
    vector<int> x = {5, 3, 4, 1, 2};
    solution obj;
    vector<int> bub = obj.bubbleSort(x);
    vector<int> sel = obj.selectionSort(x);
    vector<int> ins = obj.insertionSort(x);

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
}