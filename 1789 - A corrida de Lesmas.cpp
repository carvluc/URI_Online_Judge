#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	int x; 
	while(cin>>x){
		int vel[x];
		int maior=0;
		while(x--){
			cin>>vel[x];
			if(vel[x] > maior)
				maior = vel[x];
		}
		
		if(maior < 10)
			cout<<1<<endl;
		
		else if(maior>=10 && maior<20)
			cout<<2<<endl;
		
		else if(maior>=20)
			cout<<3<<endl;
	}
	
	system("pause");
	return 0;
}
