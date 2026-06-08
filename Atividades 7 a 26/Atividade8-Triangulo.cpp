#include <stdio.h>

main(){
	//variaveis
	float BASE, ALTURA, AREA;
	//chamada BASE
	printf("Digite o valor da base do triangulo: ");
	scanf ("%f", &BASE);
	//Chamada ALTURA
	printf("Digite o valor da altura do triangulo: ");
	scanf ("%f", &ALTURA);
	
	//processo
	AREA = (BASE*ALTURA)/2;
	
	printf ("A area do triangulo eh: \n Area=%.2f. \n Base=%.2f.\n Altura=%.2f.", AREA, ALTURA, BASE);
}