#include <stdio.h>
#include <string.h>
#include <locale.h>

main(){
	
	int contador;
		char codigo[2];
			float mercadoria, acumulador=0, somador_l=0, somador_h=0, somador_a=0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n C�LCULO DE TOTAL DE VENDAS E VENDAS POR TIPO EM UM DETERMINADO DIA: \n\n");
		printf("\n *********************************************************************** \n");
		  	printf("\n TABELA DE OP��ES: \n");
		  		printf("\n L � para limpeza \n A � para alimenta��o \n H � para higiene \n");
					printf("\n *********************************************************************** \n"); 		
		  		
do{
	
	if(contador==0){
		printf("\n Informe o valor da mercadoria: \t");
			scanf("%f", &mercadoria);
}
 
	else {
		printf("\n Informe o valor da mercadoria (digite 0 para encerrar a pesquisa): \t");
			scanf("%f", &mercadoria);	
}
	
	if(mercadoria != 0){
		
	printf("\n Informe o c�digo da mercadoria de acordo com a tabela de op��es acima e aperte enter: \t");
		scanf("%s", &codigo);
	
	if(!strcmp(codigo,"L") || !strcmp(codigo,"A") || !strcmp(codigo,"H")){
	
	acumulador = acumulador + mercadoria;
}

	else{
	
	printf("\n !!!!!!!!!! C�digo inv�lido !!!!!!!!!! \n");
}
	
	printf("\n ----------------------------------------------------------------------- \n");
	
	if(!strcmp(codigo,"L")){
	
	somador_l = somador_l + mercadoria;
}

	if(!strcmp(codigo,"A")){
	
	somador_a = somador_a + mercadoria;
}

	if(!strcmp(codigo,"H")){
		
	somador_h = somador_h + mercadoria;
}
}
	contador = contador + 1;
	
} while (mercadoria>0);
	
	printf("\n\n *********************************************************************** \n");
		printf("\n RESULTADO: \n");
			printf("\n O total vendido nesse dia, com todos os c�digos juntos, foi de R$%.2f. \n\n", acumulador);
				printf("\n O total vendido nesse dia: \n");
					printf("\n - em limpeza foi de R$%.2f; \n", somador_l);
						printf("\n - em alimenta��o foi de R$%.2f; \n", somador_a);
							printf("\n - em higiene foi de R$%.2f. \n", somador_h);
								printf("\n\n *********************************************************************** \n");
									printf("\n Fim do programa. \n");
										printf("\n ********************************************************************** \n");
}
