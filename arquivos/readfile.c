#include <stdio.h>
#include<stdlib.h>
int main() {

	FILE *file;	
	
	char  filename[100],conteudo[200];
	
	printf("Arquivos no diretorio atual:\n");
	system("ls -p | grep -v / ");

	printf("\n\nNome do Arquivo [size<21]:\n");
	scanf("%[^\n]s",filename);
	file = fopen(filename,"r");
	if(file!=NULL){
		printf("\nArquivo aberto!\n\n");
		printf("\n===============%s=============\n\n",filename);	
		 while( fgets(conteudo, 80, file ) != NULL ) 
		          printf("%s", conteudo);  
		printf("\n===============FIM============\n");	
		fclose(file);
	}else{
		printf("\nErro ao ler %s !\n\n",filename);
	}
	printf("\n\n\n\n");
	getchar();
	getchar();
	return 0;
}
