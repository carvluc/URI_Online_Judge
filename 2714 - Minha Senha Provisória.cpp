#include<iostream>

using namespace std;

int main(){
	int n, pos;
	string s;
	
	cin >> n;
	
	while(n--){
		cin >> s;
		pos = 0;
		 
		if(s.length() == 20 && s[0] == 'R' && s[1] == 'A'){
			for(int i = 2; i <= s.length(); i++)	
				if(s[i] != '0'){
					pos = i;
					break;
				}
					
			cout << s.substr(pos);
		}			
		else
			cout << "INVALID DATA";
		
		cout << endl;
	}
}
