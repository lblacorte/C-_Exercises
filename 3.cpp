/*
03- Construa um algoritmo que leia 50 valores inteiros e positivos e:
� Encontre o maior valor;
� Encontre o menor valor;
� Calcule a m�dia dos n�meros lidos.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main(){
	
	int vetor[50], maior, menor, indice, negativo;
	char tentar_novamente;
	float media, contador, acumulador;
	
	setlocale(LC_ALL, "Portuguese");
		
	while(negativo<=0 || indice==0){
	
	system("cls");
	
	maior=0;
	
	menor=0;
	
	acumulador=0;
	
		printf("\n MOSTRAR O MAIOR, O MENOR E A M�DIA DE 50 N�MEROS:");
			printf("\n\n *********************************************************************** \n");
	
	for(indice=0, contador=1; indice<50 && vetor[indice-1]>0; indice++, contador++){
	
		printf("\n Digite o %.0f� n�mero: ", contador);
			scanf("%d", &vetor[indice]);
	
	if(vetor[indice]<=0){
		
		printf("\n \n !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! ");
			printf("\n \n ERRO: Voc� digitou um n�mero negativo ou zero! Os n�meros precisam ser positivos! \n N�meros desconsiderados! Inicie novamente!");
				printf("\n \n !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! \n");
				
		printf("\n\n DIGITE QUALQUER CARACTERE E APERTE ENTER PARA TENTAR NOVAMENTE: ");
			scanf(" %c", &tentar_novamente);
			
	negativo = vetor[indice];
}

	else{
		
	negativo = 1;
		
	if(indice<49){
		
		printf(" ----------------------------------------------------------------------- ");
}	
		
	if(vetor[indice]>maior){
		
	maior = vetor[indice];
}
	
	if(indice==0 || vetor[indice]<menor){
		
	menor = vetor[indice];
}
	
	acumulador = acumulador + vetor[indice];
	
}
}
}

	media = acumulador / (contador - 1);

	printf("\n\n *********************************************************************** \n");
		printf("\n RESULTADO: \n");
			printf("\n ----------------------------------------------------------------------- \n");
				printf("\n O maior valor lido �: %d; \n", maior);
					printf("\n O menor valor lido �: %d; \n", menor);
						printf("\n O m�dia dos n�meros lidos �: %.5f. \n", media);

	printf("\n +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n");
		printf("\n FIM DO PROGRAMA. \n");
			printf("\n *********************************************************************** \n");
		
}
