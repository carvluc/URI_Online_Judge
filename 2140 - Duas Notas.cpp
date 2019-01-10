#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n, m, troco, resto, n2, n5, n10, n20, n50, n100;
	bool valido;	
	while(cin >> n >> m){
		if(n == 0 && m == 0)
			break;
			
		troco = m - n;
	
		n100 = troco / 100;
		resto = troco % 100;
		
		n50 = resto / 50;
		resto %= 50;
		
		n20 = resto / 20;
		resto %= 20;
		
		n10 = resto / 10;
		resto %= 10;
		
		n5 = resto / 5;
		resto %= 5;
		
		n2 = resto / 2;
		
		if(troco != n100 * 100 + n50 * 50 + n20 * 20 + n10 * 10 + n5 * 5 + n2 * 2 || n2 + n5 + n10 + n20 + n50 + n100 != 2)
			cout << "impossible" << endl;
		else
			cout << "possible" << endl;		
	}
}
