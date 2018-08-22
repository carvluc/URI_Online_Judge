#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;

int main(){
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		long long fib[n+1];
		if(n==0)
			    cout<<"Fib(0) = 0"<<endl;
		else{
			fib[0]=0;
			fib[1]=1;
			for(int i=2; i <= n+1; i++){
				fib[i] = fib[i-2] + fib[i-1];
			}
			cout<<"Fib("<<n<<") = "<<fib[n] << endl;
		}
	}
	
	system("PAUSE");
	return 0;
 }
