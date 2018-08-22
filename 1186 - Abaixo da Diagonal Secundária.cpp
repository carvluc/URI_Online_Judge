#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

int main(){
	float matriz[12][12], soma=0, aux=12;
	char letra;
	cin>>letra;

    for(int i=0 ; i<12 ; i++){
    	for(int j=0 ; j<12 ; j++){
            cin>>matriz[i][j];
			if(j>=aux)
				soma+=matriz[i][j];
			}
			aux--;
	}

	if(letra=='S'){
		cout<<fixed<<setprecision(1)<<soma<<endl;
	}else{
		cout<<fixed<<setprecision(1)<<soma/66<<endl;
	}
	system("pause");
	return 0;
}
