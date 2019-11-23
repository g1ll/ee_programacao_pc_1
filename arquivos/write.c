#include <stdio.h>

int main() {

	FILE *file;	
	char  filename[]="cadastro.txt", conteudo[200];

	file = fopen(filename,"w");
	
	if(file!=NULL){
		printf("\nArquivo: %s\n",filename);	
		fprintf(file,"\nDados Cadastrados\n");
		printf("\nInforme o nome a ser gravado:" );
		scanf("%[^\n]s ",conteudo);
		fprintf(file,"Nome: %s",conteudo);
		getchar();
		printf("Informe a idade: ");
		scanf("%[^\n]s ",conteudo);
		fprintf(file,"\nIdade: %s\n",conteudo);
		printf("\nGravado!\n\n");
		fclose(file);
	}else{	
		printf("\nErro ao gravar!\n\n");
	}
	return 0;	
}
