#include<iostream>
#include<cstdlib>

using namespace std;

int nPerfeito (int x){
	int soma=0;
	for(int i=1 ; i<x ; i++){
		if(x%i == 0){
			soma+=i;
		}
	}
	if(soma == x){
		return true;
	}else{
		return false;
	}
	
}

int main(){
	int n, n2;
	cin>>n;
	if(n>=1 && n<=20){
		while(n--){
			cin>>n2;
			if(nPerfeito(n2) == true){
				cout<<n2<<" eh perfeito"<<endl;
			}else{
                cout<<n2<<" nao eh perfeito"<<endl;
			}
		}
	}
	system("pause");
	return 0;
}
