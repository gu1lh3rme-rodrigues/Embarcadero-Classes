#include <stdio.h>

 main() {
    char cod[10];
    int qtde;
    float p, t;
    
    printf("Lista de Vendas\n\n\n\n");

    printf("Digite um dos codigos abaixo (em maiusculo): \n\n");
    
    printf("===== TABELA DE PRODUTOS =====\n\n");
    printf("--Codigo-----Preco\n");
	printf("  ABCD - R$ 5,30\n");
	printf("  XYPK - R$ 6,00\n");
	printf("  KLMP - R$ 3,20\n");
	printf("  QRST - R$ 2,50\n");
	printf("_______________________________\n\n");
	printf("Codigo: ");
    scanf("%s", cod);

    printf("Digite a quantidade: ");
    scanf("%d", &qtde);

    if (cod[0]=='A' && cod[1]=='B' && cod[2]=='C' && cod[3]=='D')
        p = 5.30;

    else if (cod[0]=='X' && cod[1]=='Y' && cod[2]=='P' && cod[3]=='K')
        p = 6.00;

    else if (cod[0]=='K' && cod[1]=='L' && cod[2]=='M' && cod[3]=='P')
        p = 3.20;

    else if (cod[0]=='Q' && cod[1]=='R' && cod[2]=='S' && cod[3]=='T')
        p = 2.50;

    else {
        printf("Codigo invalido!");
        return 0;
    }

    t = p * qtde;

    printf("Total a pagar: R$ %.2f", t);
}