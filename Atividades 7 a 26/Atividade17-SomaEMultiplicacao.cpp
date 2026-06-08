#include <stdio.h>

main(){
	//variaveis
	float a, b, c, d, ab, ac, ad, bc, bd, cd, axb, axc, axd, bxc, bxd, cxd ;
	
	//Chamada A
	printf("Digite o valor de A: ");
	scanf ("%f", &a);
	
	//Chamada B
	printf("Digite o valor de B: ");
	scanf ("%f", &b);
	
	//Chamada C
	printf("Digite o valor de C: ");
	scanf ("%f", &c);
	
	//Chamada D
	printf("Digite o valor de D: ");
	scanf ("%f", &d);
	
	//calculo +
	ab=a+b,
	ac=a+c,
	ad=a+d,
	bc=b+c,
	bd=b+d,
	cd=c+d;
	//calculo *
	axb=a*b,
	axc=a*c,
	axd=a*d,
	bxc=b*c,
	bxd=b*d,
	cxd=c*d;
	
	
	printf ("O valor de A +B  eh: %2.f \n O valor de A+C  eh: %.2f \n O valor de A+D  eh: %.2f \n O valor de B+C  eh: %.2f \n O valor de B+D  eh: %.2f \n O valor de C+D  eh: %.2f \n", ab, ac, ad, bc, bd, cd);
	printf ("O valor de A*B  eh: %2.f \n O valor de A*C  eh: %.2f \n O valor de A*D  eh: %.2f \n O valor de B*C  eh: %.2f \n O valor de B*D  eh: %.2f \n O valor de C*D  eh: %.2f \n", axb, axc, axd, bxc, bxd, cxd);


}