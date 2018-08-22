#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

int main(){
	float n1, n2, media;
	int x;
	do{
		cin>>n1;
		while(n1>10 || n1<0){
			cout<<"nota invalida"<<endl;
			cin>>n1;
		}
		cin>>n2;
		while(n2>10 || n2<0){
			cout<<"nota invalida"<<endl;
			cin>>n2;
		}
	
		media = (n1 + n2)/2;
		cout<<fixed<<setprecision(2)<<"media = "<<media<<endl;
		cout<<"novo calculo (1-sim 2-nao)"<<endl;
		cin>>x;
		while(x<1 || x>2){
			cout<<"novo calculo (1-sim 2-nao)"<<endl;
			cin>>x;
		}
		if(x==2)
			break;
	}while(x==1);
	
	system("pause");
	return 0;
}

	
	

	
	
