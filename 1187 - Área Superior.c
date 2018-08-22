#include<stdio.h>
#include<stdlib.h>

int main(){
	float matriz[12][12], soma=0, aux=11;
	int i , j;
	char letra;
	scanf("%c", &letra);

    for(i=0 ; i<12 ; i++){
    	for(j=0 ; j<12 ; j++){
            scanf("%f", *(matriz+i) + j);
			if(j<aux && j>i)
				soma+=matriz[i][j];
			}
			aux--;
	}

	if(letra=='S')
		printf("%.1f\n", soma);
	else
		printf("%.1f\n", soma/66);

	system("pause");
	return 0;
}
