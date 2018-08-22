#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	int teste, caso=0;
	string a, b;
	
	cin>>teste;
	
	while(teste--){
		cin>>a>>b;
		caso++;
		
		if(a==b)
			cout<<"Caso #"<<caso<<": De novo!"<<endl;
		
		if((a=="tesoura" && b=="papel") || (a=="tesoura" && b=="lagarto"))
			cout<<"Caso #"<<caso<<": Bazinga!"<<endl;
		if((a=="papel" && b=="pedra") || (a=="papel" && b=="Spock"))
			cout<<"Caso #"<<caso<<": Bazinga!"<<endl;
		if((a=="pedra" && b=="lagarto") || (a=="pedra" && b=="tesoura"))
			cout<<"Caso #"<<caso<<": Bazinga!"<<endl;
		if((a=="lagarto" && b=="Spock") || (a=="lagarto" && b=="papel"))
			cout<<"Caso #"<<caso<<": Bazinga!"<<endl;
		if((a=="Spock" && b=="tesoura") || (a=="Spock" && b=="pedra"))
			cout<<"Caso #"<<caso<<": Bazinga!"<<endl;
			
		if((a=="papel" && b=="tesoura") || (a=="papel" && b=="lagarto"))
			cout<<"Caso #"<<caso<<": Raj trapaceou!"<<endl;
		if((a=="pedra" && b=="papel") || (a=="pedra" && b=="Spock"))
			cout<<"Caso #"<<caso<<": Raj trapaceou!"<<endl;
		if((a=="lagarto" && b=="pedra") || (a=="lagarto" && b=="tesoura"))
			cout<<"Caso #"<<caso<<": Raj trapaceou!"<<endl;
		if((a=="Spock" && b=="papel") || (a=="Spock" && b=="lagarto"))
			cout<<"Caso #"<<caso<<": Raj trapaceou!"<<endl;
		if((a=="tesoura" && b=="pedra") || (a=="tesoura" && b=="Spock"))
			cout<<"Caso #"<<caso<<": Raj trapaceou!"<<endl;
	}
	system("pause");
	return 0;
}
