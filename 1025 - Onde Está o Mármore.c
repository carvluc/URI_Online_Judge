#include<stdio.h>
#include<stdlib.h>

void Ordena(int *v, int n){
	int i, j;
	for(j=1 ; j<n; j++) {
		int troca = 0;
		for (i=1; i<n; i++)
			if (v[i]>v[i+1]) {
				int temp = v[i]; 
				v[i] = v[i+1];
				v[i+1] = temp;
				troca = 1;
			}
		if (troca == 0) return; 
	}
}

int Busca(int * v, int n, int k){
	int i;
	for(i=1 ; i<=n ; i++ )
		if(v[i] == k)
			return i;
	
	return -1;
}

int main(){
	int nMarmores, nConsultas, i, caso=1;
	int * m;
	int * c;
	while(scanf("%d%d", &nMarmores, &nConsultas) && nMarmores!=0){
		m = malloc(sizeof(int) * (nMarmores+1));
		c = malloc(sizeof(int) * (nConsultas+1));
		for(i=1 ; i<=nMarmores ; i++)
			scanf("%d", m+i);
			
		Ordena(m, nMarmores);
		
		for(i=1 ; i<=nConsultas ; i++){
			scanf("%d", c+i);	
		}
		
		printf("CASE# %d:\n", caso);
		for(i=1 ; i<=nConsultas ; i++){
			int a = Busca(m, nMarmores, c[i]);
			if(a!=-1)
				printf("%d found at %d\n", c[i], a);
			else 
				printf("%d not found\n", c[i]);
		}
		caso++;
		free(m); free(c);
	}
	system("pause");
	return 0;
}

