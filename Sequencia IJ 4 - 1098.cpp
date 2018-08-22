#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	double i, j1=1, j2=2, j3=3;
	
	for(i=0; i<=2; i+=0.2){
		cout<<"I="<<i<<" J="<<j1+i<<endl;
		cout<<"I="<<i<<" J="<<j2+i<<endl;
		cout<<"I="<<i<<" J="<<j3+i<<endl;
	}
			
	system("PAUSE");
	return 0;	
}
