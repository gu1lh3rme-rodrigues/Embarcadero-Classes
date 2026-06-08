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
	
	if(A>B && A>C && B>C){
		printf("A sequencia crescente dos numeros eh: \n %i (Menor) \n %i \n %i (Maior)", C, B, A);
	}
	else if(A>C && A>B && C>B){
		printf("A sequencia crescente dos numeros eh: \n %i (Menor) \n %i \n %i (Maior)", B, C, A);
	}
	else if(B>A && B>C && A>C){
		printf("A sequencia crescente dos numeros eh: \n %i (Menor) \n %i \n %i (Maior)", C, A, B);
	}
	else if(B>C && B>A && C>A){
		printf("A sequencia crescente dos numeros eh: \n %i (Menor) \n %i \n %i (Maior)", A, C, B);
	}
	else if(C>B && C>A && B>A){
		printf("A sequencia crescente dos numeros eh: \n %i (Menor) \n %i \n %i (Maior)", A, B, C);
	}
	else if(C>A && C>B && A>B){
		printf("A sequencia crescente dos numeros eh: \n %i (Menor) \n %i \n %i (Maior)", B, A, C);
	}
		else printf("Existem valores iguais nos fornecidos ");
		
}