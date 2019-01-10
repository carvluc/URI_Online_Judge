#include<iostream>

using namespace std;

int main(){
	int n;
	string rajesh, sheldon;
	
	cin >> n;
	
	while(n--){
		cin >> rajesh >> sheldon;
		
		if(rajesh == "tesoura" && (sheldon == "papel" || sheldon == "lagarto") || rajesh == "papel" && (sheldon == "pedra" || sheldon == "spock") ||
			rajesh == "pedra" && (sheldon == "lagarto" || sheldon == "tesoura") || rajesh == "lagarto" && (sheldon == "spock" || sheldon == "papel") ||
			rajesh == "spock" && (sheldon == "tesoura" || sheldon == "pedra"))
				cout << "rajesh";
		else if(sheldon == "tesoura" && (rajesh == "papel" || rajesh == "lagarto") || sheldon == "papel" && (rajesh == "pedra" || rajesh == "spock") ||
			sheldon == "pedra" && (rajesh == "lagarto" || rajesh == "tesoura") || sheldon == "lagarto" && (rajesh == "spock" || rajesh == "papel") ||
			sheldon == "spock" && (rajesh == "tesoura" || rajesh == "pedra"))
				cout << "sheldon";
		else
			cout << "empate";
			
		cout << endl;
	}
}
