#include<bits/stdc++.h>
using namespace std;

int main(){

    // // input output

    // int x, y;
    // cin >> x >> y;
    // cout << "Value of x: " << x << " and y: " << y << endl;

    // //datatypes

    // int raj = 20;
    // long a =12435;
    // long long c = 150000000000000;
    // float b = 12.2;
    // double z = 13245.76543;

    // string s1;
    // string s2;
    // cin >> s1 >> s2;
    // cout << s1 << " " << s2;

    // string str;
    // getline(cin, str);

    // char ch;
    // cin >> ch;
    // cout << ch;

    // char cha = 'g';

    // //if else statements

    // int age;

    // cin >> age;

    // if (age>=18){
    //     cout << "You are an adult";
    // }
    // else if(age < 0){
    //     cout << "Enter real age";
    // }
    // else{
    //     cout << "You are a child";
    // }

    // Switch statement

    // int marks;

    // cout << "Enter marks: ";
    // cin >> marks;

    // if(marks < 25){
    //     cout << "F";
    // }
    // else if (marks <= 44){
    //     cout << "E";
    // }
    // else if (marks <= 49){
    //     cout << "D";
    // }
    // else if (marks <= 59){
    //     cout << "C";
    // }
    // else if (marks <= 79){
    //     cout << "B";
    // }
    // else if (marks <= 100){
    //     cout << "A";
    // }

    // int age;
    // cout << "Enter age: ";
    // cin >> age;
    // if (age < 18){
    //     cout << "Not eligible for a job";
    // }
    // else if(age <= 57){
    //     cout << "eligible for job";
    //     if(age >= 55){
    //         cout << " but retirement soon";
    //     }  
    // }
    // else{
    //     cout << "retirement time";
    // }

    // int day;
    // cout << "Enter day number: ";
    // cin >> day;

    // switch(day){
    //     case 1:
    //         cout << "Monday";
    //         break;
    //     case 2:
    //         cout << "Tuesday";
    //         break;
    //     case 3:
    //         cout << "Wednesday";
    //         break;
    //     case 4:
    //         cout << "Thursday";
    //         break;
    //     case 5:
    //         cout << "Friday";
    //         break;
    //     case 6:
    //         cout << "Saturday";
    //         break;
    //     case 7:
    //         cout << "Sunday";
    //         break;
    //     default:
    //         cout << "invalid";
    // }
    
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

    arr[3] += 10;
    cout << arr[3];

    // 2D array

    int arr[3][5];
    arr[1][3] = 78;
    cout << arr[1][2];

    string s = "striver";
    int len = s.size();
    cout << s[2];
    s[len - 3] = 'd'; 
    cout << s[len - 1];
    


    return 0;
}