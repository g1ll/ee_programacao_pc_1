#include<stdio.h>

int main(){

    int qtd;
    float media=0;

    printf("\n Qtd dados: ");
    scanf("%d",&qtd);

    int dados[qtd];

    printf("\nDados: ");
    for(int i=0;i<qtd;i++){
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