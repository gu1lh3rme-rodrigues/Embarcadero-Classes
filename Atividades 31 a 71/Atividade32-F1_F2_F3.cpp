#include <stdio.h>

main(){
	printf("---Programa de verificacao---\n\n");
	int N;
	
	printf("Tabela de Informacoes: \n F1: Menor ou igual a 10.  \n F2: Maior que 10 e Menor ou igual a 100. \n F3: Maior que 100.\n\n");
	
	printf("Digite o numero a ser analisado: \n");
	scanf("%i", &N);
		
	if(N<=10){
		printf("O numero %i se encaixa no F1",N);
	}
	else if(N>10 && N<100){
		printf("O numero %i se encaixa no F2",N);
	}
	else{
		printf("O numero %i se encaixa no F3",N);
	}
}