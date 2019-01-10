#include<iostream>

using namespace std;

int main(){
	int n, meio, i;
	string s;
	
	cin >> n;
	getchar();
	while(n--){
		getline(cin, s);
		meio = (s.length() - 1) / 2;
		
		for(i = meio; i >= 0; i--)
			cout << s[i];
		
		for(i = s.length() - 1; i > meio; i--)
			cout << s[i];
			
		cout << endl;	
	}
}
