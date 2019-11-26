#include<stdio.h>

/*
  NOME: soma
  ENTRADA: 2 inteiros
  SAÍDA: Valor da soma
  RETORNO: Nenhuma
 */

int soma(int a,int b,int *r);

int main(void){
    
    int x,y,s;
    
    x=10;
    y=20;

    soma(x,y,&s);

    printf("%d\n",s);
    printf("\n\n\n");
    return 0;
}

//parâmetros de entrada 
//         E        E
int soma(int a, int b, int *r){
    *r = a+b;
}