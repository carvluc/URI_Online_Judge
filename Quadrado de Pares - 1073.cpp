#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main (){
	int n, auxiliar, resposta=0;
	cin>>n;
	
	if (n>5 && n<2000){
		for(auxiliar=1; n>=auxiliar; auxiliar++){
			if(auxiliar % 2 == 0){
				resposta = pow(auxiliar,2);
				cout<<auxiliar<<"^2 = "<<resposta<<endl;
			}
   		}
	}
	system("PAUSE");
	return 0;
}
