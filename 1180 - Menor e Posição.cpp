#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;

int main(){
	int n, menor=0, pos=0;
	cin>>n;
	int vet[n];
	for(int i=0; i<n ; i++){
		cin>>vet[i];
	}
	for(int i=0; i<n; i++){
		if(vet[i] < menor){
			menor = vet[i];
			pos = i;
		}
	}

	cout<<"Menor valor: "<<menor<<endl;
	cout<<"Posicao: "<<pos<<endl;

	system("PAUSE");
	return 0;
 }
