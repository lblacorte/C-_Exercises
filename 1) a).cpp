/*
1) a) Criar um algoritmo que leia um n�mero (num) da entrada. Em seguida, ler n n�meros da entrada e
imprimir o triplo de cada um.
*/

#include <stdio.h>
#include <locale.h>

main(){
	
	int num, contador;
		float numero, triplo;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n CALCULAR O TRIPLO DE V�RIOS N�MEROS:");
		printf("\n\n *********************************************************************** \n");
		
	printf("\n Voc� quer saber o triplo de quantos n�meros? ");
		scanf("%d", &num);
			printf("\n *********************************************************************** \n");
		
	for(contador=0; contador<num; contador++){
		
		printf("\n Digite um n�mero: ");
			scanf("%f", &numero);
				printf(" ----------------------------------------------------------------------- ");
		
		triplo = numero * 3;
		
		printf("\n RESULTADO: \n");
			printf(" O triplo desse n�mero �: %.3f.", triplo);
				printf("\n\n *********************************************************************** \n");
				
}

		printf("\n +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n");
			printf("\n FIM DO PROGRAMA. \n");
				printf("\n *********************************************************************** \n");
				
}
