#include <stdio.h>
#include <locale.h>

main(){
	
	int contador=0, opcao;
		float nota, acumulador=0, x, y, aritmetica, ponderada, acumuladorx=0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n C�LCULO DE M�DIA ARITM�TICA OU PONDERADA DE 3 NOTAS: ");
		printf("\n");
			printf("\n *********************************************************************** \n");
	
while (contador<3){
	
	contador = contador + 1;
	
	printf("\n Digite a nota %d e aperte enter: \t", contador);
		scanf("%f", &nota);
	
	acumulador = acumulador + nota;
	
if(contador<=2){
	x = nota * 3;
		acumuladorx = acumuladorx + x;
}

else{
 	y = nota * 4;
}			
}	

	printf("\n *********************************************************************** \n");
		printf("\n ESCOLHA UMA OP��O: \n");
			printf("\n 1 - para m�dia aritm�tica; \n");
				printf("\n 2 - para m�dia ponderada com pesos 3, 3 e 4. \n");
					printf("\n Digite a op��o escolhida e aperte enter: \t");
						scanf("%d", &opcao);
	
switch(opcao){
	
	case 1:			
	aritmetica = acumulador / contador;
	
	printf("\n *********************************************************************** \n");
		printf("\n RESULTADO: \n");
			printf("\n A m�dia aritm�tica das notas digitadas �: %.2f.", aritmetica);
	break;

	case 2:
	ponderada = (acumuladorx + y) / (3 + 3 + 4);
	
	printf("\n *********************************************************************** \n");
		printf("\n RESULTADO: \n");
			printf("\n A m�dia ponderada das notas digitadas �: %.2f.", ponderada);
	break;
	
	default:
	printf("\n *********************************************************************** \n");
		printf("\n RESULTADO: \n");
			printf("\n O caractere digitado n�o corresponde a nenhuma op��o. \n");
}

	printf("\n");
		printf("\n *********************************************************************** \n");
			printf("\n Fim do programa. \n");
				printf("\n *********************************************************************** \n");
}
