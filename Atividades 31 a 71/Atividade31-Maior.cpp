#include <stdio.h>

main(){
	printf("---QUAL NUMERO E MAIOR?---\n\n");
	int A, B;
	
	printf("Digite o primeiro numero: \n");
	scanf("%i", &A);
	
	printf("Digite o segundo numero: \n");
	scanf("%i", &B);
	
	if(A>B){
		printf("O numero %i eh maior que %i", A, B);
	}
	else if(B>A){
		printf("O numero %i eh maior que %i", B, A);
	}
	else{
		printf("Ambos os numeros sao iguas");
	}
}