#include <stdio.h>

main() {
    int n1, n2;
    
    printf("---Descubra qual numero é maior ou menor---\n\n");

    printf("Digite o primeiro numero: \n");
    scanf("%i", &n1);

    printf("Digite o segundo numero: \n");
    scanf("%i", &n2);

    if (n1 > n2) {
        printf("Maior: %i\n", n1);
        printf("Menor: %i", n2);
    } else {
        printf("Maior: %i\n", n2);
        printf("Menor: %i", n1);
    }
}