#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int r, l, v, res;
	
	cin >> r >> l;
	
	v = (4.0 / 3.0) * (3.1415 * pow(r, 3.0));
	
	res = l / v; 
	
	cout << res << endl;
}
