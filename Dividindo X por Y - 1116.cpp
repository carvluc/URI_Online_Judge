#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int i, x, y;
	double resposta;
	cin>>i;
	
	while(i--){
		cin>>x>>y;
		
			if(y==0){
				cout<<"divisao impossivel"<<endl;
			}else{
				resposta = static_cast<double>(x) / y;
				cout<<fixed<<setprecision(1)<<resposta<<endl;
			}
		
	}
	
	system("PAUSE");
	return 0;	
}
