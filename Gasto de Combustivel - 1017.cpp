#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main (){
	int tempo, velo;
	cin>>tempo;
	cin>>velo;
	cout<< fixed<< setprecision(3)<< ((velo*tempo)/12.0)<< endl;
	return 0;
}
