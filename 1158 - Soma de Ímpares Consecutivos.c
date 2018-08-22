#include<stdio.h>
#include<stdlib.h>

int main(){
	int casos, x, y, i, j;
	scanf("%d", &casos);
	while(casos--){
		int soma=0;
		scanf("%d%d", &x, &y);
		if(x % 2 != 0)
			for(i = 0, j=x ; i < y ; i++, j+=2)
				soma += j;
		else{
			x++;
			for(i = 0, j=x ; i < y ; i++, j+=2)
				soma += j;
		}
		printf("%d\n", soma);
	}
	system("pause");
	return 0;
}
