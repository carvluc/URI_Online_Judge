#include<iostream>

using namespace std;

int main(){
	int s, t, f, fim;
	
	cin >> s >> t >> f;
	
	fim = s + t;
	
	if(fim >= 24)
		fim -= 24;
	
	fim += f;
	
	if(fim >= 24)
		fim -= 24;
		
	if(fim < 0)
		fim += 24;
		
	cout << fim << endl; 
}
