#include <bits/stdc++.h>
using namespace std;

int pivot(vector<int> &arr, int st, int end)
{
    int pivot = st - 1;
    int idx = st;
    for (int i = st; i < end; i++)
    {
        if (arr[end] > arr[i])
        {
            pivot++;
            swap(arr[i], arr[pivot]);
        }
    }
    pivot++;
    swap(arr[end], arr[pivot]);
    return pivot;
}
void quickSort(vector<int> &arr, int st, int end)
{
    if (st < end)
    {
        int pivotIdx = pivot(arr, st, end);
        quickSort(arr, st, pivotIdx-1);
        quickSort(arr, pivotIdx + 1, end);
    }
}
int main()
{
    vector<int> arr = {4, 2, 6, 4, 9, 8, 6, 7};
    quickSort(arr, 0, arr.size() - 1);
    for (int it : arr)
    {
        cout << it << " ";
    }
}

//WOO! My main sorting is finished, just tomorrow revise and rewrite all the code