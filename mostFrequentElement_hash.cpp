#include<bits/stdc++.h>
using namespace std;

int mostFrequentElement(int n, int arr[]){
    int maxi = 0;
    for(int i = 0; i < n; i++){ // this for loop is to find the largest element in the given array
        if(arr[i]>maxi) maxi = arr[i];
    }
    int hash[maxi + 1] = {0}; 
    for(int i = 0; i < n; i++){ // This loop is for the precomputation (Bascically logging how many times an element has occured in the array)
        hash[arr[i]]++;
    }
    int element = -1; int max_count = 0;
    for(int i = 0; i < maxi; i++){ // This one is to find the element with maximum frequency
        if(max_count < hash[i]){ // This is for when the max count is less than the elements count
            element = i;
            max_count = hash[i];
        }
        else if(max_count == hash[i]){ // This one is for when the element frequency is the same as the max frequency.
            if(element > i) element = i;
        }
    }
    return element;
}

int main()
{
    int n;
    cout << "Enter the number of elements in array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the element in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x = mostFrequentElement(n, arr);

    cout << "The element that occured maximum times in the array is " << x;
}