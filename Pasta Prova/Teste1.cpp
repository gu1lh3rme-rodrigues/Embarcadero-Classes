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
	printf("Diagonal principal");
	//mostra a principal
	for(a=0; a<1;a++){
		for(b=0; b<3; b++){
			
			printf("|%i|",matriz[a][b]);	
		}
	}
		a = matriz[0][0];
		b = matriz[1][1];
		c = matriz[2][2];
		
	//faz a soma da principal
	soma = a+b+c;
	
	
	printf("__________________________\n\n");
	printf("\n\nSoma da diagonal principal eh igual a: %i", soma);
}