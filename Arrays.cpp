#include <stdio.h>

main(){
	int matriz[2][2];
	int a, b;
	printf("Matriz 2X2");
	for(a=0; a<2;a++){
		for(b=0; b<2; b++){
			printf("Elemento[%i][%i] = ",a, b);
			scanf("%i", &matriz [a][b]);
		}
	}
	printf("Resultados: \n");
	for(a=0; a<2;a++){
		for(b=0; b<2; b++){
			printf("Elemento[%i][%i] = \n%i\n",a, b, matriz[a][b]);		
		}
	}
		printf("Resultados de outra forma: \n");
	for(a=0; a<2;a++){
		for(b=0; b<2; b++){
			printf("|%i| ", matriz[a][b]);		
		}
		printf("\n");
	}
}