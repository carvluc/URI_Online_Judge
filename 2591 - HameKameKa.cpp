#include<iostream>

using namespace std;

int main(){
	int n, i, x1, x2, pos;
	string s;
	
	cin >> n;
	
	while(n--){
		cin >> s;
		x1 = 0; x2 = 0;
		
		pos = s.find('k');
		
		for(i = 0; i < pos; i++)
			if(s[i] == 'a')
				x1++;
				
		for(i = pos; s[i]; i++)
			if(s[i] == 'a')
				x2++;
				
		cout << "k";
		
		for(i = 0; i < x1 * x2; i++)
			cout << "a";
		 
		 cout << endl;
	}
}
