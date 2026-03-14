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

int main()
{
    vector<int> arr = {8, 5, 9, 7, 4, 6, 3, 1, 2};
    int n = arr.size() - 1;

    mergeSort(arr, 0, n);

    for(int it: arr){
        cout << it << " ";
    }

    return 0;
}