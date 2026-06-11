#include <stdio.h>
#define com 50.00




main(){
	float sal=1621, vendas, sltt;
	int qtde;
	
	printf("Concessionaria PicaPau\n\n\n");
	printf("digite a quantidade de carros vendidos no mes: ");
	scanf("%i", &qtde);
	
	printf("Digite o valor total arrecadado: ");
	scanf("%f",&vendas);
	
	sltt=(sal*2)+(qtde*com)+(vendas*(5/100));
	
	printf("O salario total eh de : R$%.2f ",sltt);
}