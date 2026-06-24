#include <stdio.h>
#define a 2//se necessario, altere a qtde de chamadas aqui

main(){
	char nome[a][50], categoria[a];
	float sal[a], salt[a];
	
	printf("---Ajuste Salarial---\n\n\n");
	
	for(int i=0; i<a; i++){
	
	printf("Digite o nome do funcionario: \n");
	scanf(" %24s", &nome[i]);
	
	printf("Digite a categoria do funcionario: \n");
	scanf(" %c", &categoria[i]);
	
	printf("Digite o salario do funcionario: \n");
	scanf(" %f", &sal[i]);
	printf("-------------------------------\n");
	
		
	if(categoria[i] == 'A' || categoria[i] =='C' || categoria[i] == 'F' || categoria[i] == 'H'){
		salt[i] = sal[i]+(sal[i]*0.10);
	}
		else if(categoria[i] == 'B' || categoria[i] == 'D' || categoria[i] =='E' || categoria[i] =='I' || categoria[i] == 'J' || categoria[i] =='T'){
			salt[i] = sal[i]+(sal[i]*0.15);
		}
			else if(categoria[i] == 'K' ||categoria[i] == 'R'){
				salt[i] = sal[i]+(sal[i]*0.25);
			}
				else if(categoria[i] == 'L' || categoria[i] =='M' || categoria[i] =='N' ||categoria[i] == 'O' ||categoria[i] == 'P' || categoria[i] =='Q' || categoria[i] =='S'){
					salt[i] = sal[i]+(sal[i]*0.35);
				}
					else if(categoria[i] == 'U' || categoria[i] =='V' ||categoria[i] == 'X' ||categoria[i] == 'Y' ||categoria[i] == 'W' || categoria[i] =='Z'){
						salt[i] = sal[i]+(sal[i]*0.50);
					}
	}
	for(int i=0; i<a; i++){
		printf("\nNome do funcionario: %s\n", nome[i]);
		printf("Categoria do funcionario: %c\n", categoria[i]);
		printf("Salario do funcionario: %.2f\n", sal[i]);
		printf("Reajuste salarial do funcionario: %.2f\n", salt[i]);
		printf("-------------------------------\n");
	}
}