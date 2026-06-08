#include<stdio.h> 
#include<math.h>

main()
{
	//variaveis
	float raio, area, PI= 3.14159;
	//chamada
	printf("Digite o valor do raio: ");
	scanf ("%f", &raio);
	//process
	area = PI*raio*raio;
	
	printf ("A area da circunferencia de raio =%.2f e = %.2f", raio, area);
}