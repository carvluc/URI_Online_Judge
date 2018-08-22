#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	double p1[2], p2[2], distancia; 
	cin>>p1[1]>>p1[2];
	cin>>p2[1]>>p2[2];
	distancia = sqrt(((p1[1] - p2[1]) * (p1[1] - p2[1])) + ((p2[2] - p1[2]) * (p2[2] - p1[2])));
	cout<< fixed<< setprecision(4)<< distancia<<endl;
	return 0;
}
