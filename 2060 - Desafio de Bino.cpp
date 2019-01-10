#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<math.h>

using namespace std;

int main(){
	int n, i, qt2 = 0, qt3 = 0, qt4 = 0, qt5 = 0;
	cin >> n;
	int v[n];
	
	for(i = 0; i < n; i++){
		cin >> v[i];
		
		if(v[i] % 2 == 0)
			qt2++;
		if(v[i] % 3 == 0)
			qt3++;
		if(v[i] % 4 == 0)
			qt4++;
		if(v[i] % 5 == 0)
			qt5++;
	}
		
	cout << qt2 << " Multiplo(s) de 2" << endl <<
		qt3 << " Multiplo(s) de 3" << endl <<
		qt4 << " Multiplo(s) de 4" << endl <<
		qt5 << " Multiplo(s) de 5" << endl;		
	 
}
