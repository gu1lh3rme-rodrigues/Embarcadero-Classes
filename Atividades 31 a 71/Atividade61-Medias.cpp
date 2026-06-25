#include <stdio.h>

main() {
    float n1, n2, n3, media;
    int op;
    
    printf("----Calculadora de Medias----\n\n");


	printf("\n1 - Media Aritmetica:");
    printf("\n2 - Media Ponderada: (com pesos 3,3,4)");
    printf("\nEscolha: ");
    scanf("%i", &op);
    
    
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);


    if(op == 1) {
        media = (n1 + n2 + n3) / 3;
        printf("Media Aritmetica = %.2f", media);
    }
    else if(op == 2) {
        media = (n1 * 3 + n2 * 3 + n3 * 4) / 10;
        printf("Media Ponderada = %.2f\n\n", media);
    }
    else {
        printf("Opcao invalida!");
    }

}