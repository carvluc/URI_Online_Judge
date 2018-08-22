#include<iostream>

using namespace std;

int main(){
	float n1,n2,n3,n4,n5,n6, contador;
	cin>>n1;
	cin>>n2;
	cin>>n3;
	cin>>n4;
	cin>>n5;
	cin>>n6;
	
	if (n1>0){
		contador++;
	}
	if (n2>0){
		contador++;
	}
	if (n3>0){
		contador++;
	}
	if (n4>0){
		contador++;
	}
	if (n5>0){
		contador++;
	}
	if (n6>0){
		contador++;
	}
	
	cout<<contador<<" valores positivos"<<endl;	
	system("PAUSE");
	return 0;
}
