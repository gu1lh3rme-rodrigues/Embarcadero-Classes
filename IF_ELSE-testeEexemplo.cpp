#include <stdio.h>

main(){
	
	int i, v;
	
	printf("--- Eleicao 2026 --- \n \n");
	printf("Digite a Sua Idade: \n");
	scanf("%i",&i);
	
	if((i>=18) && (i<70)){
		printf("Voto Obrigatorio: \n Digite o numero do seu candidato:  \n");
		scanf("%i", &v);
		printf("Voto Processado!");
	}
	else if(-(i<16) && (i>0)){
		printf("O candidato nao atende os requisitos minimos para a votacao!!! \n");	
	}
	else if ((i>70) && (i<123) || (i>=16) && (i<18)){
		printf("Voto Opcional: \n Digite o numero do seu candidato:");
		scanf("%i", &v);
		printf("Voto Processado!");
	}
	else {
		printf("Idade digitada eh impossivel!!!\n \n Tente novamente");
	}
		
}