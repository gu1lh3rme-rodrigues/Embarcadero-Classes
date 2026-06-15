#include <stdio.h>

#define a 3

main() {
    int qtde[a];
    float obt[a], soma = 0;

    printf("--Sorveteria--\n\n");

    for(int i = 0; i < a; i++) {
        printf("Digite o valor arrecadado do sorvete %d: ", i + 1);
        scanf("%f", &obt[i]);
    }

    qtde[0] = obt[0] / 0.50;
    qtde[1] = obt[1] / 0.60;
    qtde[2] = obt[2] / 0.75;

    for(int i = 0; i < a; i++) {
        printf("\nSorvete %d\n", i + 1);
        printf("Quantidade vendida: %d\n", qtde[i]);
        printf("Valor arrecadado: %.2f\n", obt[i]);

        soma += obt[i];
    }

    printf("\nTotal arrecadado: %.2f\n", soma);
}