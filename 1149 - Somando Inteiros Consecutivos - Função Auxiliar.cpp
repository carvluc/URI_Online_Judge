#include<iostream>

using namespace std;

int main(){
	int z=1, a, n, p, h=0;
	cin>>a>>n;
	while(n<=0){
		cin>>n;
	}

	while(z<=n){
		h += a;
		p = h;
		a++;
		z++;
	}
	cout<<h<<endl;
}
