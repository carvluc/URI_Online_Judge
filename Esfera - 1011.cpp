#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
	int main(){
		double volume, raio;
		cin>> raio;
		volume = 4.0/3 * 3.14159 * raio * raio * raio;
		cout<< fixed << setprecision(3) << "VOLUME = "<<volume<<endl;
		system("PAUSE");
		return 0;
	}
