#include<stdio.h>
#include<stdlib.h>

int main(){
	int v[10], teste, i;
	scanf("%d", &teste);
	while(teste--){
		for(i=0 ; i<10 ; i++)
		    scanf("%d", v+i);

		if((v[8] >= v[0]) && (v[8] <= v[2]) && (v[9] >= v[3] && v[9] <= v[5]))
	  		puts("1");
		else
		    puts("0");
	}
	system("pause");
	return 0;

 }
