#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	int n, a;
	while(cin>>n){
		long long matriz[n][n];
		a = n/3;
		
		for(int i=0 ; i<n ; i++)
		    for(int j=0 ; j<n ; j++){
				matriz[i][j] = 0;
				if(i+j == n-1)
				    matriz[i][j] = 3;
				if(i == j)
				    matriz[i][j] = 2;
				if(i>=a && j>=a && i <= n-(a+1) && j<=n-(a+1))
					matriz[i][j] = 1;
				if( i==j && i+j == n-1)
				    matriz[i][j] = 4;
				}
				
				for(int i=0 ; i<n ; i++){
		    		for(int j=0 ; j<n ; j++){
		    		    cout<<matriz[i][j];
					}
				cout<<endl;
			}
	}
}
