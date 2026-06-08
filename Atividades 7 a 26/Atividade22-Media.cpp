#include <stdio.h>

main(){
	//variaveis
	int Val1, Val2, Media;
	//chamada BASE
	printf("Digite um numero: ");
	scanf ("%i", &Val1);
	
	printf("Digite um numero: ");
	scanf ("%i", &Val2);
	
	//processo
	Media = (Val1+Val2)/2;
	
	printf ("A Media dos numeros %i e %i eh igual a \n %i:",Val1, Val2, Media);
}