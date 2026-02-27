#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void nTo1(int n)
    {
        if (n == 1)
        {
            cout << 1 << endl;
            return;
        }
        cout << n << " ";
        nTo1(n - 1);
    }

    int fact_1(int n)
    {
        if (n == 0)
        {
            return 1;
        }
        return n * fact_1(n - 1);
    }

    int sumOfN(int n)
    {
        if (n == 1)
        {
            return 1;
        }
        return n + sumOfN(n - 1);
    }

    int arraySum(vector<int> &nums)
    {
        // your code goes here
        int n = nums.size();
        if (n == 0)
            return 0;
        int a = nums[n - 1];
        nums.pop_back();
        return a + arraySum(nums);
    }

    int arraySum1(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 0)
            return 0;
        int last_ele = nums[n - 1];
        nums.pop_back();
        return last_ele + arraySum(nums);
    }

    int arraySum2(vector<int> &nums)
    {

        int n = nums.size();
        return arrSumRecursive(nums, n);
    }

    vector<char> reverseString(vector<char> &s)
    {
        revStr(s, 0, s.size() - 1);
        return s;
    }

    bool palindromeCheck(string &s)
    {
        return palindromeCheckRecursive(s, 0, s.length() - 1);
    }

    bool isPrime(int num){
        if(num<=1) return false;
        return isPrimeRec(num, num-1);
    }

    vector<int> reverseArray(vector<int>& nums){
        reverseArrayRec(nums, 0, nums.size()-1);
        return nums;
    }

    bool isSorted(vector<int>& nums){
        if(nums.size() <= 1) return true;
        return isSortedRec(nums, 0, 1);
    }

    int addDigits(int num){
        if(num < 10) return num;
        int sum = 0;
        while(num >= 1){
            int a = num%10;
            sum = sum+a;
            num /= 10;
        }
        return addDigits(sum);
    }

    int fib(int n){
        if(n<=1) return n;
        return fib(n-1)+fib(n-2);
    }

private:

    bool isSortedRec(vector<int>& nums, int a, int b){
        if(b==nums.size()) return true;
        if(nums[a]>nums[b]) return false;
        return isSortedRec(nums, a+1, b+1);
    }

    void reverseArrayRec(vector<int>& nums, int left, int right){
        if(left>=right) return;
        swap(nums[left], nums[right]);
        reverseArrayRec(nums, left+1, right-1);
    }

    bool isPrimeRec(int num, int factor)
    {
        if(factor==1) return true;
        if(num%factor==0) return false;
        return isPrimeRec(num, factor-1);
    }

    bool palindromeCheckRecursive(string &s, int left, int right)
    {
        if (left >= right)
            return true;
        if (s[left] != s[right])
            return false;
        return palindromeCheckRecursive(s, left + 1, right - 1);
    }

    int arrSumRecursive(vector<int> &nums, int n)
    {

        if (n == 0)
            return 0;
        return nums[n - 1] + arrSumRecursive(nums, n - 1);
    }

    void revStr(vector<char> &s, int left, int right)
    {
        if (left >= right)
            return;
        swap(s[left], s[right]);
        revStr(s, left + 1, right - 1);
    }
};

int main()
{
    // cout << "Enter n: ";
    // int n;
    // cin >> n;
    // vector<int> nums = {1,2,3,4,5,6};
    Solution obj;
    // obj.nTo1(n);
    // int fact = obj.fact_1(n);
    // cout << "Factorial of " << n << " is: " << fact << endl;
    // int sum = obj.sumOfN(n);
    // cout << "Sum of " << n << " numbers is: " << sum << endl;

    // int sum_vec = obj.arraySum1(nums);

    // // int sum_vec1 = obj.arraySum2(nums);
    // // // cout << sum_vec;
    // // // cout << endl;
    // // cout <<sum_vec1;
    // vector<char> word = {'h', 'e', 'l', 'l', 'o'};
    // vector<char> w = obj.reverseString(word);
    // for(char c: w) cout << c;

    // string s = "hannah";
    // int num = 41;
    // bool primeOrNot = obj.isPrime(num);
    // cout << primeOrNot << endl;
    // bool tf = obj.palindromeCheck(s);
    // cout << tf;

    // vector<int> nums = {1,2,3,4,5,6};
    // // vector<int> revArr = obj.reverseArray(nums);
    // // for(int i: revArr) cout << i << " ";

    // bool isSortedOrNot = obj.isSorted(nums);
    // cout << isSortedOrNot;

    // int x = 2549;
    // int addedDigits = obj.addDigits(x);
    // cout << addedDigits;

    cout << obj.fib(8);
}