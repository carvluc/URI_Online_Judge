#include<iostream>
#include<vector>

using namespace std;

int main(){
	int n, maior;
	vector<int> v;
	
	do{
		cin >> n;
		v.push_back(n);
	}while(n != 0);
	
	maior = v[0];
	
	for(int i = 1; v[i] != 0; i++)
		if(v[i] > maior)
			maior = v[i];
			
	cout << maior << endl;
}
