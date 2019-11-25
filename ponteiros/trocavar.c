#include<stdio.h>

void troca(int *x,int *y);

int main(void){

    int a,b;

    a=3;
    b=4;
    printf("a:%d b:%d\n",a,b);
    troca(&a,&b);
    printf("a:%d b:%d\n",a,b);
    printf("\n\n\n");
    getchar();
    return 0;
}

void troca(int *x,int *y){

    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}