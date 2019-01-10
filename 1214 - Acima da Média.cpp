#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	int n, qt, count;
	float media, pc;
		
	cin >> n;
	
	while(n--){
		cin >> qt;
		count = 0;
		media = 0;
		
		int v[qt];
		
		for(int i = 0; i < qt; i++){
			cin >> v[i];
			media += v[i];
		}
			
		media /= qt;
		
		for(int i = 0; i < qt; i++)
			if(v[i] > media)
				count++;	
		
		pc = ((float)count / qt) * 100;
		
		cout << fixed << setprecision(3) << pc << "%" << endl;	
	}
}
