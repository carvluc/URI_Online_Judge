#include<iostream>
#include<vector>

using namespace std;

class problema{
public:
	int tempo;
	string avaliacao;
	char id;
};

bool contains(vector<char>& v, char x){
	for(vector<char>::iterator it = v.begin(); it != v.end(); ++it)
		if(*it == x)
			return true;	
	
	return false;
}

int main(){
	int n, qtdCorretos, totMin;
	problema temp;
	vector<problema> array;
	vector<char> tot;
	vector<problema>::iterator it;
	bool ok;
		
	while(true){
		qtdCorretos = 0; totMin = 0;
		ok = false;
		tot.clear();
		array.clear();
		
		cin >> n;
		
		if(n == 0)
			break;
			
		while(n--){
			cin >> temp.id;
			cin >> temp.tempo;
			getchar();
			cin >> temp.avaliacao;
			
			array.push_back(temp);
		}
		
		for(it = array.begin(); it != array.end(); ++it)
			if(it->avaliacao == "correct" && !contains(tot, it->id)){
				tot.push_back(it->id);
				qtdCorretos++;
				ok = true;
				totMin += it->tempo;
			}
			
		for(it = array.begin(); it != array.end(); ++it)
			if(it->avaliacao == "incorrect" && contains(tot, it->id))
				totMin += 20;
			
		if(ok){
			cout << qtdCorretos << " " << totMin << endl;
		}else
			cout << 0 << " " << 0 << endl;
	}
}
