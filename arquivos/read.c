#include <stdio.h>
#include <stdlib.h>

int main() {

	FILE *file;	
	char  filename[100],conteudo[100];

	printf("Arquivos:\n");
	system("ls");
	printf("\nInsira o nome do arquivo:\n");
	scanf("%s",filename);
	
	file = fopen(filename,"r");
	if(file!=NULL){
		printf("\nArquivo aberto:\n");
		while(fgets(conteudo, 100, file ) != NULL ) 
		          printf("%s", conteudo);
		fclose(file);
	}else{	
		printf("\nErro ao abrir %s\n\n",filename);
	}

	printf("\n\n\n");
	getchar();
	getchar();
	return 0;
}
