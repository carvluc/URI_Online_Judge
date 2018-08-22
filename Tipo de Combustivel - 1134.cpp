#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int n, alcool=0, diesel=0, gasolina=0;
		
	while(n != 4){
		cin>>n;
		
		if(n == 1){
			alcool++;
		}
		
		if(n == 2){
			gasolina++;
		}
		
		if(n == 3){
			diesel++;
		}
		
	}
	
	cout<<"MUITO OBRIGADO"<<endl<<"Alcool: "<<alcool<<endl<<"Gasolina: "<<gasolina<<endl<<"Diesel: "<<diesel<<endl;
	
	system("PAUSE");
	return 0;	
}
