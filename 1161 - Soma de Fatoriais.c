#include <stdio.h>

long long fatorial(long long x){
	int i=1;
	long long fat=1;
	for(i ; i <= x ; i++)
		fat *= i;
	return fat;	 	
}

int main() {
	long long a=0, b=0;
	while (scanf("%lld %lld", &a, &b) != EOF){
		
		if(a==0)
			a=1;
		else
			a = fatorial(a);	
		
		if(b==0)
			b=1;
		else
			b = fatorial(b);
			
		printf("%lld\n", a+b);	
	}	
	return 0;
}
