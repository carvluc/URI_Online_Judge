#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int n, i, aux, tam, ini;
	
	scanf("%d", &n);
	
	getchar();
	
	while(n--){
		char s[1050] = {}, temp[1050] = {};
		tam = 0;
		
		gets(s);
		
		for(i = 0; s[i]; i++)
			tam++;
		
		for(i = 0; i < tam; i++)
			if(s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z')
				s[i] += 3;		
				
		for(i = 0; s[i]; i++)
			temp[i] = s[i];
		
		temp[i] = 0;		
		
		aux = tam;
		
		for(i = 0; i < tam; i++, aux--)
			s[i] = temp[aux - 1];
			
		s[i] = 0;	
			
		ini = tam / 2;		
		
		for(i = ini; i < tam; i++)
			s[i] -= 1;
			
		printf("%s\n", s);
	}
}
