#include <bits/stdc++.h>
using namespace std;

int digits(int x)
{
    if (x == 0)
        return 1;
    else if (x > 0)
    {
        int no = 0;
        while (x > 0)
        {
            x = x / 10;
            no = no + 1;
        }
        return no;
    }
    else
    {
        cout << "Invalid" << endl;
        return -1;
    }
}

int log_digits(int x)
{
    if (x == 0)
        return 1;
    else if (x > 0)
    {
        int no = log10(x) + 1;
        return no;
    }
    else
    {
        cout << "Invalid" << endl;
        return -1;
    }
}

int odd_count(int x)
{
    string str_n = to_string(x);
    int od = 0;
    for (char c : str_n)
    {
        int a = c - '0';
        if (a % 2 != 0)
        {
            od++;
        }
    }
    return od;
}

int odd_count1(int x)
{
    int od = 0;
    while (x > 0)
    {
        int y = x % 10;
        x = x / 10;
        if (y % 2 != 0)
        {
            od++;
        }
    }
    return od;
}

int reverseNumber(int n)
{
    string str = "";
    while (n > 0)
    {
        int x = n % 10;
        n = n / 10;
        str += to_string(x);
    }
    int ans = stoi(str);
    return ans;
}

bool isPalindrome(int n)
{
    int x = n;
    string str = "";
    while (x > 0)
    {
        int y = x % 10; // can also reverse using reverse(str.begin(), str.end())
        x /= 10;
        str += to_string(y); // or str.insert(to_string(y))
    }
    int pal = stoi(str);
    return (pal == n) ? true : false;
}

int largestDigit1(int n) {
    string str = to_string(n);
    int max = str[0] -'0';
    for(char c: str){
        int a = c-'0';
        if(max<a){
            max = a;
        }
    }
    return max;
}

int largestDigit0(int n) {
    string str = to_string(n);
    int max = str[0]-'0';
    for(int i = 0; i < str.length(); i++){
        int a = str[i]-'0';
        if(max < a){
            max = a;
        }
    }
    return max;
}

int largestDigit(int n){
    int max = 0;
    while(n>0){
        if(max<n%10){
            max = n%10;
            if(max==9) return 9;
        }
        n/=10;
    }
    return max;
}

int factorial(int n){
    int res = 1;
    if(n==0) return 1;
    for(int i = n; i>0; i--){
        res *= i;
    }
    return res;
}

bool isArmstrong1(int n) {
        int dup1 = n;
        int dup2 = n;
        int rai = 0;
        int sum = 0;
        if(n==0){
            return false;
        }
        while(dup1>0){
            dup1/=10;
            rai++;
        }
        while(dup2>0){
            sum = sum + pow((dup2%10), rai);
            dup2 /= 10;
        }
        if(n==sum){
            return true;
        }
        else{
            return false;
        }
    }
    bool isPerfect(int n) {
        int sum = 0;
        for(int i=n-1; i>0; i--){
            if(n%i==0){
                sum = sum + i;
            }
        }
        return (sum==n);
    }

    //you should not use ternary operator to return a value

    bool isPrime(int n) {
        for(int i = n-1; i>1; i--){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }

    int primeUptoN1(int n) {
        int count = 0;
        for(int i=2; i<n+1; i++){
            if(isPrime(i)){
                count++;
            }
        }
        return count;
    }

    int primeUptoN(int n) {
        int count = 0;
        for(int i = 2; i < n+1; i++){\
            bool x = true;
            for(int j=2; j<i; j++){
                if(i%j==0){
                    x = false;
                }
            }
            if(x==true){
                count++;
            }
        }
        return count;
    }

int main()
{
    int x;
    cout << "Enter the number: ";
    cin >> x;
    // cout << digits(x) << endl;
    // cout << log_digits(x);
    // cout << odd_count(x);
    // cout << endl;
    // cout << odd_count1(x);
    // cout << endl;
    // cout << reverseNumber(x);
    // cout << endl;
    // cout << isPalindrome(x);
    // cout << endl;
    // cout << largestDigit(x);
    // cout << endl;
    // cout << factorial(x);
    // cout << endl;
    // cout << isArmstrong1(x);
    // cout << endl;
    // cout << isPerfect(x);
    // cout << endl;
    // cout << isPrime(x);
    // cout << endl;
    // cout << primeUptoN(x);
    // cout << endl;
    // cout << primeUptoN1(x);
    // cout << endl;
    

    return 0;
}   