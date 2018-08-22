#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int par, numeros=0, n;
	
	for (numeros=0 ; numeros<=4; numeros++){
		cin>>n;
			if(n%2==0){
				par++;
			}
	}

	cout<< par<<" valores pares"<<endl;
	
	system("PAUSE");
	return 0;
}
