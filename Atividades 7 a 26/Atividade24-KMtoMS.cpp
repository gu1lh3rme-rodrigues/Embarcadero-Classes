#include <stdio.h>

main(){
	//Variaveis 
	float Vkm, Vms;
	//Chamada Velocidade
	printf("Digite a velocidade do veiculo em km/h: ");
	scanf ("%f", &Vkm);
	
	Vms = Vkm/3.6;
	
	printf("A velocidade do veiculo eh de %f m/s: ", Vms);
}