#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<math.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	string p1, p2;
	
	while(n--){
		cin >> p1 >> p2;
		if(p1 == "ataque" && (p2 == "pedra" || p2 == "papel") || p1 == "pedra" && p2 == "papel")
			cout << "Jogador 1 venceu" << endl;
		else if(p2 == "ataque" && (p1 == "pedra" || p1 == "papel") || p2 == "pedra" && p1 == "papel")
			cout << "Jogador 2 venceu" << endl;
		else if(p1 == "papel" && p2 == "papel")
			cout << "Ambos venceram" << endl;
		else if(p1 == "pedra" && p2 == "pedra")
			cout << "Sem ganhador" << endl;
		else 
			cout << "Aniquilacao mutua" << endl;
	}
}
