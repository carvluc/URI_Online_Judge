#include <iostream>
#include <cstdlib>

using namespace std;

int VitoriasMaria(int caso){
	if(caso==0)
		return 1;
	else
		return 0;
}

int VitoriasJoao(int caso){
	if(caso==1)
		return 1;
	else
	    return 0;
}
	

int main(){
	int n, caso, vMaria, vJoao;
	do{
        cin>>n;
        vMaria=0; vJoao=0;
        if(n!=0){
			for(int i=0 ; i<n ; i++){
				cin>>caso;
				vMaria += VitoriasMaria(caso);
				vJoao += VitoriasJoao(caso);
			}
			cout<<"Mary won "<<vMaria<<" times and John won "<<vJoao<<" times"<<endl;
		}
	}while(n!=0);

	system("pause");
	return 0;
}

