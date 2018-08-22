#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	double qtd;

	scanf("%d %lf", &n, &qtd);

	if (n == 1){
		qtd*=4.00;
		printf("Total: R$ %.2lf\n", qtd);
	}
		if (n == 2){
		qtd*=4.50;
		printf("Total: R$ %.2lf\n", qtd);
	}
		if (n == 3){
		qtd*=5.00;
		printf("Total: R$ %.2lf\n", qtd);
	}
		if (n == 4){
		qtd*=2.00;
		printf("Total: R$ %.2lf\n", qtd);
	}
		if (n == 5){
		qtd*=1.50;
		printf("Total: R$ %.2lf\n", qtd);
	}

	system("pause");
	return 0;
}
