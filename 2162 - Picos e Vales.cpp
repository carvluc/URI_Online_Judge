#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n, i;
	bool pico = false, fail = false;
	
	cin >> n;
	
	int v[n];

	for(i = 0; i < n; i++){
		cin >> v[i];	
		
		if(i > 0 && v[i] == v[i - 1])	
			fail = true;
	}
	
	if(n <= 2 || fail){
		if(fail)
			cout << 0;
		else 
			cout << 1;
	}else if(!fail){
		if(v[0] > v[1])
			pico = true;
		else 
			pico = false;	
			
		for(i = 1; i < n - 1; i++){
			if(pico && v[i] < v[i + 1])
				pico = false; 
			else if(!pico && v[i] > v[i + 1])
				pico = true;
			else{
				fail = true;
				break;
			}	
		}
			
		if(fail)
			cout << 0;
		else 
			cout << 1;
	}	
	
	cout << endl;			
}
