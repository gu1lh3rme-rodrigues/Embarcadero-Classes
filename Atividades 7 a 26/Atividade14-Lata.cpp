#include <stdio.h>

main(){
	//variaveis
	float RAIO, ALTURA, VOLUME, PI=3.14159;
	//chamada BASE
	printf("Digite o valor do raio da lata: ");
	scanf ("%f", &RAIO);
	//Chamada ALTURA
	printf("Digite o valor da altura da lata: ");
	scanf ("%f", &ALTURA);
	
	//processo
	VOLUME = PI*RAIO*RAIO*ALTURA;
	
	printf ("O volume da lata eh: \n Volume=%.2f. \n Raio da lata=%.2f.\n Altura da lata=%.2f.", VOLUME, ALTURA, RAIO);
}