#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	int t, a, b, c, d, e, acertos=0;
	cin>>t;
	cin>>a>>b>>c>>d>>e;
	
	if(t>=1 && t<=4 && a>=1 && a<=4 && b>=1 && b<=4 && c>=1 && c<=4 && d>=1 && d<=4 && e>=1 && e<=4){
	
		if(t == a){
			acertos++;
		}
	
		if(t == b){
			acertos++;
		}
	
		if(t == c){
			acertos++;
		}	
	
		if(t == d){
			acertos++;
		}
	
		if(t == e){
			acertos++;
		}
	}
	cout<<acertos<<endl;
	
	system("PAUSE");
	return 0;	
}
