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

    int arraySum(vector<int>& nums){
			//your code goes here
			int n = nums.size();
			if(n==0) return 0;
			int a = nums[n-1];
			nums.pop_back();
			return a+arraySum(nums);
		}

    int arraySum1(vector<int>& nums){
			int n = nums.size();
			if(n==0) return 0;
			int last_ele = nums[n-1];
			nums.pop_back();
			return last_ele+arraySum(nums);
		}

    
		int arraySum2(vector<int>& nums){

			int n = nums.size();
			return arrSumRecursive(nums, n);
		}

	private:
		int arrSumRecursive(vector<int>& nums, int n){

			if(n==0) return 0;
			return nums[n-1]+arrSumRecursive(nums, n-1);
		}

};

int main(){
    // cout << "Enter n: ";
    // int n;
    // cin >> n;
    vector<int> nums = {1,2,3,4,5,6};
    Solution obj;
    // obj.nTo1(n);
    // int fact = obj.fact_1(n);
    // cout << "Factorial of " << n << " is: " << fact << endl;
    // int sum = obj.sumOfN(n);
    // cout << "Sum of " << n << " numbers is: " << sum << endl;

    // int sum_vec = obj.arraySum1(nums);

    int sum_vec1 = obj.arraySum2(nums);
    // cout << sum_vec;
    // cout << endl;
    cout <<sum_vec1;
}