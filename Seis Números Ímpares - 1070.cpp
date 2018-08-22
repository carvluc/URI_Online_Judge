#include<iostream>

using namespace std;

int main(){
	int n;
	
	cin >> n;

    if (n % 2 == 0){
    	n++;
	}
       
    for (int i = 0; i <= 5; i++, n += 2) {
    	cout<< n<< endl;
	}
	
	system("PAUSE");
	return 0;	
}
