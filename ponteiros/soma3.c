#include<stdio.h>

/*
  NOME: soma
  ENTRADA: 1 inteiros
  ENTRADA/SAÍDA: Valor da soma
  RETORNO: Nenhuma
 */

int soma(int a,int *b);

int main(void){
    
    int x,y;
    
    x=10;
    y=20;

    soma(x,&y);

    printf("%d\n",y);
    printf("\n\n\n");
    return 0;
}

//parâmetros de entrada 
//         E        E
int soma(int a, int *b){
    *b += a;
}