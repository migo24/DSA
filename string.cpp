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

		string largeOddNum(string& s){
			int pos = s.find_first_of('0');
			string str = s.substr(pos);
			for(int i = str.length()-1; i >= 0; i--){
				int x = str[i] - '0';
				if(x%2!=0){
					return str.substr(0, i+1);
				}
			}
			return "";
			//bad code not accepted do again

			/*
			terminate called after throwing an instance of 'std::out_of_range'
  what():  basic_string::substr: __pos (which is 18446744073709551615) > this->size() (which is 1)
run.sh: line 1:     3 Aborted                 (core dumped) ./a.out

*/

/*
terminate called after throwing an instance of 'std::out_of_range'
  what():  basic_string::substr: __pos (which is 18446744073709551615) > this->size() (which is 6)
*/
		}


		string largeOddNum1(string& s){
			int pos = s.find_first_not_of('0');
			if(pos == string::npos) return "";
			string str = s.substr(pos);
			int n = str.size();
			for(int i = n-1; i>=0; i--){
				int digit = str[i] - '0';
				if(digit%2!=0) return str.substr(0, i+1);
			}
			return "";
		}

};


int main(){
    string n;
    cout << "Enter the string: ";
    cin >> n;

    Solution obj;

    // obj.reverseString(n);

    // cout << n << endl;

    // bool pal = obj.palindromeCheck(n);

    // cout << pal;

	// string max_odd = obj.largeOddNum(n);

	string max_odd1 = obj.largeOddNum1(n); //this one actually works!
	cout << max_odd1;

    return 0;
}