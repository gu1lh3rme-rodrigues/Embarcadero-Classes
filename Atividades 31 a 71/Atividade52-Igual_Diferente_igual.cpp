#include <stdio.h>

main(){
	printf("---Analise de numeros---\n\n");
	int a, b;
	
	printf("Digite o primeiro numero: \n");
	scanf("%i", &a);
	
	printf("Digite o segundo numero: \n");
	scanf("%i", &b);
	
	if(a==b){
		printf("O numero %i eh igual ao numero %i\n %i = %i", a, b, a, b);
	}
	else if(a !=b ){
		printf("O numero %i eh diferente do numero %i;", a, b);
		if(a<b){
			printf("\n%i eh < que %i", a, b);
		}
		else {
			printf("\n%i eh < que %i", b, a);
		}
	}
	else{
		printf("Ambos os numeros sao iguas");
	}
}