#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    bool isSwap = false;
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap) return;
    }
}

void selectionSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        int minIdx = i;
        for(int j = i+1; j < n; j++){
            if(arr[minIdx]>arr[j]) minIdx = j;
        }
        swap(arr[i], arr[minIdx]);
    }
}

void insertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int swap = arr[i];
        int idx = i-1;
        while(idx>=0 && swap<arr[idx]){
            arr[idx+1] = arr[idx];
            idx--;
        }
        arr[idx+1] = swap;
    }
}

void printArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n = 9;
    int arr[] = {5,6,3,8,7,1,9,2,4};
    // bubbleSort(arr, n);
    // selectionSort(arr, n);
    insertionSort(arr, n);
    printArr(arr, n);
}

//WOOO! first 3 done! All by myself!, but now I gotta go cause I have an exam tomorrow, bye!