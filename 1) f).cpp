/*
f) Fa�a um programa que receba dois n�meros X e Y, sendo X < Y. Calcule e mostre:

� a soma dos n�meros pares desse intervalo de n�meros, incluindo os n�meros digitados;
� a multiplica��o dos n�meros �mpares desse intervalo, incluindo os digitados;
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main(){
	
	int contador=0, X=0, Y=0, soma_pares=0, multiplicacao_impares=1;
		char tentar_novamente;
	
	setlocale(LC_ALL, "Portuguese");
	
	while(X>=Y || contador==0){	
	
	system("cls");
	
	printf("\n FAZER ALGUNS C�LCULOS COM UMA DETERMINADA SEQU�NCIA DE N�MEROS:");
		printf("\n \n *********************************************************************** \n");

	contador++;
	
	printf("\n Digite o n�mero que inicia a sequ�ncia (o menor, o X): ");
		scanf("%d", &X);
			printf("\n ----------------------------------------------------------------------- \n");
	
	printf("\n Digite o n�mero que finaliza a sequ�ncia (o maior, o Y): ");
		scanf("%d", &Y);
		
	if(X>=Y){
		
		printf("\n \n !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! ");
			printf("\n \n ERRO: X deve ser menor que Y, n�o maior, nem igual! N�meros desconsiderados! Tente novamente!");
				printf("\n \n !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! \n");
				
		printf("\n \n DIGITE QUALQUER CARACTERE E APERTE ENTER PARA TENTAR NOVAMENTE: ");
			scanf(" %c", &tentar_novamente);
}
	
	else{
		
	do{
		
	if(X%2==0){
	
	soma_pares = soma_pares + X;
}
	
	else{
		
	multiplicacao_impares = multiplicacao_impares * X;
}
	
	X++;
	
}	while (X<=Y);

	X=0;
	
}	
}

	printf("\n\n *********************************************************************** \n");
		printf("\n RESULTADO: \n");
			printf(" - A soma dos n�meros pares desse intervalo de n�meros, incluindo os n�meros digitados, � de: %d;", soma_pares);
				printf("\n - A multiplica��o dos n�meros �mpares desse intervalo, incluindo os digitados, � de: %d.", multiplicacao_impares);
					
	printf("\n\n *********************************************************************** \n");
		printf("\n FIM DO PROGRAMA. \n");
			printf("\n *********************************************************************** \n");
				
}
