#include <stdio.h>

int main() {
    int cod, q;
    float p, t;
    
    printf("----Loja de Produtos----\n\n")

    printf("Digite o codigo do produto: ");
    scanf("%i", &cod);

    printf("Digite a quantidade: ");
    scanf("%i", &q);

    switch(cod) {
        case 1001:
            p = 5.32;
            break;
        case 1324:
            p = 6.45;
            break;
        case 6548:
            p = 2.37;
            break;
        case 987:
            p = 5.32;
            break;
        case 7623:
            p = 6.45;
            break;
        default:
            printf("Codigo invalido!");
    }

    t = p * q;

    printf("Total a pagar: R$ %.2f", t);

}