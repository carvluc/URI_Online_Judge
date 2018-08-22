#include <iostream>

using namespace std;

int main(){
	int n1,n2,n3,n4,n5;
	int par=0, impar=0, positivo=0, negativo=0;
	cin>>n1;
	cin>>n2;
	cin>>n3;
	cin>>n4;
	cin>>n5;
	 
	if(n1==0){
		par++;
	}    
		else if(n1>0 && n1%2==0){
		positivo++;
		par++;
		}else if(n1<0 && n1%2==0){
			negativo++;
			par++;
		}else if(n1>0 && n1%2!=0){
			positivo++;
			impar++;
		}else if (n1<0 && n1%2!=0){
			negativo++;
			impar++;
		}
	
	if(n2==0){
		par++;
	}    	
		else if(n2>0 && n2%2==0){
		positivo++;
		par++;
		}else if(n2<0 && n2%2==0){
			negativo++;
			par++;
		}else if(n2>0 && n2%2!=0){
			positivo++;
			impar++;
		}else if (n2<0 && n2%2!=0){
			negativo++;
			impar++;
		}
		
	if(n3==0){
		par++;
	}    	
		else if(n3>0 && n3%2==0){
		positivo++;
		par++;
		}else if(n3<0 && n3%2==0){
			negativo++;
			par++;
		}else if(n3>0 && n3%2!=0){
			positivo++;
			impar++;
		}else if (n3<0 && n3%2!=0){
			negativo++;
			impar++;
		}
		
	if(n4==0){
		par++;
	}    	
		else if(n4>0 && n4%2==0){
		positivo++;
		par++;
		}else if(n4<0 && n4%2==0){
			negativo++;
			par++;
		}else if(n4>0 && n4%2!=0){
			positivo++;
			impar++;
		}else if (n4<0 && n4%2!=0){
			negativo++;
			impar++;
		}
	
	if(n5==0){
		par++;
	}    	
		else if(n5>0 && n5%2==0){
		positivo++;
		par++;
		}else if(n5<0 && n5%2==0){
			negativo++;
			par++;
		}else if(n5>0 && n5%2!=0){
			positivo++;
			impar++;
		}else if (n5<0 && n5%2!=0){
			negativo++;
			impar++;
		}
		
	cout<< par<<" valor(es) par(es)"<<endl;
	cout<< impar<<" valor(es) impar(es)"<<endl;
	cout<< positivo<<" valor(es) positivo(s)"<<endl;
	cout<< negativo<<" valor(es) negativo(s)"<<endl;
}
