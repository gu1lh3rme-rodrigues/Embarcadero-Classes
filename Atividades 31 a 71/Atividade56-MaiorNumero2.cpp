#include <stdio.h>

main() {
    int v[3];
    int m, i;
    
    printf("___Descubra o maior numero___\n\n\n");


    for(i = 0; i < 3; i++) {
        printf("Digite o valor %i: ", i + 1);
        scanf("%i", &v[i]);
    }

    printf("\nValores digitados:\n");

    for(i = 0; i < 3; i++) {
        printf("%i\n", v[i]);
    }

    m = v[0];

    for(i = 1; i < 3; i++) {
        if(v[i] > m) {
            m = v[i];
        }
    }

    printf("\n%i eh o maior valor.\n", m);

}