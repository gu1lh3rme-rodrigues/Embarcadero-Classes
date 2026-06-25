#include <stdio.h>

main() {
	
    float sal, aum, nsal;
    
    printf("---Calculadora de Salario---\n\n");

    printf("Digite o salario atual: \n\n");
    scanf("%f", &sal);

    if (sal >= 1500 && sal < 1750){
        aum = 0.12;
    }
    else if (sal >= 1750 && sal < 2000){
        aum = 0.10;
    }
    else if (sal >= 2000 && sal < 3000){
        aum = 0.07;
    }
    else if (sal > 3000){
        aum = 0.05;
    }
    else{
        aum = 0.15;
    }

    nsal = sal + (sal * aum);

    printf("Salario atual: R$ %.2f\n", sal);
    printf("Novo salario: R$ %.2f", nsal);

}