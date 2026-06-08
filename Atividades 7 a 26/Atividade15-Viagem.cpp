#include <stdio.h>

main(){
	//Variaveis 
	float T, VM, D, L;
	//Chamada tempo
	printf("Digite o tempo utilizado para realizar a viagem em horas: ");
	scanf ("%f", &T);
	//Chamada tempo
	printf("Digite a velocidade media utilizada na viagem: ");
	scanf ("%f", &VM);
	
	//Calculos
	
	//distancia
	D = T*VM;
	//Litros utilizados
	L = D/12;
		
	//resultado/amostra/final
	printf("Durante a sua viagem, voce: \n Viajou a uma velocidade de %.2f Km/h. \n Realizou a viagem em %.2f horas. \n Percorreu %.2f quilometros. \n Utilizou %.2f litros de combustivel.", VM, T, D, L);
	
	
}