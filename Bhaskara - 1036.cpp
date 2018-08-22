#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <math.h>
using namespace std;

int main(){
	double  A,B,C, delta; 
	cin>>A >> B >> C;
	
	delta = B*B-4*A*C;	
	if(A > 0 && delta > 0){
		double r1,r2;
		
		r1 = (-B + (sqrt(delta)))/(2*A);
		r2 = (-B - (sqrt(delta)))/(2*A); 
		cout<<fixed << setprecision(5)<< "R1 = "<<r1<<endl<<"R2 = "<<r2<<endl;
	}else{
		cout<<"Impossivel calcular"<<endl;
		}
	return 0;
}
