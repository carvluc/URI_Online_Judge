#include<iostream>

using namespace std;

int main(){
	string t;
	
	getline(cin, t);
	
	if(t.length() > 140)
		cout << "MUTE";
	else 
		cout << "TWEET";
		
	cout << endl;
}
