#include <stdio.h>

main(){
	printf("---Media Final---\n\n");
	
	float A, B, C, F1,F2,F3,NF ;
	
	printf("Digite a primeira nota do Aluno: \n");
	scanf("%f", &A);
	
	printf("Digite a segunda nota do Aluno: \n");
	scanf("%f", &B);
	
	printf("Digite a terceira nota do Aluno: \n");
	scanf("%f", &C);
	
	F1 = A/2;
	F2 = B/3;
	F3 = C/5;
	
	NF = (F1+F2+F3);
	
	printf("A media final do aluno eh %.2f.", NF);
}