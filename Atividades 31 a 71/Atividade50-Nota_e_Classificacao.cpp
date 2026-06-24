#include <stdio.h>

main(){
	int nota;
	
	printf("Avaliacao de um Aluno\n\n");
	
	printf("Digite a nota do aluno:");
	scanf("%i", &nota);
	
	if (nota <=49){
		printf("O aluno esta no Conceito 'Insuficiente', obtendo o total de %i pontos na nota.", nota);
	}
	else if (nota >=50 && nota <=64){
		printf("O aluno esta no Conceito 'Regular', obtendo o total de %i pontos na nota.", nota);
	}
	else if (nota >=65 && nota <=84){
		printf("O aluno esta no Conceito 'Bom', obtendo o total de %i pontos na nota.", nota);
	}
	else if (nota >=85 && nota <=100){
		printf("O aluno esta no Conceito 'Otimo', obtendo o total de %i pontos na nota.", nota);
	}
	else{
		printf("Nota Invalida... Tente novamente");
	}
}