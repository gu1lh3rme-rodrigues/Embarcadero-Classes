#include <stdio.h>

main() {
    float sal, des;
    
    printf("---Calculadora de Salario Previdenciario---\n\n");

    printf("Digite o salario: ");
    scanf("%f", &sal);

    des = sal * 0.11;

    if (des > 318.20){
        des = 318.20;
    }

    printf("Desconto previdenciario: R$ %.2f", des);
}