#include<iostream>
#include<cstdlib>

using namespace std;

string Fases(int a, int  b){
    if(b>=0 && b<=2){
		return "nova";
	}

	else if(a>b && b<=96 && b>=3){
		return "minguante";
	}

 	else if(a<b && b<=96 && b>=3){
		return "crescente";
	}

	else if(b>=97 && b<=100){
		return "cheia";
	}
}

int main(){
	int a, b;
	cin>>a>>b;
	cout<<Fases(a,b)<<endl;
	
	system("PAUSE");
	return 0;
}
