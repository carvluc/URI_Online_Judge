#include<stdio.h>
#include<stdlib.h>

int main(){
	int n, k, i, x, perguntas;
	int *p;
	while(1){
		perguntas = 0;
		if(n==0 && k==0)
			break;
		else{
			p = malloc(sizeof(int) * n);
			
			for(i=0 ; i<n ; i++)
				*(p+i)=0;
				
			for(i=0 ; i<n ; i++){
				scanf("%d", &x);
				*(p+x)+=1;	
			}
			
			for(i=0 ; i<n ; i++)
				if(*(p+i) >= k)
					perguntas++;
			
			printf("%d\n", perguntas);
			free(p);						
		}
	}
	system("pause");
	return 0;
}
