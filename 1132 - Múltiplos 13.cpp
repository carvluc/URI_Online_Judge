#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	int x, y, soma=0;
	cin>>x>>y;
	if(x>y){
		for(int i=y; i<=x; i++)
			if(i%13!=0)
				soma+=i;			
	}
	if(y>x){
		for(int i=x; i<=y; i++)
			if(i%13!=0)
				soma+=i;			
	}
	
	cout<<soma<<endl;
	
	system("pause");
	return 0;
	
}
