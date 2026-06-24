#include <stdio.h>

main(){
	float n[3], media=0;
	int i;
	
	printf("Media do Aluno\n\n\n");
	
    for(i = 0; i < 3; i++) {
        printf("Digite a nota %d do aluno: \n", i + 1);
        scanf("%f", &n[i]);
        printf("-------------------------\n");

        media += n[i];
    }
	media =media/3;
	
	if(media<4){
		printf("Nota Final: %.2f.\n Reprovado!");
	}
	else if (media >= 4 && media <7){
		printf("Nota Final: %.2f.\n Selecionado para a Prova Final, Boa sorte", media);
	}
	else {
		printf("Nota Final: %.2f.\n Aprovado", media);
	}
	
}