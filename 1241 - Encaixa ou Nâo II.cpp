#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int teste, tam;
	bool ok;
	string n1, n2;
	cin >> teste;
	while(teste--){
        cin >> n1 >> n2;
        
    	if(n2.length() > n1.length())    
        	cout << "nao encaixa" << endl;
        else{
        	tam = n2.length();
        	ok = true;
        	for(int i = tam - 1; i >= 0; i--)
        		if(n1[n1.length() - tam + i] != n2[i])
        			ok = false;
				
        	if(ok)
				cout << "encaixa" << endl;
			else
				cout << "nao encaixa" << endl;
		}
	}
	
	system("pause");
	return 0;
}
