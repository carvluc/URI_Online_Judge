#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	int n;
	char texto(100);
	
	cin>>n;
	
	if(n>=1 && n<=2000){
		while(n--){
			cin>>texto;
		}
	}
	cout<<"Ciencia da Computacao"<<endl;
	
	system("PAUSE");
	return 0;
}
