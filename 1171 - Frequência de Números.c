#include<stdio.h>
#include<stdlib.h>

int main(){
	int n, x, *p, i;
	int a = 2001;
	scanf("%d", &n);
	
	p = malloc(sizeof(int) * a);
	
	for(i=0 ; i<a; i++)
	    *(p+i) = 0;
		    
	for(i=0; i<n; i++){
        scanf("%d", &x);
		*(p+x)+=1;
	}

	for(i=0; i<a; i++)
	    if(*(p+i))
	        printf("%d aparece %d vez(es)\n", i, *(p+i));
	        
	free(p);

	system("PAUSE");
	return 0;
}
