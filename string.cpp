#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void reverseString(string& s){
			int n = s.size();
			for(int i = 0; i < n/2; i++){
				char temp = s[i];
				s[i] = s[n-i-1];
				s[n-i-1] = temp;
			}
		}

        bool palindromeCheck(string& s){
			//your code goes here
			for(int i = 0; i < s.size()/2; i++){
				if(s[i]!=s[s.size()-i-1]) return false;
			}
			return true;
		}

};

int main(){
    string n;
    cout << "Enter the string: ";
    cin >> n;

    Solution obj;

    obj.reverseString(n);

    cout << n << endl;

    bool pal = obj.palindromeCheck(n);

    cout << pal;

    return 0;
}