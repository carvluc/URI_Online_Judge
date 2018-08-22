#include<iostream>
#include<cstdlib>

using namespace std;

string Alternativa(int cont, int e){
	if(e==1)
	    switch(cont){
			case 1: return "A";
			case 2: return "B";
            case 3: return "C";
			case 4: return "D";
            case 5: return "E";
		}
	else
	    return "*";
}

int main(){
	int n, valor, cont, e;
	cin>>n;
	while(n!=0){
		while(n--){
			e=0;
			for(int i=1 ; i<=5 ; i++){
				cin>>valor;
				if(valor<=127){
					cont = i;
					e++;
				}
			}
			cout<<Alternativa(cont, e)<<endl;
		}
		cin>>n;
	}
	system("PAUSE");
	return 0;
}
