#include <bits/stdc++.h>
using namespace std;
//didnt code for 3 days
void merge(vector<int> int st, int end){
    
}

void mergeSort(vector<int> arr, int st, int end)
{
    int mid = st + (end - st) / 2;
    while (st < mid)
    {
        mergeSort(arr, st, mid);
        mergeSort(arr, mid + 1, end);
    }
}

int main()
{
    vector<int> arr = {8, 5, 9, 7, 4, 6, 3, 1, 2};
    int n = arr.size() - 1;

    mergeSort(arr, 0, n);

    return 0;
}