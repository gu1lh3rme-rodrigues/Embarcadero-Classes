#include <stdio.h>

int main(){
	float sal, mon, a;
	int login, c;
	
	printf("---Banco Naster---\n\n");
	
	printf("Digite o numero da conta:");
	scanf("%i", &login);
	
	printf("Digite o valor que possui dentro do banco: ");
	scanf("%f", &sal);	
	
	printf("Digite qual operacao deseja realizar: \n\nDigite 1 para realizar um Deposito: \nDigite 2 para realizar um Saque:\n ");
	scanf("%i", &c);
	
	if(c==1){
		printf("Digite a quantidade a ser depositada: ");
		scanf("%f",&mon);
		
		sal=sal+mon;
		
		if(sal<=0){
			printf("Realização invalidada pela tentativa de remoção de saldo!");
		}
		else{
		
		printf("\n\nO usuario da conta %i possui atualmente: \nR$%.2f.", login, sal);
		}
		
	}
	
	if(c==2){
		printf("Digite a quantidade a ser retirada: R$");
		scanf("%f",&mon);
		
		sal=sal-mon;
		
		if(sal<=0){
			
			a = 0-sal;
			
			printf("Saldo Excedido por R$%.2f ",a);
		}
		else{
		
		printf("Estamos retirando da conta %i uma quantia de : \nR$%.2f.", login, mon);
		printf("Gostaria de continuar a transacao?\n\n Digite 1 para Continuar\n Digite 2 para cancelar\n");
		scanf("%i",&c);
		if(c==1)
		{printf("\n\nFoi retirado %.2f da sua conta. \n O usuario possui na conta R$: %.2f", mon, sal);
		}
		else{
			printf("Operacao cancelada!!");
		}
		
		}
		
		
	}
	printf("\n\nClique Enter para sair do programa!\n");
	
}