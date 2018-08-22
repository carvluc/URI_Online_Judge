#include<iostream>
#include <cstdlib>

using namespace std;

int main(){
	int A, B, C, D;
	cin>>A>>B>>C>>D;
	
	if(A>=1 && A<=100 && B>=1 && B<=100 && C>=1 && C<=100 && D>=1 && D<=100){
		
		if(A+B>C && A+C>B && B+C>A){
			cout<<"S"<<endl;
		}
		
		else if(D+B>C && D+C>B && B+C>D){
			cout<<"S"<<endl;
		}
		
		else if(A+D>C && A+C>D && D+C>A){
			cout<<"S"<<endl;
		}
		
		else if(A+B>D && A+D>B && B+D>A){
			cout<<"S"<<endl;
		}
		
		else{
			cout<<"N"<<endl;
		}
		
	}
	
	system("PAUSE");
	return 0;
	
}
