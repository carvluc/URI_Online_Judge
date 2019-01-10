#include<iostream>

using namespace std;

int main(){
	int n;
	char f;
	
	cin >> n;
	
	if(n == 0)
		f = 'E';
	else if(n >= 1 && n <= 35)
		f = 'D';
	else if(n >= 36 && n <= 60)
		f = 'C';
	else if(n >= 61 && n <= 85)
		f = 'B';
	else if(n >= 86 && n <= 100)
		f = 'A';

	cout << f << endl;	
}
