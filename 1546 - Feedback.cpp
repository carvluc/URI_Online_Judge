#include<iostream>

using namespace std;

int main(){
	int n, k, temp;
	string responsavel;
	cin >> n;
	
	while(n--){
		cin >> k;
		
		while(k--){
			cin >> temp;
			switch(temp){
				case 1:
					responsavel = "Rolien";
					break;
				case 2:
					responsavel = "Naej";
					break;
				case 3:
					responsavel = "Elehcim";
					break;
				case 4:
					responsavel = "Odranoel";
					break;
			}
			
			cout << responsavel << endl;
		}
	}
}
