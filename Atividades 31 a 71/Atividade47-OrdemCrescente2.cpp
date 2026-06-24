#include <stdio.h>

main() {
    float a, b, c;
    
    printf("Organizador de numeros\n\n");

    printf("Digite tres numeros diferentes um do outro: \n Primeiro Numero:\n");
    scanf("%f", &a);
    printf("Segundo Numero: \n");
    scanf("%f", &b);
    printf("Terceiro Numero: \n");
    scanf("%f", &c);


    if (a < b && a < c) {
        printf("%.2f ", a);

        if (b < c)
            printf("%.2f %.2f", b, c);
        else
            printf("%.2f %.2f", c, b);
    }
    else if (b < a && b < c) {
        printf("%.2f ", b);

        if (a < c)
            printf("%.2f %.2f", a, c);
        else
            printf("%.2f %.2f", c, a);
    }
    else if(c < a && c < b){
        printf("%.2f ", c);

        if (a < b)
            printf("%.2f %.2f", a, b);
        else
            printf("%.2f %.2f", b, a);
    }
    else {
    	printf("Todos os numeros sao iguais");
	}

}