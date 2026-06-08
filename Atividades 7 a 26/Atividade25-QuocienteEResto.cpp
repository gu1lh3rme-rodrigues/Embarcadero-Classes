#include <stdio.h>

main(){
	//variaveis
	int Int1, Int2, quo, resto;
	
	printf("Digite o primeiro valor 'INTEIRO': ");
	scanf("%i", &Int1);
	
	printf("Digite o segundo valor 'INTEIRO': ");
	scanf("%i", &Int2);
	
	quo = Int1/Int2;
	resto = Int1%Int2;
	
	printf("o quociente da divisao eh: %i \n", quo);
	printf("o resto da divisao eh %i", resto);
}
