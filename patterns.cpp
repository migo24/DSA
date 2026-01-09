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
    void pattern12(int n) {
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                cout << j;
            }
            for(int j=2*(n-i); j>0; j--){
                cout << " ";
            }
            for(int j=i; j>0; j--){
                cout << j;
            }
            cout << endl;
        }
    }
    void pattern13(int n) {
        int x=1;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                cout << x << " ";
                x++;
            }
            cout << endl;
        }
    }
    void pattern14(int n) {
        
        for(int i=1; i<=n; i++){
            int x=65;
            for(int j=1; j<=i; j++){
                cout << char(x);
                x++;
            }
            cout << endl;
        }
    }
    void pattern15(int n) {
        for(int i=0; i<n; i++){
            int x = 65;
            for(int j=n-i; j>0; j--){
                cout << char(x);
                x++;
            }
            cout << endl;
        }
    }
    void pattern16(int n) {
        int x=65;
        for(int i=0; i<n; i++){
            for(int j=0; j<=i; j++){
                cout << char(x);
            }
            cout << endl;
            x++;
        }
    }
    void pattern17(int n) {
        for(int i=0; i<n; i++){
            for(int j=n-i-1; j>0; j--){
                cout << " ";
            }
            int x=65;
            for(int j=0; j<=i; j++){
                cout << char(x);
                x++;
            }
            for(int j=0; j<i; j++){
                cout << char(x-2);
                x--;
            }
            cout << endl;
        }
    }
    /*
    We can also do it like this:

    void pattern17(int n) {
        for(int i=0; i<n; i++){
            for(int j=n-i-1; j>0; j--){
                cout << " ";
            }
            int x=65;
            for(int j=0; j<=i; j++){
                cout << char(x);
                x++;
            }
            int y=65;
            for(int j=0; j<i; j++){
                cout << char(y+i-1);
                y--;
            }
            cout << endl;
        }
    */
   void pattern18(int n) {
        for(int i=n; i>0; i--){
            int x=65;
            for(int j=n-i+1; j>0; j--){
                cout << char(x+i-1) << " ";
                x++;
            }
            cout << endl;
        }
    }
    /*
    OR:

    void pattern18(int n){
        int a = 65;
        for(int i=0; i<n; i++){
            int x = n-i-1;
            for(int j=0; j<=i; j++){
                cout << char(a+x) << " ";
                x++;
            }
            cout << endl;
        }
    }
    */
   void pattern19(int n) {
        for(int i=0; i<n; i++){
            for(int j=n-i; j>0; j--){
                cout << "*";
            }
            for(int j=0; j<2*i; j++){
                cout << " ";
            }
            for(int j=n-i; j>0; j--){
                cout << "*";
            }
            cout << endl;
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<=i; j++){
                cout << "*";
            }
            for(int j=2*(n-i-1); j>0; j--){
                cout << " ";
            }
            for(int j=0; j<=i; j++){
                cout << "*";
            }
            cout << endl;
        }
    }
    void pattern20(int n) {
        for(int i=0; i<n; i++){
            for(int j=0; j<=i; j++){
                cout << "*";
            }
            for(int j=2*(n-i-1); j>0; j--){
                cout << " ";
            }
            for(int j=0; j<=i; j++){
                cout << "*";
            }
            cout << endl;
        }
        for(int i=0; i<n; i++){
            for(int j=n-i-1; j>0; j--){
                cout << "*";
            }
            for(int j=0; j<(2*i)+2; j++){
                cout << " ";
            }
            for(int j=n-i-1; j>0; j--){
                cout << "*";
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
    cout << endl;
    s1.pattern12(n);
    cout << endl;
    s1.pattern13(n);
    cout << endl;
    s1.pattern14(n);
    cout << endl;
    s1.pattern15(n);
    cout << endl;
    s1.pattern16(n);
    cout << endl;
    s1.pattern17(n);
    cout << endl;
    s1.pattern18(n);
    cout << endl;
    s1.pattern19(n);
    cout << endl;
    s1.pattern20(n);

    return 0;
}