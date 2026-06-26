#include <stdio.h>

main(){
	int matriz[3][3];
	int a, b,c, soma;
	printf("Matriz 3X3\n\n");
	for(a=0; a<3;a++){
		for(b=0; b<3; b++){
			printf("Elemento[%i][%i]= ",a, b);
			scanf("%i", &matriz [a][b]);
		}
	}
	
	//mostra matriz 
	printf("__________________________\n\n");
		printf("Matriz Final: \n");
	for(a=0; a<3;a++){
		for(b=0; b<3; b++){
			printf("|%i| ", matriz[a][b]);		
		}
		printf("\n");
	}
	
	
	printf("__________________________\n\n");
	printf("Diagonal principal:\n\n");
	//mostra a principal
	
			printf("|%i|",matriz[0][0]);//Eu quero que saiba que eu tentei utilizar um for,
			printf("|%i|",matriz[1][1]);//mas por algum motivo fui incapaz de realizar uma operação
			printf("|%i|",matriz[2][2]);//dessas... Eu sei que tem um jeito melhor de fazer esse...
				
	a = matriz[0][0];
	b = matriz[1][1];
	c = matriz[2][2];
		
	//faz a soma da principal
	soma = a+b+c;
	
	
	printf("\n__________________________\n");
	printf("\n\nSoma da diagonal principal eh igual a: %i", soma);
}