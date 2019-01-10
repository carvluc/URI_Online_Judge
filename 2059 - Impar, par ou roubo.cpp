#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int p, j1, j2, r, a, ganhador;
	bool isPar;
	
	cin >> p >> j1 >> j2 >> r >> a;
	
	isPar = (j1 + j2) % 2 == 0;
	
	if(r == 0 && a == 0){
		if(p == 1 && isPar || p == 0 && !isPar)
			ganhador = 1;
		else 		
			ganhador = 2;
	}
	else if(r == 1 && a == 1){
		ganhador = 2;
	}
	else{
		ganhador = 1;
	}
	
	cout << "Jogador " << ganhador << " ganha!" << endl;
}
