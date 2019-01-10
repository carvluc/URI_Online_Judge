#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	int n, c = 1, qtN;
	string str;
	while(cin >> n){
		qtN = 0;
		
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= i; j++)
				qtN++;		 
				
		str = qtN + 1 > 1 ? " numeros" : " numero";		 
				 
		cout << "Caso " << c << ": " << qtN + 1 << str << endl;
		
		if(n == 0)
			cout << 0; 
		else
			cout << 0 << ' '; 
	
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= i; j++)
				if(j == n)
					cout << i;
				else
					cout << i << ' ';
				
		cout << endl << endl;
				
		c++;	
	}
}
