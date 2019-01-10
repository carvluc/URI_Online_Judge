#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<math.h>

using namespace std;

int geraNumero(string s){
	int x = 0, eleva = 0;
	for(int i = s.length() - 1; i >= 0; i--, eleva++){
		if(s[i] == '*')
			x += pow(2, eleva);
	}
	
	return x;
}

int main(){
	int n = 3, total;
	string entrada, fim = "caw caw";
	
	while(n--){
		total = 0;
		
		while(getline(cin, entrada)){
			if(entrada == fim)
				break;
			
			total += geraNumero(entrada);
		}
		
		cout << total << endl;
	}
}
