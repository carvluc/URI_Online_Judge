#include<iostream>
#include <cstdlib>

using namespace std;

int main(){
	int C, N;
	
	cin>>C;
	
	while(C--){
		cin>>N;
		if(N>=1 && N<=1000){
			if(N%2==0){
				cout<<"0"<<endl;
			}else{
				cout<<"1"<<endl;
			}			
		}
	}
	
	system("PAUSE");
	return 0;
}
