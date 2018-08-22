#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	int casos, x, y;
	cin>>casos;
	while(casos--){
		int soma=0;
		cin>>x>>y;
		if(x % 2 != 0){
			for(int i = 0, j=x ; i < y ; i++, j+=2)
				soma += j;	
		}else{
			x++;
			for(int i = 0, j=x ; i < y ; i++, j+=2)
				soma += j;	
		}
		
		cout<<soma<<endl;
	}
	
	system("pause");
	return 0;
}
