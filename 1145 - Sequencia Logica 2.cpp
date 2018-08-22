#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	int x, y;
	cin>>x>>y;
	if ((x>1 && x<20) && (y>x && y<100000)){
		for(int i=1 ; i<=y ; i++){
			cout<<i;
			if (i%x == 0 || i==y){
				cout<<endl;
			}else{
				cout<<" ";
			}
		}

	}
	system("pause");
	return 0;
}
