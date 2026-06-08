#include <stdio.h> 

main(){
	printf("---Aprovacao no Vestibular---\n\n");
	
	float np, nm, ncg, m;
	//text
	printf("Digite a sua nota na prova de: \n ");
	//notas
	printf("Portugues: \n");
	scanf("%f",&np);
	
	printf("matematica: \n");
	scanf("%f",&nm);
	
	printf("Conhecimentos Gerais: \n");
	scanf("%f",&ncg);
	
	m = (np+nm+ncg)/3;
	
	printf("A media do aluno foi: %.2f \n\n", m);
	printf("port: %.2f \n",np );
	printf("mat: %.2f \n",nm );
	printf("ncg: %.2f \n\n",ncg );
	//As linhas acima foram usadas para debugging do programador;
	
	if(m>7 && m<=10 and (np >= 6 && nm >= 6 && ncg >= 6)){	
		printf("O candidato esta aprovado");
	}
	
	else if(m>10 && np>10 or nm>10 or ncg>10){
		printf("Dados Incorretos!!! \n Tente novamente!!");
	}
	
	else{
		printf("O candidato nao foi aprovado");
	}
	
}