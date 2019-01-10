#include<iostream>

using namespace std;

int main(){
	int m, d, res,
		natal = 25, vespera = 24,
		mes[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 25};
	bool falta;	
	string msg;	
		
	while(cin >> m >> d){
		res = 0;
		falta = false;
		if(m == 12){
			if(d == natal)
				msg = "E natal!";
			else if(d == vespera)
				msg = "E vespera de natal!";
			else if(d < vespera){
				res = natal - d;
				falta = true;
			}else
				msg = "Ja passou!";
		}else{
			res = mes[m - 1] - d;
			for(int i = m; i < 12; i++)
				res += mes[i];
				
			falta =  true;	
		}
		
		if(!falta)
			cout << msg << endl; 	
		else 
			cout << "Faltam " << res << " dias para o natal!" << endl;
	}	
}
