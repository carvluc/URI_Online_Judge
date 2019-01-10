#include<iostream>
#include<algorithm>   
#include<vector>

using namespace std;

bool decrescente(int a, int b){
	return a > b;
}

int main(){
	vector<int> par, impar;
	vector<int>::iterator it;
	int n, temp;
	
	cin >> n;
	
	while(n--){
		cin >> temp;
		if(temp % 2 == 0)
			par.push_back(temp);
		else
			impar.push_back(temp);
	}
	
	sort(par.begin(), par.end());
	sort(impar.begin(), impar.end(), decrescente);
	
	 for (it = par.begin(); it != par.end(); ++it)
	 	cout << *it << endl;
	 	
	 for (it = impar.begin(); it != impar.end(); ++it)
	 	cout << *it << endl;
}


