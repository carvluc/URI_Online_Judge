#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main(){
	double n1, n2, media;
	cin>>n1;
	while(n1<0 || n1>10){
		cout<<"nota invalida"<<endl;
		cin>>n1;
	}
	cin>>n2;
	while(n2<0 || n2>10){
		cout<<"nota invalida"<<endl;
		cin>>n2;
	}	
	media= (n1+n2)/2;
	cout<< fixed<< setprecision(2)<<"media = "<< media<< endl;

	system("PAUSE");
	return 0;
}
