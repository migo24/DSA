#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> arr, int st, int mid, int end){
    vector<int> temp;
    int i = st;
    int j = mid+1;
    while(i<=mid && j<=end){
        if(arr[i]<arr[j]){
            arr.push_back(arr[i]);
            i++;
        }
        else{
            arr.push_back(arr[j]);
            j++;
        }
    }

    while(i<=mid){
        arr.push_back(arr[i]);
        i++;
    }

    while(j<=end){
        arr.push_back(arr[j]);
        j++;
    }
}

void mergeSort(vector<int>& arr, int st, int end){
    while(st<end){
        int mid = st + (end - st)/2;
        mergeSort(arr, st, mid);
        mergeSort(arr, mid+1, end);

        merge(arr, st, mid, end);
    }
}

void quickSort(vector<int>& arr, int st, int end){

}


int main(){
    vector<int> arr = {8,1,9,2,5,4,3,6,7};
    int st_par = 0;
    int end_par = arr.size()-1;
    mergeSort(arr, st_par, end_par);
    for(int it: arr){
        cout << it << " ";
    }
    cout << endl;

    return 0;
}

//something went wrong