#include<iostream>
#include<cstdlib>
#include<math.h>

using namespace std;

int main(){
	int n1, n2, n3, maior;
	cin>> n1>> n2 >>n3;
	
	//fabs() faz o modulo de um numero
	
	maior = (n1 + n2 + fabs(n1-n2))/2;
	maior = (maior + n3 + fabs(maior-n3))/2;
	cout<< maior<<" eh o maior"<<endl;
	return 0;
}
