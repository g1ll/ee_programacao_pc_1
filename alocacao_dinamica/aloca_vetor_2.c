#include<stdio.h>
#include<stdlib.h>

int main(){

    int *notas,qtd;
    float media=0;

    printf("\n Qtd Notas: ");
    scanf("%d",&qtd);

    //aloca com zeros mais eficiente q malloc em casos
    //  com grande quantidade de memória alocada
    notas = calloc(qtd,sizeof(int)); 

    //  notas = malloc(qtd*sizeof(int)); 
    //  menset(notas,0,qtd*sizeof(int)); //atribui zeros

    printf("\nNotas: ");
    for(int i=0;i<qtd;i++){
        scanf("%d",&notas[i]);
        media+=notas[i];
    }
    media/=qtd;
    printf("\nMedia: %f",media);

    printf("\n\n\n");
    getchar();
    getchar();
    return 0;
}