#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n, membros, pos, caso = 1;
	
	cin >> n;
	
	while(n--){
		cin >> membros;
		
		int v[membros];
		
		for(int i = 0; i < membros; i++)
			cin >> v[i];
			
		pos = membros / 2;
		
		cout << "Case " << caso << ": " << v[pos] << endl;
		caso++;
	}
}
