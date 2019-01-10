#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<math.h>

using namespace std;

int main(){
	int alt, n, i;
	bool gOver = false;
	
	cin >> alt >> n;
	
	int canos[n];
	
	for(i = 0; i < n; i++)
		cin >> canos[i];
	
	for(i = 0; i < n - 1; i++)
		if(abs(canos[i] - canos[i + 1]) > alt) 
			gOver = true;

	if(gOver)
		cout << "GAME OVER";
	else 
		cout << "YOU WIN";
		
	cout << endl;			
			
}
