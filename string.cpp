#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:

        void reverseString(vector<char>& s){
			int n = s.size();
			for(int i = 0; i < n/2; i++){
				char temp = s[i];
				s[i] = s[n-i-1];
				s[n-i-1] = temp;
			}
		}

};

int main(){
     string input;
    cout << "Enter the string: ";
    getline(cin, input);

    vector<char> n(input.begin(), input.end());

    Solution obj;
    obj.reverseString(n);

    cout << "Reversed string: ";
    for (char c : n) cout << c;
    cout << endl;

    return 0;
}