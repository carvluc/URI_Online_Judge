#include <iostream>
#include<iomanip>

using namespace std;

int main(){
	int inicio, fim, resposta, aux=24;
	cin>>inicio>>fim;
	
	if(fim - inicio == 0){
		cout<<"O JOGO DUROU 24 HORA(S)"<<endl;
	}
	else if (inicio>=12 && fim>=0){
		resposta = aux - inicio + fim;
		cout<<"O JOGO DUROU "<< resposta<< " HORA(S)"<<endl;
	}else{
		resposta = fim - inicio;
		cout<<"O JOGO DUROU "<< resposta<< " HORA(S)"<<endl;
	}
	return 0;
}
