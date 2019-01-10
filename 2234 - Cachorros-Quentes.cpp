#include<iostream>
#include<stdlib.h>
#include<iomanip>

using namespace std;

int main(){
	int h, p;
	
	float r;
	
	cin >> h >> p;
	
	r = (float)h / p;
	
	cout << fixed << showpoint << setprecision(2) << r << endl;
}
