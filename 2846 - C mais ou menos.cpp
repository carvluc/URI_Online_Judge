#include<iostream>
#include<map>
#include<stdlib.h>

using namespace std;

int main(){
	int t, qt, soma;
	
	string temp, alimentos[7] = {"suco de laranja", "morango fresco", "mamao", "goiaba vermelha", "manga", "laranja", "brocolis"};
	int qtd[7] = {120, 85, 85, 70, 56, 50, 34};
	
	map<string, int> dados;
	
	for(int i = 0; i < 7; i++)
		dados.insert(pair<string, int>(alimentos[i], qtd[i]));
	
	while(true){
		cin >> t;
		
		if(t == 0)
			break;
			
		soma = 0;
			
		while(t--){
			cin >> qt;
			getchar();
			getline(cin, temp);
			soma += qt * dados[temp];			
		}
		
		if(soma > 130)
			cout << "Menos " << soma - 130 << " mg";
		else if(soma < 110)
			cout << "Mais " << 110 - soma << " mg";
		else
			cout << soma << " mg";
			
		cout << endl;
	}
}

