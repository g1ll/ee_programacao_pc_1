#include <stdio.h>

int main() {

	FILE *file;	
	char  *filename, *conteudo;
	
	printf("\nNome do Arquivo:\n");
	scanf("\n%s ",filename);
	getchar();
	file = fopen(filename,"w");
	
	if(file!=NULL){
		fprintf(file,"\nDados Cadastrados\n");
		printf("\nInforme o nome a ser gravado: ");
		scanf("%[^\n]s ",conteudo);
		fprintf(file,"Nome: %s",conteudo);
		getchar();
		printf("Informe a idade: ");
		scanf("%[^\n]s ",conteudo);
		fprintf(file,"\nIdade: %s\n",conteudo);
		printf("\nGravado!\n\n");
	}else{	
		printf("\nErro ao gravar! %s\n\n",filename);
	}
	
	return 0;
}
