#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	int x, soma=0;
	
	do{
	cin>>x;
		if(x%2==0 && x!=0){
			soma = 5*x+20;
			cout<<soma<<endl;
		}else if(x%2!=0 && x!=0){
			soma = (x+1)*5+20;
			cout<<soma<<endl;
			}
		}while(x!=0);
		
	system("PAUSE");
	return 0;
}
	
	
