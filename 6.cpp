/*
06- Elaborar um algoritmo que leia um conjunto de 30 valores e os coloca em 2 vetores
conforme os valores forem pares ou �mpares. O tamanho do vetor � 5 posi��es. Se algum
vetor estiver cheio escrev�-lo. Terminada a leitura escrever o conte�do dos dois vetores.
*/

#include <stdio.h>
#include <locale.h>

main(){
	
	int contador=1, vetor[30], total_pares[30], total_impares[30], pares[5], impares[5], indice, indice_pares=0, indice_impares=0, resto, delimitador_pares, delimitador_impares, contador_pares=1, contador_impares=1, totalpares, totalimpares;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n LER UM VETOR DE 30 N�MEROS E EXIBI-LOS CONFORME � PARIDADE:");
		printf("\n\n *********************************************************************** \n");
	
	for(indice=0; indice<30; indice++){
		
		printf("\n Digite o %d� n�mero: ", contador, indice);
			scanf("%d", &vetor[indice]);
	
	resto = vetor[indice] % 2;
	
	if(resto==0){
	
	pares[indice_pares] = vetor[indice];
	
	total_pares[indice] = vetor[indice];
	
	indice_pares++;
	
	if(indice==29){
	
	totalpares = indice_pares;
}
	
}
	
	else{
	
	impares[indice_impares] = vetor[indice];
	
	total_impares[indice] = vetor[indice];
	
	indice_impares++;

	if(indice==29){
	
	totalimpares = indice_impares;
}
	
}

	if(indice_pares==0){
		
	contador_pares = indice_pares;
}
	else{
	contador_pares = 1;
	}

	if(indice_impares==0){
		
	contador_impares = indice_impares;
}
	else{
	contador_impares = 1;
	}
	
	if(indice!=29 && indice_pares!=5 && indice_impares!=5){
		
		printf(" ----------------------------------------------------------------------- ");
}

	if(indice_pares==5){
		
	printf("\n *********************************************************************** \n");
	
	if(indice==29){
		
		printf("\n Os n�meros que est�o no �ltimo armazenamento do vetor dos pares s�o: \n\n");	
}
	else{
		printf("\n O vetor dos pares est� cheio (s� suporta 5 n�meros), e os n�meros que est�o nele s�o: \n\n");	
}

	for(indice_pares=0; indice_pares<5; indice_pares++){
		
		printf("\n %d \n", pares[indice_pares]);
		
}

	printf("\n *********************************************************************** \n");
	
	delimitador_pares = indice_pares;
	
	indice_pares = 0;
	
}
	
	else{
		delimitador_pares =0;
	}

	if(indice_impares==5){
		
	printf("\n *********************************************************************** \n");
	
	if(indice==29){
		
		printf("\n Os n�meros que est�o no �ltimo armazenamento do vetor dos �mpares s�o: \n\n");	
}
	else{
		printf("\n O vetor dos �mpares est� cheio (s� suporta 5 n�meros), e os n�meros que est�o nele s�o: \n\n");
}

	for(indice_impares=0; indice_impares<5; indice_impares++){
		
		printf("\n %d \n", impares[indice_impares]);
		
}
	
	delimitador_impares = indice_impares;
	
	indice_impares = 0;
	
}
	else{
	delimitador_impares =0;
	}

	if(indice==29 && delimitador_pares<4 && contador_pares!=0){
		
	printf("\n *********************************************************************** \n");
	
		printf("\n Os n�meros que est�o no �ltimo armazenamento do vetor dos pares (que n�o encheram o vetor) s�o:\n");
	
	for(indice_pares=0; indice_pares<5; indice_pares++){
	
		printf("\n %d \n", pares[indice_pares]);
}
}

	if(indice==29 && delimitador_impares<4 && contador_impares!=0){
		
		printf("\n Os n�meros que est�o no �ltimo armazenamento do vetor dos �mpares (que n�o encheram o vetor) s�o:\n");
	
	for(indice_impares=0; indice_impares<5; indice_impares++){
	
		printf("\n %d \n", impares[indice_impares]);	
}
}

contador++;

}

	printf("\n\n *********************************************************************** \n");
		printf("\n RESULTADO: \n");
			printf("\n ----------------------------------------------------------------------- \n");
				printf("\n Os n�meros pares digitados s�o: \n\n");
	
	for(indice=0; indice<30; indice++){
		
		if(indice<=totalpares){
	
		printf("\n %d", total_pares[indice]);
}
}

	printf("\n Os n�meros �mpares digitados s�o: \n\n");
	
	for(indice=0; indice<30; indice++){
		
		if(indice<=totalimpares){
		printf("\n %d", total_impares[indice]);
}

}

	printf("\n +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n");
		printf("\n FIM DO PROGRAMA. \n");
			printf("\n *********************************************************************** \n");
		
}
