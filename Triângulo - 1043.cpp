#include <iostream>
#include<iomanip>

using namespace std;

int main(){
	float A, B, C, perimetro, area;
	cin>>A>> B>> C;
	
	if(A+B>C && A+C>B && B+C>A){
		perimetro = A+B+C;
		cout<< fixed<< setprecision(1)<<"Perimetro = "<<perimetro<<endl;
	 }else{
		area = ((A+B)*C)/2;
		cout<< fixed<< setprecision(1)<<"Area = "<<area<<endl;
	}
}
