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

int largestDigit1(int n)
{
    string str = to_string(n);
    int max = str[0] - '0';
    for (char c : str)
    {
        int a = c - '0';
        if (max < a)
        {
            max = a;
        }
    }
    return max;
}

int largestDigit0(int n)
{
    string str = to_string(n);
    int max = str[0] - '0';
    for (int i = 0; i < str.length(); i++)
    {
        int a = str[i] - '0';
        if (max < a)
        {
            max = a;
        }
    }
    return max;
}

int largestDigit(int n)
{
    int max = 0;
    while (n > 0)
    {
        if (max < n % 10)
        {
            max = n % 10;
            if (max == 9)
                return 9;
        }
        n /= 10;
    }
    return max;
}

int factorial(int n)
{
    int res = 1;
    if (n == 0)
        return 1;
    for (int i = n; i > 0; i--)
    {
        res *= i;
    }
    return res;
}

bool isArmstrong1(int n)
{
    int dup1 = n;
    int dup2 = n;
    int rai = 0;
    int sum = 0;
    if (n == 0)
    {
        return false;
    }
    while (dup1 > 0)
    {
        dup1 /= 10;
        rai++;
    }
    while (dup2 > 0)
    {
        sum = sum + pow((dup2 % 10), rai);
        dup2 /= 10;
    }
    if (n == sum)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isArmstrong(int n)
{
    int sum = 0;
    int dup = n;
    int rai = log10(n) + 1;
    if (n == 0)
    {
        return true;
    }
    while (n > 0)
    {
        sum = sum + pow((n % 10), rai);
        n /= 10;
    }
    return (sum == dup);
}

bool isPerfect(int n)
{
    int sum = 0;
    for (int i = n - 1; i > 0; i--)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    return (sum == n);
}

bool isPerfect1(int n){
    //This is the better way!
    // Cause you just need to go till the sqrt of the number, and you can get the numbers after it by division
    //y'know, by dividing the no. by it's divisor to get the other corresponding divisor
    // we just have to make sure we dont add the same no. twice!
    int sum = 1;

    for(int i = 2; i*i<n; i++){ // case sqrt is a costly operation timewise
        if(n%i==0){
            sum = sum+i;
            if(i!=n/i){
                sum = sum + n/i; // cause we dont want duplicates, like for n=36, 6 and 6
            }
        }
    }
    return sum==n;
}

// you should not use ternary operator to return a value

bool isPrime(int n)
{
    for (int i = n - 1; i > 1; i--)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

// for the prime question, we only need to go till the square root of the number, since
// after the sqrt we have the corresponding divisors, so if there are no divisors 
// till the sqrt, there wont be any after, so we can optimize it by running the loop only till sqrt

bool isPrime1(int n){
    for(int i = 2; i*i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int primeUptoN1(int n)
{
    int count = 0;
    for (int i = 2; i < n + 1; i++)
    {
        if (isPrime(i))
        {
            count++;
        }
    }
    return count;
}
int primeUptoN3(int n)
{
    int count = 0;
    for (int i = 2; i < n + 1; i++)
    {
        if (isPrime1(i))
        {
            count++;
        }
    }
    return count;
}

int primeUptoN(int n)
{
    int count = 0;
    for (int i = 2; i < n + 1; i++)
    {
        bool x = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                x = false;
            }
        }
        if (x == true)
        {
            count++;
        }
    }
    return count;
}
int primeUptoN2(int n)
{
    int count = 0;
    for (int i = 2; i*i <= n; i++)
    {
        bool x = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                x = false;
            }
        }
        if (x == true)
        {
            count++;
        }
    }
    return count;
}

//optimize it by running the prime check from 2 to sqrt(n)

int GCD(int n1, int n2)
{
    int gcd;
    int smaller = min(n1, n2);
    for (int i = 1; i <= smaller; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}

// not the best answer, since GCD is more likely to be found closer to the smaller no, than 1, 
//so a reverse loop is better since we get the answer faster for most test cases

int GCD1(int n1, int n2){
    for(int i = min(n1, n2); i >= 1; i--){
        if(n1%i==0 && n2%i==0){
            return i;
        }
    }
    return 1;
}

// with the euclidian algorithm we can optimize it even further
//it states that
//gcd(n1, n2) = gcd(n1-n2, n2)  for n1>n2
//for ex:
//n1 = 35, n2 = 10, gcd = 5
//it is the same as:
//(35-10, 10) = (25, 10) gcd = 5
//reduce again:
//(25-10, 10) = (15, 10) gcd = 5
//reduce again
//(15-10, 10) = (5, 10) gcd = 5
//reduce again, bu the smaller from the larger
//(5, 10-5) = (5, 5)
//since both are same, you can reduce from either of them:
//(5-5, 5) = (0, 5) ---> this is bascically (n1%n2, n2)
// as soon as you reach 0, the other number is always your gcd!
// so:
//(n2-n1)%gcd == 0

int GCD2(int n1, int n2){
    while(n1!=0 && n2!=0){
        if(n1>n2) n1 = n1%n2;
        else n2= n2%n1;
    }
    if(n1 == 0) return n2;
    else return n1;
}

//OR FOR CLEANER CODE:

int GCD3(int n1, int n2){
    n1 = abs(n1);
    n2 = abs(n2); // cause it only works for positive integers
    while(n2!=0){
        int remainder = n1%n2; // even if n2 is bigger, it will work because for ex: 18%48 = 18
        n1 = n2; // then n1=48
        n2 = remainder; // // n2 = 18
    }
    return n1; // dry run it if you are still confused
}

int LCM(int n1, int n2)
{
    int greater = max(n1, n2);
    for (int i = greater; i <= (n1 * n2); i = i + greater)
    {
        if (i % n1 == 0 && i % n2 == 0)
        {
            return i;
        }
    }
    return n1*n2; // time complexity  of this is O()
}
/*Time Complexity: O(min(N1, N2)) – 
In the worst-case scenario, when n1 and n2 are coprime, 
the loop runs for O(n1 * n2 / max(n1, n2)) iterations 
which is equivalent to O(min(n1, n2)).
*/

// also for lcm you can use the formula (n1*n2)/gcd = lcm
//so you can reduce the time complexity and make it O(log(min(n1, n2)))
// like this:

int LCM2(int n1, int n2){
    return (n1/GCD3(n1, n2))*n2;
}

vector<int> divisors(int n)
{
    vector<int> div;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            div.push_back(i);
        }
    }
    return div;
}

//optimised divisors, only go till sqrt of num

vector<int> divisors1(int n){
    vector<int> div;
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            div.push_back(i);
            if(n/i!=i){
                div.push_back(n/i);
            }
        }
    }
    return div;
}

// result will be unordered

int main()
{
    int x, y;
    cout << "Enter the first variable: ";
    cin >> x;
    cout << "Enter the second variable: ";
    cin >> y;
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
    // cout << GCD(x, y);
    // cout << endl;
    // cout << LCM(x, y);
    // cout << endl;
    // cout << isArmstrong(x);
    // cout << endl;
    // cout << GCD2(x, y);
    // cout << endl;
    // cout << GCD3(x, y);
    // cout << endl;
    cout << LCM2(x, y);

    return 0;
}