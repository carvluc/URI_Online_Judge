#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main(){
	double perRato, perSapo, perCoelho, n, qtd, qtdRato=0, qtdSapo=0, qtdCoelho=0, qtdTot=0;
	string animal;
	
	cin>>n;
	
	while(n--){
		cin>>qtd>>animal;
		
		qtdTot+=qtd;
		
		if(animal=="C"){
			qtdCoelho += qtd; 
		}
		
		else if(animal=="S"){
			qtdSapo += qtd; 
		}
		
		else if(animal=="R"){
			qtdRato += qtd; 
		}
	}
	
	perRato = (qtdRato*100)/qtdTot;
	perSapo = (qtdSapo*100)/qtdTot;
	perCoelho = (qtdCoelho*100)/qtdTot;
	
	cout<<"Total: "<<qtdTot<<" cobaias"<<endl;
	cout<<"Total de coelhos: "<<qtdCoelho<<endl;
	cout<<"Total de ratos: "<<qtdRato<<endl;
	cout<<"Total de sapos: "<<qtdSapo<<endl;
	cout<<fixed<<setprecision(2)<<"Percentual de coelhos: "<<perCoelho<<" %"<<endl;
	cout<<fixed<<setprecision(2)<<"Percentual de ratos: "<<perRato<<" %"<<endl;
	cout<<fixed<<setprecision(2)<<"Percentual de sapos: "<<perSapo<<" %"<<endl;
	
	system("PAUSE");
	return 0;
}
