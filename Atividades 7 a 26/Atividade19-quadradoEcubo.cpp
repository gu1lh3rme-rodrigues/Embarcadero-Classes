#include <stdio.h>

main(){
	//variaveis
	int a, a2, a3;
	//chamada BASE
	printf("Digite um numero: ");
	scanf ("%i", &a);
	
	//processo
	a2= a*a, a3= a2*a;
	
	printf ("O numero %i tem como quadrado e cubo: \n %i \n %i", a, a2,a3);
}