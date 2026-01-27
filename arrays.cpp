#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int sum(int arr[], int n){
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum = sum + arr[i];
        }
        return sum;
    }

    int countOdd(int arr[], int n){
        int count = 0;
        for(int i = 0; i < n; i++){
            if(arr[i]%2 != 0) count+=1;
        }
        return count;
    }

    bool arraySortedOrNot(int arr[], int n){
        for(int i = 0; i < n-1; i++){
            if(arr[i] > arr[i+1]) return false;
        }
        return true;
    }

    void reverse(int arr[], int n){
        for(int i = 0; i < n/2; i++){
            int temp = arr[i];
            arr[i] = arr[n-i-1];
            arr[n-i-1] = temp;
        }
        // This is the fxn done. Thenext loop is just to show the answer, not the answer itself.
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
    }
};

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << endl << "Enter the elements in the array: " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    Solution obj;
    int sum = obj.sum(arr, n);
    int countOdd = obj.countOdd(arr, n);
    bool sorted = obj.arraySortedOrNot(arr, n);

    cout << endl;
    cout << "Sum of the array is: " << sum << endl;
    cout << "Number of odd digits in the array is: " << countOdd << endl;
    cout << "The array is sorted: " << sorted << endl;
    obj.reverse(arr, n);

    return 0;
}