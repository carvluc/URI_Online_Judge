#include<iostream>
#include<cstdlib>
#include<math.h>

using namespace std;

int main(){
	long long int N, T, resposta;
	cin>>N;
	
	if(N>=1 && N<=100000){
		while(N--){
			cin>>T;
			
			if(T>=0 && T<=pow(2,31)){
				resposta = T - 2015;
				
				if(resposta == 0 || resposta<0){
					resposta = abs(resposta) + 1;
					cout<< resposta + " A.C."<<endl;
				}else{
					cout<<resposta + " D.C."<<endl;
				}	
			}
		}
	}
	
	system("PAUSE");
	return 0;
}
