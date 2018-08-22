#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	int n, pos=0, aux=0;
	
	for(int i = 1; i<=100; i++){
		cin>>n;
		if(n>aux){
			aux = n;
			pos = i;
		}
	}
	
	cout<<aux<<endl<<pos<<endl;
	
	system("PAUSE");
	return 0;
}
