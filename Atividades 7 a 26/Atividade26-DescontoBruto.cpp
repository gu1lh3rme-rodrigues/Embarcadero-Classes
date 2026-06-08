#include <stdio.h>

main(){
	float SL, PS, TDI, SB, SBa;
	
	printf("Digite o seu salario bruto: ");
	scanf ("%f", &SB);
	
	PS = SB*10/100;
	SBa = SB-PS;
	
	TDI = SBa*5/100;
	SBa = SBa-TDI;
	
	SL= SB - PS - TDI;
	
	printf("\n Salario liquido: R$%.2f. \n Imposto da Previdencia social (10 por cento): R$%.2f \n Imposto Secreto (5 por cento): R$%.2f",SL, PS, TDI );
	
	
}