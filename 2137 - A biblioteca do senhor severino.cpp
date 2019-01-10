#include<iostream>

using namespace std;

int main(){
	int n, i, j;
	
	while(cin >> n){
		string temp, s[n];
		for(i = 0; i < n; i++)
			cin >> s[i];
			
		for(i = 0; i < n; i++)
			for(j = 0; j < n - 1; j++)
				if(s[j].compare(s[j + 1]) > 0){
					temp = s[j + 1];
					s[j + 1] = s[j];
					s[j] = temp;
				}
								
		for(i = 0; i < n; i++)
			cout << s[i] << endl;
	}
}
