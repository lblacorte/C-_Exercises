/*
03- Dada duas matrizes, calcule a soma, a multiplica��o, a diferen�a e a divis�o. Crie um menu
para que voc� possa escolher o tipo de opera��o que pretende realizar.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	
	char operacao[13];
		int coluna, linha, num_colunas=5, num_linhas=5;
			float matriz1[num_linhas][num_colunas], matriz2[num_linhas][num_colunas], resposta[num_linhas][num_colunas];
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n FAZER C�LCULOS COM DUAS MATRIZES:");
		printf("\n\n *********************************************************************** \n");
	
	printf("\n Digite o n�mero de LINHAS que voc� quer que as matrizes tenham: ");
		scanf("%d", &num_linhas);
		
	printf(" ----------------------------------------------------------------------- ");
	
	printf("\n Digite o n�mero de COLUNAS que voc� quer que as matrizes tenham: ");
		scanf("%d", &num_colunas);
	
	printf("\n *********************************************************************** \n");
	
	printf("\n PRIMEIRA MATRIZ: \n\n");
	
	for(linha=0;linha<num_linhas;linha++)
	for(coluna=0;coluna<num_colunas;coluna++){
	
	printf("\n Digite o n�mero da linha %d e coluna %d da matriz: ", linha+1, coluna+1);
		scanf("%f", &matriz1[linha][coluna]);
	
	if(linha!=num_linhas-1 || coluna!=num_colunas-1){
		printf(" ----------------------------------------------------------------------- ");
}
}

	printf("\n\n ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| \n\n");
	
	printf("\n SEGUNDA MATRIZ: \n\n");

	for(linha=0;linha<num_linhas;linha++)
	for(coluna=0;coluna<num_colunas;coluna++){
	
	printf("\n Digite o n�mero da linha %d e coluna %d da matriz: ", linha+1, coluna+1);
		scanf("%f", &matriz2[linha][coluna]);
	
	if(linha!=num_linhas-1 || coluna!=num_colunas-1){
		printf(" ----------------------------------------------------------------------- ");
}
}

	printf("\n\n *********************************************************************** \n");

	printf("\n Confira o menu abaixo: \n");
	
	printf("\n\n MENU DE OPERA��ES POSS�VEIS ENTRE AS DUAS MATRIZES: \n");
		printf("\n - Para somar => digite SOMA;");
			printf("\n - Para multiplicar => digite MULTIPLICACAO;");
				printf("\n - Para subtrair => digite DIFERENCA;");
					printf("\n - Para dividir => digite DIVISAO. \n");
	
	printf("\n\n Agora, digite abaixo o nome da opera��o que voc� quer realizar, exatamente de acordo com o menu (exemplo: DIVISAO):\n\n ");
		scanf("%s", &operacao);
	
	for(linha=0;linha<num_linhas;linha++)
	for(coluna=0;coluna<num_colunas;coluna++){
		
	if(!strcmp(operacao,"SOMA")){

	resposta[linha][coluna] = matriz1[linha][coluna] + matriz2[linha][coluna];
}
	
	if(!strcmp(operacao,"MULTIPLICACAO")){

	resposta[linha][coluna] = matriz1[linha][coluna] * matriz2[linha][coluna];
}

	if(!strcmp(operacao,"DIFERENCA")){

	resposta[linha][coluna] = matriz1[linha][coluna] - matriz2[linha][coluna];
}
	
	if(!strcmp(operacao,"DIVISAO")){

	resposta[linha][coluna] = matriz1[linha][coluna] / matriz2[linha][coluna];
}
}

	printf("\n\n *********************************************************************** \n");
		printf("\n RESULTADO: \n\n");
			printf(" A matriz resultante do c�lculo que voc� escolheu para ser feito entre as duas matrizes �: \n\n\n");

	for(linha=0;linha<num_linhas;linha++)
	for(coluna=0;coluna<num_colunas;coluna++){
	
	if(coluna!=0){
		printf("        ");
}

	if(coluna==0 && linha!=0 && linha!=num_linhas){
		printf("\n\n\n\n");
}

	printf(" %.3f", resposta[linha][coluna]);
}

	printf("\n\n +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n");
		printf("\n FIM DO PROGRAMA. \n");
			printf("\n *********************************************************************** \n");
			
}
