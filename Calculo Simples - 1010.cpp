#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main(){
	double p1[3], p2[3], total; 
	cin>>p1[1]>>p1[2]>>p1[3];
	cin>>p2[1]>>p2[2]>>p2[3];
	total = ((p1[2]*p1[3]) + (p2[2]*p2[3]));
	cout<<fixed <<setprecision(2) <<"VALOR A PAGAR: R$ "<< total<< endl;
	return 0;
}
