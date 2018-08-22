#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main(){
	int i=-2, j=65;
	
	while(j>0){
		i+=3;
		j-=5;
		cout<<"I="<<i<<" "<<"J="<<j<<endl;
	}
	
	system("PAUSE");
	return 0;
}
