#include<stdio.h>
#include<stdlib.h>

int euclides(int a, int b){
	if (b == 0)
      return a;
  	else
      return MDC(b, a % b);
}

int main(){
	int casos, f1, f2;
	scanf("%d", &casos);
	while(casos--){
		scanf("%d%d", &f1, &f2);
		printf("%d\n", euclides(f1, f2));
	}
	system("pause");
	return 0;
}
