#include <iostream>
#include<iomanip>
#include <cstdlib>

using namespace std;

int main(){
	float salario;
	cin>>salario;
	
	if (salario>=0 && salario<=2000){
		cout<<"Isento"<<endl;
	}
	if (salario>2000 && salario<=3000){
		cout<<fixed<< setprecision(2)<<"R$ "<< (salario-2000)*0.08<<endl;
	}
	if (salario>3000 && salario<=4500){
		cout<<fixed<< setprecision(2)<<"R$ "<<   80+((salario-3000)*0.18)<<endl;
	}
	if (salario>4500){
		cout<<fixed<< setprecision(2)<<"R$ "<< 80+0.18*1500+((salario-4500)*0.28)<<endl;
	}

	system("ir");
	return 0;
}
