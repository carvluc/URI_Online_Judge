#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=0 ; i<n ; i++){
		if(i != n-1){
			cout<<"Ho ";
		}
		else{
			cout<<"Ho!"<<endl;
		}
	}
	system("pause");
	return 0;	
}
