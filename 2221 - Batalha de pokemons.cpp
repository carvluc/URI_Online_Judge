#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int qt, bonus,
		gAi, gDi, gLi,
		dAi, dDi, dLi,
		gCalc, dCalc;
	string vencedor;
	
	cin >> qt;
	
	while(qt--){
		cin >> bonus;
		cin >> dAi >> dDi >> dLi;
		cin >> gAi >> gDi >> gLi;
		
		dCalc = dLi % 2 == 0 ? (dAi + dDi) / 2 + bonus : (dAi + dDi) / 2;
		gCalc = gLi % 2 == 0 ? (gAi + gDi) / 2 + bonus : (gAi + gDi) / 2;
		
		if(dCalc > gCalc)
			vencedor = "Dabriel";
		else if(dCalc < gCalc)
			vencedor = "Guarte";
		else
			vencedor = "Empate";
			
		cout << vencedor << endl;
	}
}
