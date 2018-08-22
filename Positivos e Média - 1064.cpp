#include<iostream>

using namespace std;

int main(){
	float n1, n2, n3, n4, n5, n6, positivos, media;
	
	cin>>n1;
	cin>>n2;
	cin>>n3;
	cin>>n4;
	cin>>n5;
	cin>>n6;
	
	if(n1>0){
		positivos++;
	}else{
		n1=0;
	}
	
	if(n2>0){
		positivos++;
	}else{
		n2=0;
	}
	
	if(n3>0){
		positivos++;
	}else{
		n3=0;
	}
	
	if(n4>0){
		positivos++;
	}else{
		n4=0;
	}
	
	if(n5>0){
		positivos++;
	}else{
		n5=0;
	}
	
	if(n6>0){
		positivos++;
	}else{
		n6=0;
	}
	
	media = (n1+n2+n3+n4+n5+n6)/positivos;
	
	cout<<positivos<<" valores positivos"<<endl;
	cout<<media<<endl;
	
	
	system("PAUSE");
	return 0;
	
}
