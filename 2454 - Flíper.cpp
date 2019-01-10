#include<iostream>

using namespace std;

int main(){
	int n, k;
	char r;
	cin >> n >> k;
	
	if(n == 0)
		r = 'C';
	else if(k == 1)
		r = 'A';
	else
		r = 'B';
		
	cout << r << endl;
}
