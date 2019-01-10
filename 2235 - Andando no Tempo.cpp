#include<iostream>

using namespace std;

int main(){
	int a, b, c;
	
	cin >> a >> b >> c;
	
	if(a == b || b == c || a == c || a == c + b || c == a + b || b == c + a)
		cout << "S";
	else 
		cout << "N";
		
	cout << endl;
}
