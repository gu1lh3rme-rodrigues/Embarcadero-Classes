#include <stdio.h>

main() {
    int op, n1, n2, n3;

    printf("Selecione uma das opcoes ao lado (2, 3 ou 4): ");
    scanf("%i", &op);

    printf("Digite o valor de Num1: ");
    scanf("%i", &n1);

    printf("Digite o valor de Num2: ");
    scanf("%i", &n2);

    printf("Digite o valor de Num3: ");
    scanf("%i", &n3);

    if (op == 2) {
        printf("Valor: %i", n1);
    }
    else if (op == 3) {
        printf("Valor: %i", n2);
    }
    else if (op == 4) {
        printf("Valor: %i", n3);
    }
    else {
    	printf("Digite um numero da opção");
	}

}