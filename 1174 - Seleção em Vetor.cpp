#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;

int main(){
	float a[100];
	for(int i=0; i<100 ; i++){
		cin>>a[i];
	}
	for(int i=0; i<100 ; i++)
		if(a[i] <= 10)
			cout<<fixed<<setprecision(1)<<"A["<<i<<"] = "<<a[i]<<endl;

	system("PAUSE");
	return 0;
 }
