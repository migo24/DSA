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

    return 0;
}