#include <iostream>

using namespace std;

int main(){
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	
	if( n2 >= n1 && n3 >= n2 )
	{
		cout<<n1<<endl<<n2<<endl<<n3<<endl<<endl;
		cout<<n1<<endl<<n2<<endl<<n3<<endl;
	}
	else if( n3 >= n1 && n2 >= n3 )
	{
		cout<<n1<<endl<<n3<<endl<<n2<<endl<<endl;
		cout<<n1<<endl<<n2<<endl<<n3<<endl;
	}
	else if( n1 >= n2 && n3 >= n1 )
	{
		cout<<n2<<endl<<n1<<endl<<n3<<endl<<endl;
		cout<<n1<<endl<<n2<<endl<<n3<<endl;
	}
	else if( n3 >= n2 && n1 >= n3 )
	{
		cout<<n2<<endl<<n3<<endl<<n1<<endl<<endl;
		cout<<n1<<endl<<n2<<endl<<n3<<endl;
	}
	else if( n1 >= n3 && n2 >= n1 )
	{
		cout<<n3<<endl<<n1<<endl<<n2<<endl<<endl;
		cout<<n1<<endl<<n2<<endl<<n3<<endl;
	}
	else{
		cout<<n3<<endl<<n2<<endl<<n1<<endl<<endl;
		cout<<n1<<endl<<n2<<endl<<n3<<endl;
	}
}
