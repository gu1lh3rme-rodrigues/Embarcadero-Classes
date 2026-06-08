#include <stdio.h>

main(){
	
	//variaveis
	float HT, VH, PD, SB, TD, SL;
	//chamada das variaveis
	
	//Chamada HT : Horas Trabalhadas
	printf("Digite a quantidade de horas trabalhadas no mes: ");
	scanf ("%f", &HT);
	//Chamada VH : Valor Horas Trabalhadas
	printf("Digite o valor de cada hora trabalhada: ");
	scanf ("%f", &VH);
	//Chamada PD : Percentual de desconto
	printf("Digite o valor do percentual de desconto: ");
	scanf ("%f", &PD);
	
	//processo
	SB = HT*VH;
	TD = PD/100*SB;
	SL = SB-TD;
	
	printf ("Abaixo as informacoes sobre o salario: \n Horas Trabalhadas: = %.2f. \n Salario Bruto: =RS%.2f.\n Desconto: =RS%.2f. \n Salario Liquido: =RS%.2f.", HT, SB, TD, SL);

}