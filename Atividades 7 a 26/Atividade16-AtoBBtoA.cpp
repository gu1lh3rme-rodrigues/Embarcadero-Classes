#include <stdio.h>

main(){
	//variaveis
	float A, B, C;
	
	//Chamada A
	printf("Digite o valor de A: ");
	scanf ("%f", &A);
	
	//Chamada B
	printf("Digite o valor de B: ");
	scanf ("%f", &B);
	
	//troca
	C=A, A=B, B=C;
	
	printf ("O valor de A eh: %2.f \n O valor de B eh: %.2f ", A,B);

}