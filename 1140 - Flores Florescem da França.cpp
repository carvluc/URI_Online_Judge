#include<iostream>

using namespace std;

int main(){
	string entrada;
	bool ok;
	char objetivo;
	
	while(true){
		getline(cin, entrada);
		ok = true;
		
		if(entrada == "*")
			break;
			
		objetivo = toupper(entrada[0]);
		
		for(int i = 1; i < entrada.length() - 1; i++)
			if(entrada[i] == ' ' && toupper(entrada[i + 1]) != objetivo){
				ok = false;
				break;
			}
				
		if(ok)
			cout << "Y";
		else
			cout << "N";
			
		cout << endl;				
	}
}
