#include<stdio.h>
#include<stdlib.h>

int main(){
	int i, n, menor=0, pos=0, *p;
	scanf("%d", &n);
	p = malloc(sizeof(int) * n);
	for(i=0; i<n ; i++){
		scanf("%d", p+i);
	}
	for(i=0; i<n; i++){
		if(!i){ menor = *(p+i); pos = i;
		}
		if(p[i] < menor){
			menor = *(p+i);
			pos = i;
		}
	}
	printf("Menor valor: %d\nPosicao: %d\n", menor, pos);
	free(p);
	
	system("PAUSE");
	return 0;
}
