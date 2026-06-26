#include <stdio.h>

main(){
	
	int vetor[6];
	
	for (int i=0; i<6; i++)
	{
		printf("Digite o vetor [%i]:\n", i+1);
		scanf("%i", &vetor[i]);
	}	
	
	printf("______________________________________\n\n");
	
	
	for(int i=0; i<6; i++){
		if(vetor[i]<0){
		vetor[i] = vetor[i]*-1;
	}
		printf("Vetor positivo %i: |%i|\n",i+1, vetor[i] );
	}
	
	printf("______________________________________\n\n");
	printf("Aperte Enter para fehar o programa");
}