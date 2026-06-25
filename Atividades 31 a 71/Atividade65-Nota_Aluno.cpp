#include <stdio.h>

main() {
    float n1, n2, m;
    
    printf("Verifique se voce passou: \n\n");

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    m = (n1 + n2) / 2;

    if (m > 5.0){
        printf("Aluno aprovado!");
    }
    else{
        printf("Aluno reprovado!");
    }

}