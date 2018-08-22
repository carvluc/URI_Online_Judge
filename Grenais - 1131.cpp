#include<iostream>

using namespace std;

int main(){
	int n, golsG, golsI, empates=0, vitoriasI=0, vitoriasG=0, grenais=0;
	
	while(n!=2){
		cin>>golsI>>golsG;
		
			if (golsI>golsG){
					vitoriasI++;
				}
			
			if (golsI<golsG){
					vitoriasG++;
				}
			
			if (golsI==golsG){
					empates++;
				}
				
		grenais++;		
		
		cout<<"Novo grenal (1-sim 2-nao)"<<endl;
		cin>>n;
		
			if(n==2){
				break;
			}	
	}
	
	cout<<grenais<<" grenais"<<endl;
	cout<<"Inter:"<<vitoriasI<<endl;
	cout<<"Gremio:"<<vitoriasG<<endl;
	cout<<"Empates:"<<empates<<endl;
	
		if(vitoriasG>vitoriasI){
			cout<<"Gremio venceu mais"<<endl;
		}else if(vitoriasG<vitoriasI){
			cout<<"Inter venceu mais"<<endl;
		}else{
			cout<<"Nao houve vencedor"<<endl;
		}
	
	system("PAUSE");
	return 0;
}
