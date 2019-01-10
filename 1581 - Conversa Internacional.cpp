#include<iostream>

using namespace std;

int main(){
	int n, k, temp, i;
	bool ingles;
	
	cin >> n;
	
	while(n--){
		i = 0; ingles = false;
		cin >> k;
		
		string entrada[k];
		
		temp = k;
		
		while(temp--){
			cin >> entrada[i];
			i++;
		}
		
		for(int i = 0; i < k - 1; i++)
			if(entrada[i] != entrada[i + 1])
				ingles = true;
				
		if(ingles)
			cout << "ingles";
		else 
			cout << entrada[0];
		
		cout << endl;
	}
}
