#include <stdio.h>

main() {
    float a, b, c, menor;

    printf("Localizador de menor numero\n\n");

    printf("Digite tres numeros: \n Primeiro Numero:\n");
    scanf("%f", &a);
    printf("Segundo Numero: \n");
    scanf("%f", &b);
    printf("Terceiro Numero: \n");
    scanf("%f", &c);

    menor = a;

    if (b < menor)
        menor = b;

    if (c < menor)
        menor = c;

    printf("O menor numero eh: %.2f\n", menor);

}