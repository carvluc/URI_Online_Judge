#include<iostream>

using namespace std;

int main(){
	int n, qtd, i, j;
	string s;
	
	cin >> n;
	
	while(n--){
		cin >> s;
		qtd = 0;
		
		for(i = 0; i < s.length(); i++)
			if(s[i] >= 97)
				qtd++;
				
		char r[qtd + 1];
		
		for(i = s.length() - 1, j = 0; i >= 0; i--)
			if(s[i] >= 97){
				r[j] = s[i];
				j++;
			}
			
		r[j] = 0;
			
		cout << r << endl;
	}
}
