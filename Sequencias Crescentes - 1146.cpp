#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	int x;
	
	while(x!=0){
		cin>>x;
		for(int i=1; i<=x; i++){
			cout<<i;
			if(x!=i){
				cout<<" ";
			}else{
				cout<<""<<endl;
			}
		}
	}
	
	system("PAUSE");
	return 0;
}
