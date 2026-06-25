#include <stdio.h>

main() {
    int cod, q;
    float total;
    
    printf("---Lanchonete IFSP---\n\n");
    
    printf("===== CARDAPIO =====\n");
    printf("--Codigo---------------------Preco\n");
	printf("  100 - Cachorro Quente .... R$ 1.10\n");
	printf("  101 - Bauru Simples ...... R$ 1.30\n");
	printf("  102 - Bauru c/Ovo ........ R$ 1.50\n");
	printf("  103 - Hamburger .......... R$ 1.10\n");
	printf("  104 - Cheeseburger ....... R$ 1.30\n");
	printf("  105 - Refrigerante ....... R$ 1.00\n");
	printf("=====================================\n\n");

    printf("Digite o codigo do produto: ");
    scanf("%i", &cod);

    printf("Digite a quantidade: ");
    scanf("%i", &q);

    if (cod == 100) {
        total = q * 1.10;
    }
    else if (cod == 101) {
        total = q * 1.30;
    }
    else if (cod == 102) {
        total = q * 1.50;
    }
    else if (cod == 103) {
        total = q * 1.10;
    }
    else if (cod == 104) {
        total = q * 1.30;
    }
    else if (cod == 105) {
        total = q * 1.00;
    }
    else {
        printf("Codigo invalido!");
    }

    printf("Valor a pagar: R$ %.2f", total);

}