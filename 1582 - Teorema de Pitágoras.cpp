#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int c1, c2, h, aux=0, aux2=0, aux3=0;
	while(scanf("%d%d%d", &c1, &c2, &h) != EOF){
		//ordenando...
        if(c1>c2 && c2>h){
			aux = h;
			h = c1;
			c1 = aux;
		}
		else if(c1>h && c2>h){
			aux = c1;
			aux2 = c2;
			aux3 = h;
			c1 = aux3;
			c2 = aux;
			h = aux2;
		}
		else if(c1>c2 && h>c1){
			aux = c1;
			c1 = c2;
			c2 = aux;
		}
		else if(c2>h && c2>c1){
			aux = h;
			h = c2;
			c2 = aux;
		}else{
			aux = c1;
			aux2 = c2;
			aux3 = h;
			c1 = aux2;
			c2 = aux3;
			h = aux;
		}
	}
	system("pause");
	return 0;
}
