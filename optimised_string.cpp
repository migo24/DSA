#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isomorphicString(string s, string t) {
    	//your code goes here
        if(s.size() != t.size()) return false;

        unordered_map<char, char> mapST;
        unordered_map<char, char> mapTS;

        for(int i = 0; i < s.size(); i++){
            if(mapST.count(s[i]) && mapST[s[i]] != t[i]) return false;
            if(mapTS.count(t[i]) && mapTS[t[i]] != s[i]) return false;

            mapST[s[i]] = t[i];
            mapTS[t[i]] = s[i];
        }
        return true;
    }
};

int main(){

    string s, t;
    cout << "Enter first string: ";
    cin>> s;
    cout << "Enter second string: ";
    cin >> t;

    cout << "We return 1 if true and 0 if false.";

    Solution obj;

    bool a = obj.isomorphicString(s, t);

    cout << a;

    return 0;
}