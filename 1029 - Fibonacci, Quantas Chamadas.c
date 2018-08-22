#include<stdio.h>
#include<stdlib.h>

int count;

int Fib(int a){
	if (a == 0){
		count++;
    	return 0;
 	}
	else if (a == 1){
 		count++;
		return 1;
 	}
	else{
		count++;
    	return Fib(a-1) + Fib(a-2);
	}
}

int main(){
	int casos, n;
	scanf("%d", &casos);
	while(casos--){
		count=0;
		scanf("%d", &n);
	 	printf("fib(%d) = %d calls = %d\n", n, count-1, Fib(n));
	}
	system("pause");
	return 0;
}
