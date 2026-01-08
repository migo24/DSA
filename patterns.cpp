#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void pattern1(int n) {

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout << "*";
            }
            cout << endl;
            }
    }
    void pattern2(int n) {

for(int i=0; i<n; i++){
    for(int j=0; j<=i; j++){
        cout << "*";
    }
    cout << endl;
}
    }
    void pattern3(int n) {
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                cout << j;
            }
            cout << endl;
        }
    }
    void pattern4(int n) {
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                cout << i;
            }
            cout << endl;
        }
    }
    void pattern5(int n) {
        for(int i=n; i>0; i--){
            for(int j=i; j>0; j--){
                cout << "*";
            }
            cout << endl;
        }
    }
    void pattern6(int n) {
    for(int i=n; i>0; i--){
        for(int j=1; j<=i; j++){
            cout << j;
        }
        cout << endl;
        }
    }
    void pattern7(int n) {
        for(int i=0; i<n; i++){
            for(int j=n-i-1; j>0; j--){
                cout << " ";
            }
            for(int j=0; j<(2*i)+1; j++){
                cout << "*";
            }
        cout << endl;
        }
    }
    void pattern8(int n) {
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                cout << " ";
            }
            for(int j=2*(n-i)-1; j>0; j--){
                cout << "*";
            }
            cout << endl;
        }
    }
    void pattern9(int n) {
        for(int i=0; i<n; i++){
            for(int j=n-i-1; j>0; j--){
                cout << " ";
            }
            for(int j=0; j<(2*i)+1; j++){
                cout << "*";
            }
            cout << endl;
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                cout << " ";
            }
            for(int j=(2*(n-i))-1; j>0; j--){
                cout << "*";
            }
            cout << endl;
        }
    }
    void pattern10(int n) {
        for(int i=0; i<n; i++){
            for(int j=0; j<=i; j++){
                cout << "*";
            }
            cout << endl;
        }
        for(int i=0; i<n-1; i++){
            for(int j=n-i-1; j>0; j--){
                cout << "*";
            }
            cout << endl;
        }
    }
    void pattern11(int n) {
        for(int i=0; i<n; i++){
            for(int j=0; j<=i; j++){
                if((i+j)%2==0){
                    cout << 1 << " ";
                }
                else{
                    cout << 0 << " ";
                }
            }
            cout << endl;
        }
    }
};


int main(){

    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << endl;
    Solution s1;
    s1.pattern1(n);
    cout << endl;
    s1.pattern2(n);
    cout << endl;
    s1.pattern3(n);
    cout << endl;
    s1.pattern4(n);
    cout << endl;
    s1.pattern5(n);
    cout << endl;
    s1.pattern6(n);
    cout << endl;
    s1.pattern7(n);
    cout << endl;
    s1.pattern8(n);
    cout << endl;
    s1.pattern10(n);
    cout << endl;
    s1.pattern11(n);

    return 0;
}