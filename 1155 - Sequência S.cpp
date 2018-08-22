#include<cstdlib>
#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	float S=0;
	
	for(float i = 2.0 ; i<=100 ; i++)
		S += 1/i;
		
	S+=1;
	
	cout<<fixed<<setprecision(2)<<S<<endl;
	
	system("pause");
	return 0;
}
