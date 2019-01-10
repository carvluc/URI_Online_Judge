#include<iostream>
#include<string.h>

using namespace std;

int main(){
	string linha;
	getline(cin, linha);
	
	if(linha.length() > 80)
		cout << "NO";
	else
		cout << "YES";
		
	cout << endl;
}
