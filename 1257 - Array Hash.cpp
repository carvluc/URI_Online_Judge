#include<iostream>
#include<map>

using namespace std;

int main(){
	int n, qtLinhas, i, hash, count, temp;
	map<char, int> alfabeto;
	
	for(char i = 0; i < 26; i++)
		alfabeto.insert(pair<char, int>(i + 65, (int)i));
	
	cin >> n;
	
	while(n--){
		hash = 0; i = 0, count = 0;
		cin >> qtLinhas;
		temp = qtLinhas;
		string entrada[temp];
		
		while(temp--){
			cin >> entrada[i];
			i++;
		}
		
		for(int i = 0; i < qtLinhas; i++){
			for(int j = 0; entrada[i][j]; j++)
				hash += alfabeto[entrada[i][j]] + count + j;
				
			count ++;
		}
			
		cout << hash << endl;	
	}
}
