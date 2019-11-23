#include <stdio.h>
#include<stdlib.h>

int main() {

	FILE *file;	
	
	char  filename[13],conteudo[200],comando[200];
	system("ls");
	printf("\nInsira o nome do arquivo:\n");
	scanf("\n%s",filename);
	
	file = fopen(filename,"r");
	if(file!=NULL){
		printf("\nArquivo aberto:\n");
		 while( fgets(conteudo, 80, file ) != NULL ) 
		          printf("%s", conteudo);  
		fclose(file);
	}else{	
		printf("\nErro ao gravar! %s\n\n",filename);
	}
	return 0;
}
