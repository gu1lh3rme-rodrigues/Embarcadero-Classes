#include <stdio.h>

main(){
	int p,pg,t,ru,rd,rc; 
	int q1=1, q2=10, q3=100;
	
	printf("--Compras INTEGRAIS--\n\n\n");
	
	printf("Digite o valor da compra:");
	scanf("%i", &p);
	
	printf("Digite o valor depositado para o pagamento:");
	scanf("%i", &pg);
	
		t=pg-p;//verificaçção se é possível calcular troco
	
		ru=t/q1;//Calculo notas de 1
		rd=t/q2;//Calculo notas de 10
		rc=t/q3;//Calculo notas de 100
		
	if(t==0){//se troco zerar
		printf("Valor zerado: R$%i",t);
	}
	else if(t > 0){
		printf("\n O troco sera de R$%i\n\n", t);
		
		// Algoritmo para troco ótimo
		rc = t / q3;      // Quantas notas de R$100
		t = t % q3;       // Resto após usar R$100
		
		rd = t / q2;      // Quantas notas de R$10
		t = t % q2;       // Resto após usar R$10
		
		ru = t / q1;      // Quantas notas de R$1
		
		// Mostra apenas as notas que são necessárias (quantidade > 0)
		printf("O pagamento sera feito com as seguintes notas:\n");
		
		if(rc > 0){
			printf(" %i notas de: R$%i\n", rc, q3);
		}
		else if(rd > 0){
			printf(" %i notas de: R$%i\n", rd, q2);
		}
		else if(ru > 0){
			printf(" %i notas de: R$%i\n", ru, q1);
		}
	}
	else{
		printf("\n Valor incorporado: R$%i", t);
	}
		                         
}