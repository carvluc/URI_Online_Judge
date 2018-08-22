#include<iostream>

using namespace std;

int main(){
	int n, x, contadorI=0, contadorO=0;
	cin>>n;
	if(n<10000){
		while(n--){
			cin>>x;
			if(x >=10 && x <=20){
				contadorI++;
			}else{
				contadorO++;
			}
		}
	}
	cout<<contadorI<<" in"<<endl;
	cout<<contadorO<<" out"<<endl;
	system("PAUSE");
	return 0;	
}
