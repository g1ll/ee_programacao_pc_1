#include<stdio.h>

void vetorquad(int *vetor,int size);

void vetorquad2(int *vetor);

int main(void){

    int v[]  = {1,2,3,4,5,6};
    for(int i=0;i<6;i++)printf(" %d",v[i]);
    vetorquad(v,6);
    printf("\n");
    for(int i=0;i<6;i++)printf(" %d",v[i]);
    printf("\n");
    vetorquad2(v);
    for(int i=0;i<6;i++)printf(" %d",v[i]);
    printf("\n\n\n");
    getchar();
    return 0;
}

void vetorquad(int *vetor,int size){
    for(int i=0;i<size;i++)vetor[i]*=2;
}

void vetorquad2(int *vetor){
    for(;*vetor;*vetor++)*vetor*=2;
}