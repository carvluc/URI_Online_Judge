#include<stdio.h>
#include<stdlib.h>

int main(){
	int N, M;
	while(scanf("%d %d", &N, &M) && N!=0){
		int num, i, j, logica;
		int n1 = 1, n2 = 1, n3= 1, n4 = 1;
		int **m = malloc(sizeof(int*)*N);
		for(i = 0; i < N; i++) m[i] = malloc(sizeof(int)*M);
	
		for(i = 0; i < N; i++){
			for(j = 0; j < M; j++){
				scanf("%d", &num);
				m[i][j] = num;
			}
		}
		
		// logica 1 e logica 4 **********************
		for(i = 0; i < N; i++){
			logica = 0;
			for(j = 0; j < M; j++)
				if(m[i][j]) logica++;
				if(logica == M) n1 = 0;
				else if(!logica) n3 = 0;
		}
		// final
		// Logica 2 e Logica 3 **********************
		for(j = 0; j < M; j++){
			logica = 0;
			for(i = 0; i < N; i++)
				if(m[i][j]) logica++;
				if(logica == N) n3 = 0;
				else if(!logica) n4 = 0;	
		}
		//final
	 	printf("%d\n", n1+n2+n3+n4);
	 	for(i = 0; i < N; i++) free(m[i]);
	 	free(m);
	}
}
