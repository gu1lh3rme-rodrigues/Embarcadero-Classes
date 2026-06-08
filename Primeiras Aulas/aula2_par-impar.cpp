#include <stdio.h>

main(){
	
	int val = 0;
	printf("Digite o valor: ");
	scanf ("%i", &val);
	
	
	if ((val % 2) == 0){
		printf(" O valor de %i e par",val);
	} else {
		printf(" O valor de %i e impar", val);
	}
}