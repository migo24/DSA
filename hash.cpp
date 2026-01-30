#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cout << "Enter number of elements in the array: ";
    cin >> n;
    int arr[n];
    int maxi = 0;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        maxi = max(maxi, arr[i]);
    }

    int hash[maxi+1] = {0};

    for(int i = 0; i < n; i++){
        hash[arr[i]]++;
    }

    int q;
    cout << "Enter the number of queries: ";
    cin >> q;

    while(q>0){
        int num;
        cout << "Enter the number: ";
        cin >> num;

        if(num>maxi) return 0;
        else cout << hash[num] << endl;
        q--;
    }
    return 0;
}

//Something is wrong, but I relly dont know what

// fixed it

//nice
