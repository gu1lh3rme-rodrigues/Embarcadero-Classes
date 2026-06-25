#include <stdio.h>

main() {
    int num;
    
    printf("O seu Numero eh Par? \n\n\n");

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("O numero %i eh par, logo isso eh Verdadeiro", num);
    else
        printf("O numero %i eh Impar, logo isso eh Falso", num);
}