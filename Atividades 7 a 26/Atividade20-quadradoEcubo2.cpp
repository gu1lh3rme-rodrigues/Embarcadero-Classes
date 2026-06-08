#include <stdio.h>

main(){
	//variaveis
	int a, a2, a3, b,b2,b3;
	//chamada BASE
	printf("Digite um numero: ");
	scanf ("%i", &a);
	
	printf("Digite um numero: ");
	scanf ("%i", &b);
	
	//processo
	a2= a*a, a3= a2*a;
	b2= b*b, b3= b2*b;
	
	printf ("O numero %i tem como quadrado e cubo: \n %i \n %i \n", a, a2,a3);
	printf ("O numero %i tem como quadrado e cubo: \n %i \n %i", b, b2,b3);
}