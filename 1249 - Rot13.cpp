#include<iostream>

using namespace std;

int main(){
	string s;
	char aux;
	while(getline(cin, s)){
		for(int i = 0; s[i]; i++)
			if(s[i] >= 'A' && s[i] <= 'Z')
				if(s[i] + 13 > 'Z'){
					aux = 'Z' - s[i];
					s[i] = 'A' + 12 - aux;		 
				}else
					s[i] += 13;
			else if(s[i] >= 'a' && s[i] <= 'z')
				if(s[i] + 13 > 'z'){
					aux = 'z' - s[i];
					s[i] = 'a' + 12- aux;	
				}else
					s[i] += 13;
			
			
		cout << s << endl;
	}
}
