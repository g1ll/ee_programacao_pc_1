#include <stdio.h>

int main() {

	FILE *file;	
	
	char  filename[100],conteudo[200];
	
	printf("\nNome do Arquivo [size<21]:\n");
	scanf("%[^\n]s",filename);
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
