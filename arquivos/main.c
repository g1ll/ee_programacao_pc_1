#include <stdio.h>

void main() {

	FILE *file;	
	
	char  filename[10],conteudo[500];

	fgets(conteudo,500,stdin);
	sprintf(filename,"teste.txt");
	//sprintf(conteudo,"%s","TESTE");
	
	file = fopen(filename,"w");
	if(file!=NULL){
		fprintf(file, "%s\n",conteudo);
		printf("\nGravado!\n\n");
	}else{
		printf("\nErro ao gravar! %s\n\n",filename);
	}	

	printf("\n\n\n");
	getchar();
}
