#include <stdio.h>

main(){
	//variaveis
	int a, a2, b,b2, x;
	//chamada BASE
	printf("Digite um numero: ");
	scanf ("%i", &a);
	
	printf("Digite um numero: ");
	scanf ("%i", &b);
	
	//processo
	a2= a*a;
	b2= b*b;
	x= a2+b2;
	
	printf ("A soma dos valores %i e %i eh igual a\n %i.",a,b,x);
}