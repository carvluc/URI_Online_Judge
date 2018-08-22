#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int n, numero=1;
	cin>>n;
	
	for (int i=0; i<n*4; ){
		cout << (i+1) << " " << (i+2) << " " << (i+3) << " PUM\n";
        i+=4;
	}
	
	system("PAUSE");
	return 0;
	
}
