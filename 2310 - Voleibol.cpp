#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int n, i, j;
	string nome;
	
	cin >> n;
	
	float dados[n][6], saqueT = 0, saqueE = 0, bloqT = 0, bloqE = 0, ataE = 0, ataT = 0;
	
	for(i = 0; i < n; i++){
		cin >> nome;
		cin >> dados[i][0] >> dados[i][1] >> dados[i][2] 
			>> dados[i][3] >> dados[i][4] >> dados[i][5];
	}
	
	for(i = 0; i < n; i++){
		saqueT += dados[i][0];
		saqueE += dados[i][3];
		
		bloqT += dados[i][1];
		bloqE += dados[i][4];
		
		ataT += dados[i][2];
		ataE += dados[i][5];
	}
		
	cout << fixed << setprecision(2) << 
		"Pontos de Saque: " << saqueE / saqueT * 100 << " %." << endl <<
		"Pontos de Bloqueio: " << bloqE / bloqT * 100 << " %." << endl <<
		"Pontos de Ataque: " << ataE / ataT * 100 << " %." << endl;
}

