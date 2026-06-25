#include <stdio.h>
#define a 2

main() {
	
	printf("-----Comparacao de altura e peso-----\n\n\n");
    char nome[2][50];
    float alt[2], p[2];
    int i;
    
    
    printf("Descubra quem eh o mais alto e o mais pesado!\n\n");

    for(i = 0; i < a; i++) {
        printf("Nome da pessoa %i: ", i + 1);
        scanf("%s", nome[i]);

        printf("Altura da pessoa %i (em cm): ", i + 1);
        scanf("%f", &alt[i]);

        printf("Peso da pessoa %i: ", i + 1);
        scanf("%f", &p[i]);

        printf("____________________\n\n");
    }

    if(p[0] > p[1])
        printf("Mais pesada: %s\n", nome[0]);
    else
        printf("Mais pesada: %s\n", nome[1]);

    if(alt[0] > alt[1])
        printf("Mais alta: %s\n", nome[0]);
    else
        printf("Mais alta: %s\n", nome[1]);
}