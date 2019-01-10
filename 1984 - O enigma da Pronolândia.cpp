#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int i;
	
	int m = s.length();
	
	char sF[m];
	
	for(i = 0; s[i] != 0; i++, m--)
		sF[m-1] = s[i];
	
	sF[i] = 0;	
		
	cout << sF << endl;
}
