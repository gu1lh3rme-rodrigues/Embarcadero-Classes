#include <stdio.h>
main(){
	printf("-----VETORES-----\n\n");
	
	int pesos [5], somador=0;
	float media=0;
	
	for (int i=0; i<=4; i++)
	{
		printf("Digite o peso [%i]:\n", i);
		scanf("%i", &pesos[i]);
		somador = somador +pesos[i];
	}	
	
	printf("Pesos em ordem de chamada :\n");
	for (int i=0; i<=4; i++)
	{
		
		printf("Peso [%i]: %i\n",i, pesos[i]);
	}
	printf("\n\nPesos em ordem de chegada:\n\n");
	for (int i=4; i>=0; i--)
	{
		
		printf("Peso [%i]: %i \n",i, pesos[i]);
	}
	media =somador /5;
	printf("Soma: %i\n", somador);
	printf("Media: %f", media);
}