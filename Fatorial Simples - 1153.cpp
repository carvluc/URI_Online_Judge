#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int n, resposta;
	cin>>n;
	if(n>0 && n<13){
		for(int i = n; i>1; i--){
			resposta = n*i; 
		}
	}
	cout<< resposta<< endl;
	
	system("PAUSE");
	return 0;
}
