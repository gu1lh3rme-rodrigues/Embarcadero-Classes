#include <stdio.h>

main() {
    int cod;
    float n1, n2, n3, m, media;

    printf("Codigo do aluno: \n");
    scanf("%d", &cod);

    printf("Digite a primeira nota: \n");
    scanf("%f", &n1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &n2);
    printf("Digite a terceira nota: \n");
    scanf("%f", &n3);

    m = n1;

    if (n2 > m){
        m = n2;
    }

    if (n3 > m){
        m = n3;
    }

    media = ((n1 + n2 + n3) * 3 + m) / 10;

    printf("\nCodigo: %i\n", cod);
    printf("\nNotas: \n 1:|%.1f| \n 2:|%.1f| \n 3:|%.1f|\n", n1, n2, n3);
    printf("\nMedia: %.2f\n\n", media);

    if (media >= 5 && media<=10){
	
        printf("\n O aluno foi Aprovado");
    }
    else if(media > 10){
    	printf("\n Notas excedidas!! Tente novamente");
	}
    else if (media <5){
        printf("\n O aluno foi Reprovado");
    }
    
}