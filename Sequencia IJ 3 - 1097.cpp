#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int i, j=7;
	
	for(i=1; i<=9; i+=2){
		cout<<"I="<<i<<" J="<<j<<endl;
		cout<<"I="<<i<<" J="<<j-1<<endl;
		cout<<"I="<<i<<" J="<<j-2<<endl;
		j+=2;
	}
			
	system("PAUSE");
	return 0;	
}
