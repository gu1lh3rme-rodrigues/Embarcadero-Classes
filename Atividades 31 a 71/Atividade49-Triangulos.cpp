#include <stdio.h>

main() {
    float x, y, z;

    printf("Digite o primeiro lado do triangulo:\n");
    scanf("%f", &x);
    printf("Digite o segundo lado do triangulo:\n");
    scanf("%f", &y);
    printf("Digite o terceiro lado do triangulo:\n");
    scanf("%f", &z);

    if (x < y + z && y < x + z && z < x + y) {

        if (x == y && y == z) {
            printf("Medidas para um Triangulo Equilatero");
        }
        else if (x == y || x == z || y == z) {
            printf("medidas para um Triangulo Isosceles");
        }
        else {
            printf("Medidas para um Triangulo Escaleno");
        }

    }
    else {
        printf("Os valores nao formam nenhum triangulo");
    }

}