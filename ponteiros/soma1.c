#include<stdio.h>

/*
  NOME: soma
  ENTRADA: 2 inteiros
  SAÍDA: Nenhuma
  RETORNO: Valor da soma
 */

int soma(int a,int b);

int main(void){
    
    int x,y,s;
    
    x=10;
    y=20;

    s=soma(x,y);

    printf("%d\n",s);
    printf("\n\n\n");
    return 0;
}

//parâmetros de entrada 
//         E        E
int soma(int a, int b){
    return a+b;
}