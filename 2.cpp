/*
02- Escrever um algoritmo para ler a quantidade de horas/aula de dois professores e o valor
por hora recebido por cada um. Mostrar na tela qual dos professores tem sal�rio total
maior.
*/

#include <stdio.h>
#include <locale.h>

main(){
	
	int contador=1, indice, professor;
	float quantidade_horas[2], valor_hora[2], salario[2], maior=0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n MOSTRAR O MAIOR SAL�RIO ENTRE 2 PROFESSORES:");
		printf("\n\n *********************************************************************** \n");
		
	for(indice=0; indice<2; indice++){
		
		printf("\n Digite a quantidade de horas/aula do %d� professor (a): ", contador);
			scanf("%f", &quantidade_horas[indice]);
			
		printf("\n Digite o valor por hora recebido pelo %d� professor (a): ", contador);
			scanf("%f", &valor_hora[indice]);
			
	if(indice<1){
		
		printf("\n ----------------------------------------------------------------------- \n");
}

	salario[indice] = valor_hora[indice] / quantidade_horas[indice];
	
	if(salario[indice] > maior){
		
	maior = salario[indice];
	
	professor = contador;
}

contador++;
}

	printf("\n\n *********************************************************************** \n");
		printf("\n RESULTADO: \n");
			printf("\n ----------------------------------------------------------------------- \n");
				printf("\n O professor (a) que tem sal�rio total maior � o (a): \n\n");
					printf("\n %d� professor (a) (que tem sal�rio de R$%.2f).", professor, maior);

	printf("\n\n +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n");
		printf("\n FIM DO PROGRAMA. \n");
			printf("\n *********************************************************************** \n");
		
}
