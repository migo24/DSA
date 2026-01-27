#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[4] = {10, 20, 30, 40};
    cout << arr << endl;
    cout << &arr[0] << endl;

    int arr1[] = {5, 10, 15};
    int* p = arr1;

cout << *p << endl;      // 5
cout << *(p + 1) << endl; // 10
cout << *(p + 2) << endl; // 15+

cout << 5%10 << endl;

cout << 0/10;
}