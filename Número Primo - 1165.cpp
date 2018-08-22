#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	int n, primo;
	cin>>n;
	
	if(n>=1 && n<=100){
		while (n--){
			cin>>primo;
				if(primo>=1 && primo<=10000000)
					if(primo%primo==0 && primo%1==0 && primo%2!=0 ){
						cout<<primo<<" eh primo"<<endl;
					}else{
						cout<<primo<<" nao eh primo"<<endl;
					}
			}
  		}
}
