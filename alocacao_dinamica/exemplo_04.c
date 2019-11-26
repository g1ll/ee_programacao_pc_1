#include<stdio.h>

int main(){

    int v[]={1,2,3,4,5};

    for(int i=0;i<5;i++)
        printf("%d ",v[i]);
    printf("\n");

    for(int i=0;i<5;i++)
        printf("%ld ",&v[i]);

    printf("\n\n\n\n");
    return 0;
}