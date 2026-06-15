#include <stdio.h>
#define a 4

main(){
	float preco[a], desc[a], pt[a];
	char nome[a][25];
	
	printf("Loja de Artigos\n\n");
	
	for(int i=0; i<a; i++){
	printf("Digite o nome do artigo %d:", i+1);
    scanf("%24s", nome[i]);

    printf("Digite o preco do artigo %d: ", i+1);
    scanf("%f", &preco[i]);

    printf("Digite o percentual de desconto do artigo %d: ", i+1);
    scanf("%f", &desc[i]);
    printf("\n\n-----------------------------------------------\n\n");

    pt[i] = preco[i] - (preco[i] * desc[i] / 100);
	}
	printf("\nRecibo de Vendas\n\n");

for(int i = 0; i < a; i++) {

    printf("Artigo %d\n", i + 1);
    printf("Nome: %s\n", nome[i]);
    printf("Preco: R$ %.2f\n", preco[i]);
    printf("Desconto: %.2f%%\n", desc[i]);
    printf("Preco com desconto: R$ %.2f\n\n", pt[i]);
	
	}
	
}