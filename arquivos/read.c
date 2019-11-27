#include <stdio.h>
#include <stdlib.h>

int main() {

	FILE *file;	
	char  filename[200],conteudo[100];

	printf("Arquivos:\n");
	system("ls");
	printf("\nInsira o nome do arquivo:\n");
	scanf("\n%s",filename);
	
	file = fopen(filename,"r");
	if(file!=NULL){
		printf("\nArquivo aberto:\n");
		if( fgets(conteudo, 100, file ) != NULL ) 
		          printf("%s", conteudo);
		else perror("Erro ao ler!");  
		fclose(file);
	}else{	
		printf("\nErro ao abrir %s\n\n",filename);
	}

	printf("\n\n\n");
	getchar();
	getchar();
	return 0;
}
