#include <stdio.h>

main() {
    float s, c;
    
    printf("---Calculadora de Credito---\n\n");

    printf("Digite o saldo medio: \n R$");
    scanf("%f", &s);

    if (s <= 200){
	    c = 0;
	}
    else if (s <= 400){
        c = s * 0.20;
    }
    else if (s <= 600){
        c = s * 0.30;
    }
    else{
        c = s * 0.40;
    }

    printf("\nO Saldo medio do cliente: R$ %.2f", s);
    printf("\nCredito Disponivel: R$ %.2f", c);

}