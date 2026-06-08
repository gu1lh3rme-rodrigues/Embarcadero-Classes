#include <stdio.h>
 main(){
	int a,b,c,s;
	
	printf("Digite o valor de A: ");
	scanf("%i", &a);
	printf("Digite o valor de B: ");
	scanf("%i", &b);
	printf("Digite o valor de C: ");
	scanf("%i", &c);
	
	s=a+b;
	if(s>c){
		printf("A soma de %i + %i (%i) eh maior que %i;",a,b,s,c);
	}
	else if(s<c){
		printf("A soma de %i + %i (%i) eh menor que %i;",a,b,s,c);
	}
	
	else if(s==c){
		printf("A soma de %i + %i (%i) eh igual ao valor de  %i;",a,b,s,c);
	}
	else{
		printf("ERRO!!");
	}
 }