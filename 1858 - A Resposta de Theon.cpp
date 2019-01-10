#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n, menor, pos = 0;
	cin >> n;
	int opcoes[n];
	
	for(int i=0; i < n; i++)
		cin >> opcoes[i];
	
	menor = opcoes[0];
	
	for(int i = 1; i < n; i++)
		if(menor > opcoes[i]){
			menor = opcoes[i];
			pos = i;
		}
			
	
	cout << pos + 1 << endl;
	
	system("pause");
	return 0;		
}
