#include <iostream>  
using namespace std;  
int main (){
	int x,y;
	
	while(x!=y){
	cin>>x>>y;
		if(x == y){
			break;
		}
		else if(x<y){
			cout<<"Crescente"<<endl;			
		}else{
			cout<<"Decrescente"<<endl;
		}
	}	
}
