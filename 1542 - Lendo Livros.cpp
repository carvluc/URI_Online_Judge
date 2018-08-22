#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	int q, d, p, qtdPg;
	cin>>q;
	while(q != 0){
		cin>>d>>p;
		qtdPg = (q*d*p) / (p-q);
		if(qtdPg == 1)
		    cout<<qtdPg<<" pagina"<<endl;
		else{
		    cout<<qtdPg<<" paginas"<<endl;
		}
		cin>>q;
	}
}
