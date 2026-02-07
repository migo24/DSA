string largeOddNum1(string& s){
			int pos = s.find_first_not_of('0');
			if(pos == string::npos) return "";
			string str = s.substr(pos);
			int n = str.size();
			for(int i = n-1; i>=0; i++){
				int digit = str[i] - '0';
				if(digit%2!=0) return str.substr(0, i+1);
			}
			return "";
		}