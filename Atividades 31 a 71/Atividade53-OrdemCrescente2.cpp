#include <stdio.h>
main(){
	
	printf("---Separacao Crescente---\n\n");
	
	int A, B, C;
	
	printf("Digite o primeiro numero: \n");
	scanf("%i", &A);
	
	printf("Digite o segundo numero: \n");
	scanf("%i", &B);
	
	printf("Digite o terceiro numero: \n");
	scanf("%i", &C);

	if (A == B || A == C || B == C) {
		printf("Existem valores iguais nos fornecidos");
		}
	else if (A < B && A < C) {
		if (B < C)
			printf("%i %i %i", A, B, C);
		else
			printf("%i %i %i", A, C, B);
	}
	else if (B < A && B < C) {
		if (A < C)
		    printf("%i %i %i", B, A, C);
		else
		    printf("%i %i %i", B, C, A);
	}
	else {
		if (A < B)
		    printf("%i %i %i", C, A, B);
		else
		    printf("%i %i %i", C, B, A);
	}
}