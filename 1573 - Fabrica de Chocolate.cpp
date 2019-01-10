#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int a, b, c, r;
	
	while(true){
		cin >> a >> b >> c;
		
		if(a == 0 && b == 0 && c == 0)
			break;
		
		r = pow(a * b * c, 1.0 / 3);
		
		cout << r << endl;
	}
}
