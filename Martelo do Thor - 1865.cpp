#include<cstdlib>
#include<iostream>

using namespace std;

int main(){
	int c,n;
	string nome;
	cin>>c;
	while(c--){
		cin>>nome>>n;

		if(nome=="Thor"){
			cout<<"Y"<<endl;
		}else{
			cout<<"N"<<endl;
		}
	}
	system("PAUSE");
	return 0;
}
