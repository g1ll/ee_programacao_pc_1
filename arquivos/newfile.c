#include <stdio.h>
int main() {

  FILE *file;	
  char  fname[100], cont[100];

  printf("\nNome do Arquivo:\n");
  scanf("%s",fname);
  file = fopen(fname,"w");

  if(file!=NULL){
    printf("\nNome a ser gravado: ");
    scanf("\n%s",cont);
    fprintf(file,"\nNome: %s",cont);
    printf("Informe a idade: ");
    scanf("\n%s",cont);
    fprintf(file,"\nIdade: %s\n",cont);
    printf("\nGravado!\n\n");
	fclose(file);
  }else{	
    printf("\nErro %s\n\n",fname);
  }
return 0;
}
