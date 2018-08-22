#include<stdio.h>
#include<stdlib.h>

int main(){
	float matriz[12][12], soma=0;
	char letra;
	int i, j;
	scanf("%c", &letra);
    for(i=0 ; i<12 ; i++)
    	for(j=0 ; j<12 ; j++){
            scanf("%f", *(matriz+i)+j);
			if(j>i)
				soma+=matriz[i][j];
		}
		
	if(letra=='S')
		printf("%.1f\n", soma);
	else
		printf("%.1f\n", soma/66)

	system("pause");
	return 0;
}
