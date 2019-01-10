#include<iostream>
#include<string>

using namespace std;

int main(){
	int m, n, soma, i, j;
	while(true){
		cin >> m >> n;
		if(m == 0 && n == 0)
			break;
			
		soma = m + n;
		
		string s = to_string(soma);
		
		for(i = 0; s[i]; i++)
			if(s[i] == '0')
				s[i] = NULL;
			
				
		cout << s << endl;	
	}
	
}	





