#include<bits/stdc++.h>
using namespace std;

class Solution{	
	//or for sum instead of taking a global (for the function) variable we use parameterized recursion
	int sum = 0;
	public:
		int NnumbersSum(int N){
			//your code goes here
			if(N==0) return 0;
			return N + NnumbersSum(N-1);
		}

		
		int NnumbersSSum(int N){
			//your code goes here
			if(N==1) return 1;
			return N+NnumbersSum(N-1);
		}
		//still dont understand it, I just did a bit of hit and trial and typed a bunch of iterations like a caveman. What even is recursion???
		
		// non parameterized recursion
		int numSum(int n){
			if(n==0) return sum;
			sum = sum+n;
			return numSum(n-1);
		}

		//tail (this is right, ignore if it said otherwise anywhere else)
		int print_N_2_1(int n){
			if(n==0) return 0;
			cout << n << endl;
			return print_N_2_1(n-1);
		}
		//head, apparently
		//for this you need another parameter

		void tail_print_n_2_1(int i, int n){
			if(i>n) return;
			return tail_print_n_2_1(i+1, n);
			cout << i << endl;
		}
		//I really dont understand

		// I need to study it again, cause I dont understand, plus, revise strings + OPTIMIZE!!!

	
		long long int factorial(int n){
			//your code goes here
			if(n==0) return 1;
			return n*factorial(n-1);
		}

		//I still undersatand nothing about recursion, this is chatgpt, heat tail, return dont return, parameterised non parameterised, global, not b=global I just dont know I need to study this topic all over again

};

int main(){
    cout << "Enter num: ";
    int x;
	cin >> x;
    cout << "Enter num: ";
    int y;
    cin >> y;

    Solution obj;
    int c = obj.NnumbersSum(x);
    int z = obj.numSum(x);
    int a = obj.print_N_2_1(x);
    int b = obj.factorial(x);
    obj.tail_print_n_2_1(x, y);
    cout << c << endl;
    cout << z << endl;
    cout << b << endl;
}