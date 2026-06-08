#include <stdio.h>

main(){
	//variaveis
	float F, C;
	
	
	printf("Termometro Farenheit \n");
	
	//Chamada C
	printf("Digite a temperatura em graus Celsius: ");
	scanf ("%f", &C);
	
	//processo
	F =(9*C +160)/5;
	
	printf ("A temperatura atual eh de %.2f graus Farenheit", F);

}