#include <stdio.h>

main(){
	//variaveis
	float F, C;
	
	
	printf("Termometro Celsius \n");
	
	//Chamada F
	printf("Digite a temperatura em graus Farenheit: ");
	scanf ("%f", &F);
	
	//processo
	C = (F-32)*(5*9);
	
	printf ("A temperatura atual eh de %.2f graus Celsius", C);

}