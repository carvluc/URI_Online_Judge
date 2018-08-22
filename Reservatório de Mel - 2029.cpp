#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <math.h>
#include <string.h>

using namespace std;

int main(){
	double d, v;
	double pi=3.14;
	double altura, area, raio;
		
	while(!cin.eof()){
 		cin>>v;
		cin>>d;
		
		raio = d/2;
		area = pow(raio, 2) * pi;
		altura = v/area;
		
		cout<<fixed<<setprecision(2)<<"ALTURA = "<< altura<<endl;
		cout<<fixed<<setprecision(2)<<"AREA = "<< area<<endl;
	}
	
	system("PAUSE");
	return 0;
	
}
