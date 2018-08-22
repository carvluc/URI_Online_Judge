#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	int m, n, soma;
	cin>>m>>n;
	while(m>0 && n>0){
		soma=0;
		if(m>n){
			for(int i=n; i<=m; i++){
				cout<<i<<" ";
				soma+=i;
			}
			cout<<"Sum="<<soma<<endl;		
		}
		
		if(n>m){
			for(int i=m; i<=n; i++){
				cout<<i<<" ";
				soma+=i;
			}
			cout<<"Sum="<<soma<<endl;		
		}	
		
		cin>>m>>n;
	}
	system("pause");
	return 0;
}
	
	
