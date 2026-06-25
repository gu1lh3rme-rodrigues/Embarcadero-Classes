#include <stdio.h>

main() {
    int a, b;
    
    printf("----Numeros Multiplos----\n\n");

    printf("Digite dois numeros. \n\n");
    
    printf("Numero 1: \n ");
    scanf("%i", &a);
    
    printf("Numero 2: \n ");
    scanf("%i", &b);

    if (a % b == 0 || b % a == 0) {
        printf("Sao multiplos");
    }
    else {
        printf("Nao sao multiplos");
    }
}