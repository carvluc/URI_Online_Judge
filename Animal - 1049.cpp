#include <iostream>
#include<cstdlib>
#include <string.h>

using namespace std;

int main(){
	string  a, b, c;
	cin>>a;
	cin>>b;
	cin>>c;
	
	if(a=="vertebrado"){
		if(b=="ave"){
			if(c=="carnivoro"){
				cout<<"aguia"<<endl;
			}
		}
	}
	
	if(a=="vertebrado"){
		if(b=="ave"){
			if(c=="onivoro"){
				cout<<"pomba"<<endl;
			}
		}
	}
	
	if(a=="vertebrado"){
		if(b=="mamifero"){
			if(c=="onivoro"){
				cout<<"homem"<<endl;
			}
		}
	}
	
	if(a=="vertebrado"){
		if(b=="mamifero"){
			if(c=="herbivoro"){
				cout<<"vaca"<<endl;
			}
		}
	}
	
	if(a=="invertebrado"){
		if(b=="inseto"){
			if(c=="hematofago"){
				cout<<"pulga"<<endl;
			}
		}
	}
	
	if(a=="invertebrado"){
		if(b=="inseto"){
			if(c=="herbivoro"){
				cout<<"lagarta"<<endl;
			}
		}
	}
	
	if(a=="invertebrado"){
		if(b=="anelideo"){
			if(c=="hematofago"){
				cout<<"sanguessuga"<<endl;
			}
		}
	}
	
	if(a=="invertebrado"){
		if(b=="anelideo"){
			if(c=="onivoro"){
				cout<<"minhoca"<<endl;
			}
		}
	}
	


	system("PAUSE");
	return 0;
}
