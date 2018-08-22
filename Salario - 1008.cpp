#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main(){
	int n, horasT; 
	double lH;
	cin>>n;
	cin>>horasT;
	cin>>lH;
	cout<<fixed << setprecision(2)<< "NUMBER = "<<n<<endl;
	cout<<fixed << setprecision(2)<< "SALARY = U$ "<<horasT * lH<<endl;
	return 0;
}
