#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

int main(){
	int l;
	float matriz[12][12], soma=0;
	char letra;
	cin>>l>>letra;
    for(int i=0 ; i<12 ; i++)
    	for(int j=0 ; j<12 ; j++){
            cin>>matriz[i][j];
			if(i==l)
				soma+=matriz[i][j];
		}
	if(letra=='S'){
		cout<<fixed<<setprecision(1)<<soma<<endl;
	}else{
		cout<<fixed<<setprecision(1)<<soma/12<<endl;
	}
	system("pause");
	return 0;
}
