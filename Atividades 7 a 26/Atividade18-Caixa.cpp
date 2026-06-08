#include <stdio.h>

main(){
	//variaveis
	float COMPRIMENTO, LARGURA, ALTURA, VOLUME ;
	//chamada Comprimento
	printf("Digite o valor do comprimento da lata: ");
	scanf ("%f", &COMPRIMENTO);
	
	//Chamada Largura
	printf("Digite o valor da largura da lata: ");
	scanf ("%f", &LARGURA);
	//Chamada ALTURA
	printf("Digite o valor da altura da lata: ");
	scanf ("%f", &ALTURA);
	
	//processo
	VOLUME = COMPRIMENTO*LARGURA*ALTURA;
	
	printf ("O volume da caixa eh: \n Volume=%.2f. \n Comprimento da caixa=%.2f.\n Largura da caixa=%.2f.\n Altura da caixa=%.2f.", VOLUME, COMPRIMENTO, LARGURA, ALTURA);
}