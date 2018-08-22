#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	double n1, n2, n3,n4, media;
	cin>>n1>>n2>>n3>>n4;
	
	media = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
	cout<<fixed<<setprecision(1)<<"Media: "<<media<<endl;
	
	if (media>=7){
		cout<<"Aluno aprovado."<<endl;
	}
	
	else if (media>=5.0){
		double nExame;
		cout<<"Aluno em exame."<<endl;
		cout<<"Nota do exame: ";
		cin>>nExame;
		if((nExame + media)/2.0 > 5.0)
			cout<<"Aluno aprovado."<<endl;
		else 
			cout<<"Aluno reprovado."<<endl;
		
		cout<<fixed<<setprecision(1)<<"Media final: "<<(media+nExame)/2<<endl;	
	}else 
		cout<<"Aluno reprovado"<<endl;
		
	return 0;	
}
	

	

