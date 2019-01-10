#include<iostream>
#include<string.h>
#include<iomanip>
#include<map>

using namespace std;

int main(){
	map<string, float> prod;
	int n, qtProd, qtIntensao, qtItem;
	float tempValor, soma; 
	string tempProduto;
	
	cin >> n;
	
	while(n--){
		soma = 0;
		cin >> qtProd;
		
		prod.clear();
		
		for(int i = 0; i < qtProd; i++){
			getchar();
			cin >> tempProduto >> tempValor;
			prod.insert(pair<string, float>(tempProduto, tempValor));
		}
		
		cin >> qtIntensao;
		
		while(qtIntensao--){
			getchar();
			cin >> tempProduto >> qtItem;
			soma += prod[tempProduto] * qtItem;
		}
		
		cout << fixed << setprecision(2) << "R$ " << soma << endl;			
	}
}
