#include<stdio.h>
#include<stdlib.h>

int main(void){
    int num,i;
    /* int *notas; */
    float media=0;

    printf("\nnum: ");
    scanf("%d",&num);

    /*notas = malloc(num*sizeof(int));*/

    int notas[num];

    for(i=0;i<num;i++){
        scanf("%d",&notas[i]);
        media+=notas[i];
    }
    media/=num;
    printf("\nmedia: %f",media);
    printf("\n\n\n");
    getchar();
    getchar();

    return 0;
}