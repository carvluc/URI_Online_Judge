#include<stdio.h>
#include<stdlib.h>

void Quick(int * v, int inicio, int fim){
   int pivo, aux, i, j, meio;
   i = inicio;
   j = fim;

   meio = (int) ((i + j) / 2);
   pivo = v[meio];

   do{
      while (v[i] < pivo)
	  	i = i + 1;
      while (v[j] > pivo)
	  	j = j - 1;

      if(i <= j){
         aux = v[i];
         v[i] = v[j];
         v[j] = aux;
         i = i + 1;
         j = j - 1;
      }
   }while(j > i);

   if(inicio < j) Quick(v, inicio, j);
   if(i < fim) Quick(v, i, fim);

}

int main(){
	int a, d, i;
	while(scanf("%d%d", &a, &d) && a!=0){
		int * at = malloc(sizeof(int) * a);
		int * df = malloc(sizeof(int) * d);
		
		for(i=0 ; i<a ; i++)
		    scanf("%d", at+i);
		for(i=0 ; i<d ; i++)
		    scanf("%d", df+i);

		Quick(at, 0, a-1);
		Quick(df, 0, d-1);
		
		if(at[0] >= df[1] || (at[0]>=df[0] && at[0]>=df[1]))
		    puts("N");
		else
		    puts("Y");
	}
	
	system("pause");
	return 0;

 }
