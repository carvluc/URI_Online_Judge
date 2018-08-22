#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	int a, b;
	cin>>a>>b;
	
	if(b>=0 && b<=2){
		cout<<"nova"<<endl;
	}
	
	else if(a>b && b<=96 && b>=3){
		cout<<"minguante"<<endl;
	}
	
 	else if(a<b && b<=96 && b>=3){
		cout<<"crescente"<<endl;
	}
	
	else if(b>=97 && b<=100){
		cout<<"cheia"<<endl;
	}

	system("PAUSE");
	return 0;
}
