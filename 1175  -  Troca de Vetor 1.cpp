#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	int vet[20], aux;
	for(int i=0 ; i<20 ; i++){
		cin>>vet[i];
	}
	for(int i=0; i<10; i++){
		aux = vet[i];
		vet[i] = vet[19-i];
		vet[19-i] = aux;
	}
	for(int i=0; i<20; i++){
		cout<<"N["<<i<<"] = "<<vet[i]<<endl;
	}
	system("pause");
	return 0;
}
