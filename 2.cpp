#include <stdio.h>
#include <locale.h>

main(){
	
	int codigo;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n CLASSIFICA��O DE UM PRODUTO: ");
		printf("\n");
			printf("\n *********************************************************************** \n");

		printf("\n Digite o c�digo do produto e aperte enter: \t");
			scanf("%d", &codigo);
	
    if(codigo==1){	
	
	printf("\n *********************************************************************** \n");
		printf("\n RESULTADO: \n");
			printf("\n Alimento n�o-perec�vel.");
}

	if(codigo >= 2 && codigo <= 4){	
	
	printf("\n *********************************************************************** \n");
		printf("\n RESULTADO: \n");
			printf("\n Alimento perec�vel.");
}
	
	if(codigo==5 || codigo==6){	
	
	printf("\n *********************************************************************** \n");
		printf("\n RESULTADO: \n");
			printf("\n Vestu�rio.");
}

	if(codigo >= 8 && codigo <= 15){	
	
	printf("\n *********************************************************************** \n");
		printf("\n RESULTADO: \n");
			printf("\n Higiene pessoal.");
}

	if(codigo < 1 || codigo > 15 || codigo == 7){
	
	printf("\n *********************************************************************** \n");
		printf("\n RESULTADO: \n");
			printf("\n Inv�lido.");
}

	printf("\n");
		printf("\n *********************************************************************** \n");
			printf("\n Fim do programa. \n");
				printf("\n *********************************************************************** \n");
}
