#include <stdio.h>

main(){
	
	float sb, deducao, aliquota;
	
	printf("Calculadora de Impostos\n\n\n");
	printf("Digite o seu salario bruto: ");
	scanf("%f",&sb);
	
	if(sb<=2428.80){
		printf("Isento do imposto fiscal");
	}
	else if((sb>2428.81) and (sb<=3251.40)){
		printf("Parcela de R$182,16 de imposto");
		deducao=sb/7.5*100;
	}
	else if((sb>3251.40) and (sb<=4074.53)){
		printf("Parcela de R$426,05 de imposto");
		//sb/7.5*100
	}
	else if((sb>4074.53)&& (sb<=4896.91)){
		printf("Parcela de R$731,40 de imposto");
		//sb/7.5*100
	}
	else{
		("Parcela de 976,");
	
	}
}