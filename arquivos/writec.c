#include <stdio.h>

int main() {

	FILE *file;
	char filename[]="nome.txt",
	     conteudo[] = "Olá Mundo!";
	int i=0;

	file = 	fopen(filename,"w");
	
	if(file!=NULL){

		fputc('\n',file);

		do{	

			fputc(conteudo[i++],file);

		}while(conteudo[i]!='\0');

		fputc('\n',file);

		printf("\nGravado!\n\n");
		fclose(file);
	}else{	
		printf("\nErro ao gravar!\n\n");
	}
	return 0;	
}
