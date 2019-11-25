#include<stdio.h>
#include<stdlib.h>

int main(){
    int *v1;    //Ponteiro V1
    int v2[5];  //Alocacao estatica de v2 5 inteiros (20 bytes)

    v1 = malloc(5*sizeof(int)); //Alocacao dinamica 5 * 4 bytes = 10

    for(int i = 0;i<5;i++)scanf("%d",&v1[i]);
    for(int i = 0;i<5;i++)scanf("%d",&v2[i]);

    printf("\nv1: ");
    for(int i = 0;i<5;i++)printf(" %d",v1[i]);

    printf("\nv2: ");
    for(int i = 0;i<5;i++)printf(" %d",v2[i]);


    printf("\n\n\n");
    getchar();
    return 0;
}