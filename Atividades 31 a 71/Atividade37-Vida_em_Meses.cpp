#include <stdio.h>
main()
{
	int a, i,m;
	printf("Digite a sua idade: \n");
	scanf("%i", &i);

	a=i*12;//qtde meses de vida da pessoa
	m=a*30;//qtde dias de vida
	
	printf("voce tem %i meses de vida; \ne voce tem %i dias de vida\n:0",a, m);
}