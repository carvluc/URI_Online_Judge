#include<iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;

int main(){
	int n; 
	double qtd;
	
	cin>> n>> qtd;
	
	if (n == 1){
		qtd*=4.00;
		cout<<fixed <<setprecision(2) <<"Total: R$ "<<qtd<< endl;
	}
	
		if (n == 2){
		qtd*=4.50;
		cout<< fixed <<setprecision(2) <<"Total: R$ "<<qtd << endl;
	}
	
		if (n == 3){
		qtd*=5.00;
		cout<<fixed <<setprecision(2) <<"Total: R$ "<<qtd<< endl;
	}
	
		if (n == 4){
		qtd*=2.00;
		cout<<fixed <<setprecision(2) <<"Total: R$ "<<qtd<< endl;
	}
	
		if (n == 5){
		qtd*=1.50;
		cout<< fixed <<setprecision(2) <<"Total: R$ " <<qtd<< endl;
	}
	
	return 0;	
}
