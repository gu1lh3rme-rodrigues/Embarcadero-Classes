#include <stdio.h>]
//arrumar como organiza a resposta;
main(){
	
	printf("-----10 Vetores e 3 separacoes-----\n\n");
	
	int vetor[9], i=0, a=0;
	
	for(int i=0; i<=9; i++){
		printf("Digite o vetor [%i]:\n", i+1);
		scanf("%i", &vetor[i]);
	}
	
	printf("______________________________________\n\n");
	printf("Vetor em ordem de chamada :\n");
	for (int i=0; i<=9; i++)
	{
		
		printf("Vetor [%i]: %i\n",i+1, vetor[i]);
	}
	printf("______________________________________\n\n");
	
	printf("Vetores Par: \n");
	for (int i=0; i<=9; i++){
		if(vetor[i] % 2 == 0){
			printf("Vetor par: |%i|\n", vetor[i] );
		}
	}
	printf("______________________________________\n\n");
	printf("Vetores Impares: \n");
	for (int i=0; i<=9; i++){
		if(vetor[i] % 2 == 1){
			printf("Vetor impar: |%i|\n", vetor[i] );
		}
	}
	
}