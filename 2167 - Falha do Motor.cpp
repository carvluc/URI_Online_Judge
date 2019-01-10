#include<iostream>

using namespace std;

int main(){
	int n, i;
	bool fail = false;
	cin >> n;
	
	int v[n];
	
	for(i = 0; i < n; i++){
		cin >> v[i];
		
		if(i > 0 && v[i] < v[i - 1]){
			fail = true;
			break;
		}
	}
	
	if(fail)
		cout << i + 1;		
	else
		cout << 0;
		
	cout << endl;
}	
