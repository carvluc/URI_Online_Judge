#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	int caso, somaDosDois, inicial, final;
	cin>>caso;
	inicial = 0;
	final=1;
	somaDosDois=0;
	
	for(int i=1 ; i<=caso ; i++){
		cout<<somaDosDois;
		inicial = final;
		final = somaDosDois;
		somaDosDois = inicial + final;
		if(i!=caso){
			cout<<" ";
		}else{
			cout<<endl;
		}
 	}
	system("pause");
	return 0;
}
