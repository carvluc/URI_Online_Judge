#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	long long int N, L;
	cin>>N>>L;
	
	if(N>=3 && N<=1000000 && L>=1 && L<=4000){
		cout<<N*L<<endl;
	}
	
	system("PAUSE");
	return 0;
}
