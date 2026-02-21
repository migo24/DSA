#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    void nTo1(int n){
        if(n==1){
            cout << 1 << endl;
            return;
        }
        cout << n << " ";
        nTo1(n-1);
    }

    int fact_1(int n){
        if(n==0){
            return 1;
        }
        return n*fact_1(n-1);
    }

    int sumOfN(int n){
        if(n==1){
            return 1;
        }
        return n+sumOfN(n-1);
    }

};

int main(){
    cout << "Enter n: ";
    int n;
    cin >> n;
    Solution obj;
    obj.nTo1(n);
    int fact = obj.fact_1(n);
    cout << "Factorial of " << n << " is: " << fact << endl;;
    int sum = obj.sumOfN(n);
    cout << "Sum of " << n << " numbers is: " << sum << endl;;
}