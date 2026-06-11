#include <stdio.h>

int main() {
    char nome[50];
    int qtdParafusos, qtdPorcas, qtdArruelas;
    float precoParafuso, precoPorca, precoArruela;
    float totalBruto = 0, totalDesconto = 0, totalPagar;
    int i;

    printf("Digite o nome do cliente: ");
    scanf("%s", nome);

    printf("Digite a quantidade de parafusos: ");
    scanf("%i", &qtdParafusos);

    printf("Digite a quantidade de porcas: ");
    scanf("%i", &qtdPorcas);

    printf("Digite a quantidade de arruelas: ");
    scanf("%i", &qtdArruelas);

    printf("Digite o preco unitario do parafuso: ");
    scanf("%f", &precoParafuso);

    printf("Digite o preco unitario da porca: ");
    scanf("%f", &precoPorca);

    printf("Digite o preco unitario da arruela: ");
    scanf("%f", &precoArruela);

    /* Calcula valor dos parafusos */
    for(i = 1; i <= qtdParafusos; i++) {
        totalBruto += precoParafuso;
        totalDesconto += precoParafuso * 0.20;
    }

    /* Calcula valor das porcas */
    for(i = 1; i <= qtdPorcas; i++) {
        totalBruto += precoPorca;
        totalDesconto += precoPorca * 0.10;
    }

    /* Calcula valor das arruelas */
    for(i = 1; i <= qtdArruelas; i++) {
        totalBruto += precoArruela;
        totalDesconto += precoArruela * 0.30;
    }

    totalPagar = totalBruto - totalDesconto;

    printf("\n===== RESUMO DA COMPRA =====\n");
    printf("Cliente: %s\n", nome);
    printf("Quantidade de parafusos: %i\n", qtdParafusos);
    printf("Quantidade de porcas: %i\n", qtdPorcas);
    printf("Quantidade de arruelas: %i\n", qtdArruelas);
    printf("Total de desconto: R$ %.2f\n", totalDesconto);
    printf("Total a pagar: R$ %.2f\n", totalPagar);

}