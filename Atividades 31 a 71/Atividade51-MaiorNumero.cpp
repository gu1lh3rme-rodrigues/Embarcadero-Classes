#include <stdio.h>

main(){
	printf("---QUAL NUMERO E MAIOR?---\n\n");
	int a, b;
	
	printf("Digite o primeiro numero: \n");
	scanf("%i", &a);
	
	printf("Digite o segundo numero: \n");
	scanf("%i", &b);
	
	if(a>b){
		printf("O numero %i eh maior", a);
	}
	else if(b>a){
		printf("O numero %i eh maior", b);
	}
	else{
		printf("Ambos os numeros sao iguas");
	}
}