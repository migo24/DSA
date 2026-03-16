#include <bits/stdc++.h>
using namespace std;
//didnt code for 3 days 11, 12, 13 march (sorry, my mid sems were going on)
void merge(vector<int>& arr, int st, int mid, int end){
    vector<int> arr1;
    int i = st;
    int j = mid+1;
    while(i<=mid && j<=end){
        if(arr[i]<arr[j]){
            arr1.push_back(arr[i]);
            i++;
        }
        else{
            arr1.push_back(arr[j]);
            j++;

        }
    }
    while(i<=mid){
        arr1.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        arr1.push_back(arr[j]);
        j++;
    }

    for(int x = 0; x < arr1.size(); x++){
        arr[st+x] = arr1[x];
    }
}

void mergeSort(vector<int>& arr, int st, int end)
{
    int mid = st + (end - st) / 2;
    if (st < mid)
    {
        mergeSort(arr, st, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, st, mid, end);
    }
}

//SHIT I FORGOT QUICKSORT

// void quickSort(vector<int>& arr, int st, int pivot, int mid){
//     int compared = st;
//     int idx = 
// }

//this is copied after revew, try again tmrw

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
    vector<int> arr = {8, 5, 9, 7, 4, 6, 3, 1, 2};
    int n = arr.size() - 1;

    // mergeSort(arr, 0, n);
    quickSort(arr, 0, n);

    for(int it: arr){
        cout << it << " ";
    }

    return 0;
}