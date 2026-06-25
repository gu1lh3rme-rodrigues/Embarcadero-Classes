#include <stdio.h>

main() {
    int dia, mes;
    
    printf("---DESCUBRA O SEU SIGNO AGORA---\n\n\n");
    
    printf("Responda a nossa pesquisa abaixo para descobrir o seu signo\n\n\n");

    printf("Digite o dia do nascimento: ");
    scanf("%i", &dia);

    printf("Digite o mes do nascimento: ");
    scanf("%i", &mes);

    if ((dia >= 21 && mes == 1) || (dia <= 19 && mes == 2)){
        printf("Voce e do signo: Aquario");
    }
    else if ((dia >= 20 && mes == 2) || (dia <= 20 && mes == 3)){
        printf("Voce e do signo: Peixes");
    }
    else if ((dia >= 21 && mes == 3) || (dia <= 20 && mes == 4)){
        printf("Voce e do signo: Aries");
    }
    else if ((dia >= 21 && mes == 4) || (dia <= 20 && mes == 5)){
        printf("Voce e do signo: Touro");
    }
    else if ((dia >= 21 && mes == 5) || (dia <= 20 && mes == 6)){
        printf("Voce e do signo: Gemeos");
    }
    else if ((dia >= 21 && mes == 6) || (dia <= 21 && mes == 7)){
        printf("Voce e do signo: Cancer");
    }
    else if ((dia >= 22 && mes == 7) || (dia <= 22 && mes == 8)){
    printf("Voce e do signo: Leao");
	}
    else if ((dia >= 23 && mes == 8) || (dia <= 22 && mes == 9)){
        printf("Voce e do signo: Virgem");
    }
    else if ((dia >= 23 && mes == 9) || (dia <= 22 && mes == 10)){
        printf("Voce e do signo: Libra");
    }
    else if ((dia >= 23 && mes == 10) || (dia <= 21 && mes == 11)){
        printf("Voce e do signo: Escorpiao");
    }
    else if ((dia >= 22 && mes == 11) || (dia <= 21 && mes == 12)){
        printf("Voce e do signo: Sagitario");
    }
    else{
        printf("Voce e do signo: Capricornio");
    }
}