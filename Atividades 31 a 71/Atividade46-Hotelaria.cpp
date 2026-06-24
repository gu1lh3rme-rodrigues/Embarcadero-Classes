#include <stdio.h>
#define a 15
#define dia 60.00
#define taxa1 5.50
#define taxa2 6.00
#define taxa3 8.00


main(){
	float tp;
	int dias;
	char nome[a][50];
	
	
	printf("Hotelaria IFSP\n\n");
	
	printf("Digite o nome do cliente\n\n");
	scanf(" %s", &nome[a]);
	
	printf("Digite a quantidade de dias que o %s ficou no local: \n",nome[a]);
	scanf(" %i", &dias);
	
	if(dias>a){
		tp=dia+(taxa1*dias);
		printf("O total a pagar eh: \nR$ %.2f",tp);
	}
	else if(dias==a){
		tp=dia+(taxa2*a);
		printf("O total a pagar eh: \nR$ %.2f",tp);
		
	}
	else if(dias<a){
		tp=dia+(taxa3*dias);
		printf("O total a pagar eh: \nR$ %.2f",tp);
		
	}
}