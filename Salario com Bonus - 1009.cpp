#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main(){
	string nome;
	double salario, tVendas; 
	cin>>nome;
	cin>>salario;
	cin>>tVendas;
	cout<<fixed << setprecision(2)<< "TOTAL = R$ "<<(salario + ((15*tVendas)/100))<<endl;
	return 0;
}
