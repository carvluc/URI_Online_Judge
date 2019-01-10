#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	string entrada, extra;
	int qt1 = 0;
	
	cin >> entrada;
	
	for(int i = 0; entrada[i]; i++)
		if(entrada[i] == '1')
			qt1++;
			
	if(qt1 % 2 == 0)
		extra = "0";
	else 
		extra = "1";
		
	string final(entrada + extra);
	
	cout << final << endl;
}
