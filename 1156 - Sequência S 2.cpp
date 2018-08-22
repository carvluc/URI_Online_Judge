#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main(){
	float S=0;
	
	for(float j=3, i=1.0; i<=18 ; i++, j+=2)
		S += j / pow(2 , i);
	
	S += 1;
	
	cout<<fixed<<setprecision(2)<<S<<endl;
	
	system("pause");
	return 0;
	
}
