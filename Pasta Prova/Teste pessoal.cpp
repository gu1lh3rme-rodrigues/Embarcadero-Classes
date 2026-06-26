#include <stdio.h>

main(){
	printf("Qual eh qual?\n\n");
	
	int div, mod, a,b;
	
	printf("Digite a\n");
	scanf("%i", &a);
	
	printf("Digite b\n");
	scanf("%i", &b);
	
	
	div = a/b;
	mod = a%b;
	
	printf("Div %i\n", div);
	printf("mod %i", mod);
}