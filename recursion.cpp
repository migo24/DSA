#include<bits/stdc++.h>
using namespace std;

class Solution{	
	int sum = 0;
	public:
		int NnumbersSum(int N){
			//your code goes here
			if(N==0) return 0;
			return N + NnumbersSum(N-1);
		}
};

//how and why I dont understand, I am about to fall asleep while typing

int main(){
    cout << "Enter num: ";
    int x;
    cin >> x;

    Solution obj;
    int y = obj.NnumbersSum(x);
    cout << y;
}