#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	string entrada;
	int ctr;
	
	while(getline(cin, entrada)){		
		ctr = 0;
	
		for(int i = 0; entrada[i]; i++)
			if(entrada[i] != ' '){
				if(ctr % 2 == 0 && entrada[i] + 32 > 122)
					entrada[i] -= 32;	
				else if(ctr % 2 != 0 && entrada[i] + 32 <= 122)
					entrada[i] += 32;	
				
				ctr++;
			}
	
		cout << entrada << endl;		
	}
	
	system("pause");
	return 0;
}
