#include <iostream>
#include <math.h>

using namespace std;

int main(){
	float a, b, c, aux;
	cin>>a>>b>>c;
	if(a>0 && b>0 && c>0){
		//colocando em ordem decrescente
		if (a < b){	
		aux = a;
        a = b;
        b = aux;
    }

    if (b < c){
        aux = b;
        b = c;
        c = aux;
    }

    if (a < b){
        aux = a;
        a = b;
        b = aux;
    }
		
		//definindo tipo de triangulo
		if(a >= b+c) cout<<"NAO FORMA TRIANGULO"<<endl;	
		
		else if(pow(a,2) == pow(b,2) + pow(c,2)) cout<<"TRIANGULO RETANGULO"<<endl;
		
		else if(pow(a,2) > pow(b,2) + pow(c,2)) cout<<"TRIANGULO OBTUSANGULO"<<endl;
		
		else if(pow(a,2) < pow(b,2) + pow(c,2)) cout<<"TRIANGULO ACUTANGULO"<<endl;
		
		if(a == b && b == c) cout<<"TRIANGULO EQUILATERO"<<endl;
		
		else if(a == b || b == c) cout<<"TRIANGULO ISOSCELES"<<endl;
	}	
	system("PAUSE");
	return 0;
	
}
