#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	int n, x, y, soma;
	cin>>n;
	while(n--){
		soma=0;
		cin>>x>>y;
		if(x>=y){
			for(int i=y+1; i<x; i++)
				if(i%2!=0)
					soma+=i;
			
			cout<<soma<<endl;
		}
		if(y>x){
			for(int i=x+1; i<y; i++)
				if(i%2!=0)
					soma+=i;
					
			cout<<soma<<endl;
		}
	}
	system("pause");
	return 0;
}
	
	
