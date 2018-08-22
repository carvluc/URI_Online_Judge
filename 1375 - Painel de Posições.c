#include <stdio.h>
#include <stdlib.h>

int main()
{
int N, i;
int *C;
int *P;
int *R;
int ver1, ver2, ver3;

while(scanf("%d", &N) && N!=0){

ver1=0;
ver2=0;
ver3=0;
P=malloc(sizeof(int)*N);
C=malloc(sizeof(int)*N);
R=malloc(sizeof(int)*N);

for(i=0;i<N;i++ ){
scanf("%d %d",&C[i],&P[i]);
}
for(i=0;i<N;i++){

ver1+=P[i];

}
if(ver1!=0){
	printf("-1\n");
	continue;
}

for(i=0;i<N;i++){
R[i] = 0;
}


for(i=0;i<N;i++){

	ver2=i+P[i];
	if(ver2<0){
		ver3=1;
		printf("-1\n");
	break;
	}
	else if(R[ver2]!=0){
		ver3=1;
		printf("-1\n");
	    break;
	}

	R[i+P[i]]= C[i];

}
if(ver3==1) continue;


for(i=0;i<N;i++){

	if(i==N-1)	printf("%d",R[i]);

	else	printf("%d ", R[i]);

}
printf("\n");

free(P);
free(C);
free(R);

}
system("pause");
return 0;
}
