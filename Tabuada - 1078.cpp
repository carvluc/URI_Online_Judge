#include<iostream>

using namespace std;

int main(){
	int tabuada = 0,n, i=1;
	cin>>n;
	
	if(n>=2 && n<=1000){
		while(i<=10){
			tabuada = i*n;
			cout<<i<<" x "<<n<<" = "<<tabuada<<endl; 
			i++;
		}
  	}	
	return 0;
}
