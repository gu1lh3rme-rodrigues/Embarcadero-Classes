#include <stdio.h>

main() {
    int a;
    
    printf("Descubra se o sey Numero Inteiro + ou -")

    printf("Digite um numero inteiro: ");
    scanf("%i", &num);

    if (num % 2 == 0){
	    printf("O numero %i eh par\n",a );
	}
    else{
        printf("O numero %i eh impar\n", a);
	}

    if (num >= 0){
        printf("O numero %i eh positivo", a);
    }
    else{
        printf("O numero %i eh negativo", a);
	}

}