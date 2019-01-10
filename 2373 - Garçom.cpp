#include<iostream>

using namespace std;

int main(){
	int n, l, c, f = 0;
	
	cin >> n;
	
	while(n--){
		cin >> l >> c;
		
		if(l > c)
			f += c;
	}
	
	cout << f << endl;
}
