#include <iostream>
#include <cstdlib>

using namespace std;

int main (){
	double N;
	
	cin>>N;
	cout<<"NOTAS: "<<endl;
	cout<< N/100<<" nota(s) de R$ 100,00"<< endl;
	cout<< (N%100)/50<<" nota(s) de R$ 50,00"<< endl;
	cout<< ((N%100)%50)/20<<" nota(s) de R$ 20,00"<< endl;
	cout<< (((N%100)%50)%20)/10<<" nota(s) de R$ 10,00"<< endl;
	cout<< ((((N%100)%50)%20)%10)/5<<" nota(s) de R$ 5,00"<< endl;
	cout<< (((((N%100)%50)%20)%10)%5)/2<<" nota(s) de R$ 2,00"<< endl;
	
	cout<<"MOEDAS: "<<endl;	
	
	cout<< ((((((N%100)%50)%20)%10)%5)%2) <<" moeda(s) de R$ 1,00"<< endl;
	cout<< ((((((N%100)%50)%20)%10)%5)%2)/2 <<" moeda(s) de R$ 0,50"<< endl;
	cout<< (((((((N%100)%50)%20)%10)%5)%2)%2)/2 <<" moeda(s) de R$ 0,25"<< endl;
	cout<< ((((((((N%100)%50)%20)%10)%5)%2)%2)%2)/2.5 <<" moeda(s) de R$ 0,10"<< endl;
	cout<< (((((((((N%100)%50)%20)%10)%5)%2)%2)%2)%2.5)/2 <<" moeda(s) de R$ 0,05"<< endl;
	cout<< ((((((((((N%100)%50)%20)%10)%5)%2)%2)%2)%2.5)%2)/5 <<" moeda(s) de R$ 0,01"<< endl;
	
	return 0;
}
