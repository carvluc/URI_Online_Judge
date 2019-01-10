#include<iostream>

using namespace std;

int main(){
	int n, m;
	string entrada;
	
	cin >> n >> m;
	
	while(m--){
		cin >> entrada;
		
		if(entrada == "fechou")
			n += 1;
		else 	
			n -= 1; 
	}
	
	cout << n << endl;
}	
