#include <iostream>

using namespace std;

int Fatorial(int a){
	int result=1;
	for (int i = a; i>1; i--){
		result *= i;
	}
	return result;
}

int main(){
	int n, fat;
	cin>>n;
	if (n==0){
			cout<<1<<endl;
		}else{
			fat = Fatorial(n);
			cout<<fat<<endl;
		}
	system("pause");
	return 0;
}
