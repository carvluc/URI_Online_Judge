#include<stdio.h>

int main(){
	int teste=0, dias;
	double comida=0;
	scanf("%d", &teste);
	while(teste--){
		scanf("%lf", &comida);
		dias=0;
			while(comida>1){
				comida /=2;
				dias++;	
			}
		printf("%d dias\n", dias);
	}
	return 0;	
}
