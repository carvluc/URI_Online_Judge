#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int i ;
	double x, y, z, media;
	cin>>i;
	
	while(i--){
		cin>>x>>y>>z;
			media = ((x*2)+(y*3)+(z*5))/10;
			cout<<fixed<<setprecision(1)<<media<<endl;
	}
	system("PAUSE");
	return 0;	
}
