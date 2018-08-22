#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	int x, y, aux=0;
	cin>>x;
	cin>>y;
	
	if(x>y){
		for(int i=x-1; i>y; i--){
				if(i%2!=0){
					aux+=i;
				}
			}
			cout<<aux<<endl;
		}
		
	else if(x<y){
		for(int i=x+1; i<y; i++){
				if(i%2!=0){
					aux+=i;
				}
			}
			cout<<aux<<endl;		
		}
	
	else if(x == y-1 || x == y+1 || x==y){
		cout<<"0"<<endl;
	}
	
	system("PAUSE");
	return 0;
}
