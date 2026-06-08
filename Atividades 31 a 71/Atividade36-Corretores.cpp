#include <stdio.h>
main(){
	printf("--Calculadora de Corretoria--\n\n\n");
	
	
	float pc, sc, tc, c1,c2,c3;
	
	printf("Digite o valor da 1° comissao: ");
	scanf("%f", &c1);
	printf("Digite o valor da 2° comissao: ");
	scanf("%f", &c2);
	printf("Digite o valor da 3° comissao: ");
	scanf("%f", &c3);
	
	printf("Relatorio do primeiro corretor\n");
	if(c1>50000){
		pc=c1+(c1*12/100);
		printf("o valor da comissao sera de: R$%.2f", pc);
	}
	else if(c1>=30000 && c1<=50000){
		sc=c1+(c1*9.5/100);
		printf("o valor da comissao sera de: R$%.2f", sc);
	}
	else {
		tc=c1+(c1*7/100);
		printf("o valor da comissao sera de: R$%.2f", tc);
	}
	
	
	
}