#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	int n[1000], t;
	cin>>t;
	
	for(int i=0, j=0 ; i<1000 ; i++, j++){
		if(j == t-1){
        	n[i] = j;
			j = -1;
		}else
			n[i] = j;
			
		cout <<"N["<<i<<"] = "<<n[i]<< endl;
	}
	system("pause");
	return 0;
}
