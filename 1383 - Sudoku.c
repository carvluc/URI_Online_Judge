#include<stdio.h>
#include<stdlib.h>

int Sudoku(int m[][9]){
	int i, j, somaL=0, somaC=0;;
	//verifica soma externa linha e coluna
	for(i=0 ; i<9 ; i++){
	    for(j=0 ; j<9 ; j++){
	        somaL+=m[i][j];
	        somaC+=m[j][i];
		}
		if(somaL!=45 || somaC!=45)
		    return 0;
		else{
		    somaL=0;
		    somaC=0;
		}
	}
	int a=3, inicioL=0, inicioC=0, n=9, soma1=0;
	while(n>0){
		for(i=inicioL ; i<a; i++)
		    for(j=inicioC ; j<a ; j++)
		        soma1+=m[i][j];

		if(soma==45){
            n--;
            
		}
		
		    
	    
	}
	return 1;
}

int ** AlocaM(int l, int c){
	int ** matriz;
	int i, j;
	m = malloc(sizeof(int*) * l);
	for(i=0 ; i<c ; i++)
	    *(matriz + i) = malloc(sizeof(int) * c);

    for(i=0 ; i<l ; i++)
        for(j=0 ; j<c ; j++)
            matriz[i][j] = 0;

	return matriz;
}

int main(){
	int casos;
	while(casos--){
		int i, j;
		int ** n = AlocaM(9,9);
		for(i=0 ; i<9 ; i++)
		    for(j=0 ; j<9 ; j++);
		        scanf("%d", *(n + i) +j);
		        

		
	}

	system("pause");
	return 0;
}
