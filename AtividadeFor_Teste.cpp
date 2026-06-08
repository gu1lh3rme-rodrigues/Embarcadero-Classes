#include <stdio.h>

//Exemplo For

main(){
	int c,a,b,i;
	printf("Calculadora Crescente / Decrescente \n\n\n");
	
	printf("Deseja calcular a ordem crescente ou decrescente?\n Digite 1 para crescente;\n Digite 2 para decrescente; ");
	scanf("%i", &c);
	
	if(c==1){
		printf("Calculadora Crescente\n\n");
		printf("Digite o numero que a calculadora ira comecar:");
		scanf("%i", &a);
		printf("Digite o numero que a calculadora devera terminar:");
		scanf("%i", &b);
		
		
		if(a<b){
		for (int i=a; a<=b; a+=1){
			printf("[%i]\n", a);
			}
		}
		else if (a>b){
			printf("%i eh < que %i.", b, a);
		}
		else if (a==b){
			printf("%i eh = a %i.", b, a);
		}
		else{
			printf("Erro");
		}
		
		printf("Clique Enter para sair!\n");
}
		
	
	else if(c==2){
		printf("Calculadora Decrescente\n\n");
		printf("Digite o numero que a calculadora ira comecar:");
		scanf("%i", &a);
		printf("Digite o numero que a calculadora devera terminar:");
		scanf("%i", &b);
		
		if(a>b){
		for (int i=a; a>=b; a-=1){
			printf("[%i]\n", a);
			}
		}
		else if (b>a){
			printf("%i eh < que %i.", a, b);
		}
		else if (a==b){
			printf("%i eh = a: %i.", b, a);
		}
		else{
			printf("Erro");
		}
		printf("Clique Enter para sair!\n");
	} 
	
		
	
}