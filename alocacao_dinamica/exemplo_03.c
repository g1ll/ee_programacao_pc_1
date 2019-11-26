#include<stdio.h>
#include<stdlib.h>

int main(){

    int qtd,i;
    float media=0;

    printf("\n Qtd dados: ");
    scanf("%d",&qtd);

    int dados[qtd]; /*Alocação estática*/

    printf("\nDados: ");
    for(i=0;i<qtd;i++){
        scanf("%d",&dados[i]);
        media+=dados[i];
    }
    media/=qtd;
    printf("\nMedia: %f",media);

    printf("\n\n\n");
    getchar();
    getchar();
    return 0;
}