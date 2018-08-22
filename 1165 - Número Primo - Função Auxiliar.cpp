#include<iostream>
#include<cstdlib>

using namespace std;

int nPrimo (int x){
	int soma=0;
	for(int i=1; i<=x ; i++){
		if(x%i == 0){
			soma++;
		}
	}
	if(soma>2){
		return false;
	}else{
		return true;
	}
}

int main(){
	int caso, n;
	cin>>caso;
	while(caso--){
		cin>>n;
		if(nPrimo(n) == false){
			cout<<n<<" nao eh primo"<<endl;
		}else{
			cout<<n<<" eh primo"<<endl;
		}
	}
	system("pause");
	return 0;
}
