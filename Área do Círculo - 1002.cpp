#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
	int main(){
		double area, raio;
		cin>> raio;
		area = 3.14159 * raio * raio;
		
		//Demilita o número de casas decimais
		cout<< fixed << setprecision(4) << "A="<<area<<endl;
		
		system("PAUSE");
		return 0;
	}
