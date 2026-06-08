#include<stdio.h>

//Explicação aula Sherfis
main() //Função Principal
{
	int a; //Declaração da variável a
	int b; //Declaração da variável b
	
	//entrada de dados
	printf("Digite o primeiro valor a: ");
	scanf ("%i", &a);
	printf("Digite o segundo valor b: ");
	scanf ("%i", &b);
	//calculo
	
	if (a % b){
		printf("O maior valor eh A:  %i", a);
	}
	else if (a < b){
		printf("O maior valor eh B:  %i", b);
	} else {
		printf("Os valores sao iguais:	%i",b );
	}
}