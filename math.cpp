#include<bits/stdc++.h>
using namespace std;

int digits(int x){
    if(x == 0) return 1;
    else if(x>0){
    int no = 0;
    while(x>0){
        x=x/10;
        no=no+1;
    }
    return no;}
    else{
        cout << "Invalid" << endl;
        return -1;
    }
}

int log_digits(int x){
    if(x==0) return 1;
    else if(x>0){
    int no = log10(x) + 1;
    return no;}
    else{
        cout << "Invalid" << endl;
        return -1;
    }
}

int odd_count(int x){
    string str_n = to_string(x);
    int od=0;
    for(char c: str_n){
        int a = c - '0';
        if(a%2!=0){
            od++;
        }
    }
    return od;
}

int odd_count1(int x){
    int od=0;
    while(x>0){
        int y = x%10;
        x=x/10;
        if(y%2!=0){
            od++;
        }
    }
    return od;
}

int main(){
    int x;
    cout << "Enter the number: ";
    cin >> x;
    // cout << digits(x) << endl;
    // cout << log_digits(x);
    cout << odd_count(x);
    cout << endl;
    cout << odd_count1(x);
    return 0;
}