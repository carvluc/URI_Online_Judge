#include <iostream>
#include <cstdlib>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	int base=1, n;
	cin>>n;
	
	if(n>1 && n<1000){
	for (int i=0; i<n; i++){
		cout<<fixed<<setprecision(0)<<base<<" "<<pow(base,2)<<" "<<pow(base,3)<<endl;
		cout<<fixed<<setprecision(0)<<base<<" "<<pow(base,2)+1<<" "<<pow(base,3)+1<<endl;
		base++;
		}
	}
	
	system("PAUSE");
	return 0;
	
}
