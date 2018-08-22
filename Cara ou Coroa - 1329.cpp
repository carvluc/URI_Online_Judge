#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int n, caso, vJoao=0, vMaria=0;
	do{
        vJoao=0; vMaria=0;
		cin>>n;
		for(int i=1 ; i<=n ; i++){
			cin>>caso;
			if(caso==1){
				vJoao++;
			}else if(caso==0){
				vMaria++;
			}
		}
		if(n!=0){
		cout<<"Mary won "<<vMaria<<" times and John won "<<vJoao<<" times"<<endl;
		}
	}while(n!=0);

	system("pause");
	return 0;
}
