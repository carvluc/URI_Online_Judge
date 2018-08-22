#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	int produtos, codigo, qtdProduto;
	double preco, valorTotal=0;
	cin>>produtos;
	
	if(produtos>=1 && produtos<=5){
		
		while(produtos--){
			cin>>codigo>>qtdProduto;
			
			if(qtdProduto>=1 && qtdProduto<=500){
				
				if(codigo == 1001){
					preco = 1.50;
					valorTotal+= preco*qtdProduto;
				}
				
				if(codigo == 1002){
					preco = 2.50;
					valorTotal+= preco*qtdProduto;
				}
				
				if(codigo == 1003){
					preco = 3.50;
					valorTotal+= preco*qtdProduto;
				}
				
				if(codigo == 1004){
					preco = 4.50;
					valorTotal+= preco*qtdProduto;
				}
				
				if(codigo == 1005){
					preco = 5.50;
					valorTotal+= preco*qtdProduto;
				}
			}
		}
	}
	cout<<fixed<<setprecision(2)<<valorTotal<<endl;
	
	system("PAUSE");
	return 0;
}
