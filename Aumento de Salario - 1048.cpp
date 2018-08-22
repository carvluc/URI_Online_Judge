#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

int main(){
	double salario, novoSalario, reajuste;
	cin>>salario;
	
	if(salario>=0.00 && salario<=400.00){
		reajuste = salario*0.15;
		novoSalario = salario+reajuste;
		cout<<fixed << setprecision(2)<<"Novo salario: "<<novoSalario<<endl;
		cout<<fixed << setprecision(2)<<"Reajuste ganho: "<<reajuste<<endl;
		cout<<"Em percentual: 15 %"<<endl;		
	}
	
	if(salario>=400.01 && salario<=800.00){
		reajuste = salario*0.12;
		novoSalario = salario+reajuste;
		cout<< fixed<< setprecision(2)<<"Novo salario: "<<novoSalario<<endl;
		cout<< fixed<< setprecision(2)<<"Reajuste ganho: "<<reajuste<<endl;
		cout<<"Em percentual: 12 %"<<endl;		
	}
	
	if(salario>=800.01 && salario<=1200.00){
		reajuste = salario*0.10;
		novoSalario = salario+reajuste;
		cout<< fixed<< setprecision(2)<<"Novo salario: "<<novoSalario<<endl;
		cout<< fixed<< setprecision(2)<<"Reajuste ganho: "<<reajuste<<endl;
		cout<<"Em percentual: 10 %"<<endl;		
	}
	
	if(salario>=1200.01 && salario<=2000.00){
		reajuste = salario*0.07;
		novoSalario = salario+reajuste;
		cout<< fixed<< setprecision(2)<<"Novo salario: "<<novoSalario<<endl;
		cout<< fixed<< setprecision(2)<<"Reajuste ganho: "<<reajuste<<endl;
		cout<<"Em percentual: 7 %"<<endl;		
	}
	
	if(salario>2000.00){
		reajuste = salario*0.04;
		novoSalario = salario+reajuste;
		cout<< fixed<< setprecision(2)<<"Novo salario: "<<novoSalario<<endl;
		cout<< fixed<< setprecision(2)<<"Reajuste ganho: "<<reajuste<<endl;
		cout<<"Em percentual: 4 %"<<endl;		
	}
	
	system("PAUSE");
	return 0;
}
