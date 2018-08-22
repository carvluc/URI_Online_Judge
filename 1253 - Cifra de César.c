#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
	int casos, qtdPos, i, aux, aux2;
	char v[51], resposta[51];
	scanf("%d", &casos);
	while(casos--){
		resposta[0] = '\0';
		scanf("%s %d", v, &qtdPos);
		if(qtdPos==0)
		    printf("%s", v);
		else{
			for(i=0 ; v[i] ; i++){
			    if(v[i] - qtdPos < 'A'){
					aux = abs(v[i] - 'A');
					aux2 = abs(aux - qtdPos);
					resposta[i] = 'Z' - aux2 + 1;	
				}else
					resposta[i] = v[i] - qtdPos;
			}
			resposta[i] = 0;
		}
		printf("%s\n", resposta);
	}
	system("pause");
	return 0;
}
