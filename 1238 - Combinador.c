#include<stdio.h>
#include<stdlib.h>

int main(){
	char s1[51], s2[51];
	int casos, i, a1, a2;
	scanf("%d", &casos);
	while(casos--){
		scanf("%s%s", &s1, &s2);
		a1=0;
		a2=0;
		for(i=0 ; i<51 ; i++){
			if(s1[i] == '\0') a1=1;
			if(s2[i] == '\0') a2=1;
			if(a1 == 1 && a2 == 1) break;
			if(a1==0) printf("%c", s1[i]); 
			if(a2==0) printf("%c", s2[i]);
		}
		puts("");
	}
	system("pause");
	return 0;
}
