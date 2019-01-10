#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int qt, i, pos;
	float maior = 0;
	
	cin >> qt;
	
	float n[qt][2];
	
	for(i = 0; i < qt; i++){
		cin >> n[i][0] >> n[i][1];
		
		if(n[i][1] > maior){
			maior = n[i][1];
			pos = i;
		}
	}	
		
	if(maior >= 8.0)			
		cout << n[pos][0];	
	else 
		cout << "Minimum note not reached";	
		
	cout << endl;
}
