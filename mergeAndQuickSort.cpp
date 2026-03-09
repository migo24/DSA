#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int st, int mid, int end)
{
    vector<int> temp;
    int i = st;
    int j = mid + 1;
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for (int x = 0; x < temp.size(); x++)
    {
        arr[st + x] = temp[x];
    }
}

void mergeSort(vector<int> &arr, int st, int end)
{
    if(st < end)
    {
        int mid = st + (end - st) / 2;
        mergeSort(arr, st, mid);
        mergeSort(arr, mid + 1, end);

        merge(arr, st, mid, end);
    }
}

int partition(vector<int>& arr, int st, int end){
    int idx = st-1;
    int pivot = st;
    for(int i = st; i < end; i++){
        if(arr[end]>arr[i]){
            idx++;
            swap(arr[i], arr[idx]);
        }
    }
    idx++;
    swap(arr[end], arr[idx]);
    return idx;
}

void quickSort(vector<int> &arr, int st, int end)
{
    if(st<end){
        int pivotIdx = partition(arr, st, end);
        quickSort(arr, st, pivotIdx-1);
        quickSort(arr, pivotIdx+1, end);
    }
}

int main()
{
    vector<int> arr = {8, 1, 9, 2, 5, 4, 3, 6, 7};
    
    // mergeSort(arr, 0, arr.size()-1);
    quickSort(arr, 0, arr.size()-1);

    for (int it : arr)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}

// something went wrong

//welp I will have to do both again cause the ideas haven't landed quite yet