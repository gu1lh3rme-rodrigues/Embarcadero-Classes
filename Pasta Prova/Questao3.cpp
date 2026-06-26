#include <stdio.h>

main(){
	int vetor [7];
	
	printf("Vetores de 8 em ordem crescente e Decrescente\n\n\");
	
	for (int i=0; i<=7; i++)
	{
		printf("Digite o vetor [%i]:\n", i+1);
		scanf("%i", &vetor[i]);
	}	
	
	printf("Vetor em ordem de chamada :\n");
	for (int i=0; i<=7; i++)
	{
		
		printf("Vetor [%i]: %i\n",i+1, vetor[i]);
	}
	printf("\n\n Vetor de tras para frente na ordem de chegada:\n\n");
	for (int i=7; i>=0; i--)
	{
		
		printf("Vetor [%i]: %i \n",i+1, vetor[i]);
	}
	
}