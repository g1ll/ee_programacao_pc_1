#include <stdio.h>
#include <stdlib.h>

//----PARAMETROS PARA O MAIN-----
//argc representa a qtd de parametros
//argc  = 1 sem parametros apenas o nome do programa
//argv eh o vetor de parametros no formato string
// argv[0] = nome_do_programa

/*====Programa Data =====
    Para executar o programa data eh necessario digitar o nome
do programa (data) seguido de inteiros representando o dia, mes e
o ano. Exemplo:
        > ./data 25 12 2019
*/

void main(int argc, char *argv[])
{
int mes;
char *nomemes[] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio",
                    "Junho", "Julho", "Agosto", "Setembro", "Outubro",
                    "Novembro", "Dezembro"};

if(argc == 4) /* Testa se o numero de parametros fornecidos esta' correto
                o primeiro parametro e' o nome do programa, o segundo o dia
                o terceiro o mes e o quarto os dois ultimos algarismos do ano */
{
    mes = atoi(argv[2]);  /* argv contem strings. A string referente ao mes deve ser
                             transformada em um numero inteiro. A funcao atoi esta
                             sendo usada para isto: recebe a string e transforma no
                             inteiro equivalente */

    if (mes<1 || mes>12)  /* Testa se o mes e' valido */
        printf("Erro!\nUso: data dia mes ano, todos inteiros");
    else
      printf("\n%s de %s de %s\n", argv[1], nomemes[mes-1], argv[3]);
    
    getchar();
}

else printf("Erro!\nUso: data dia mes ano, todos inteiros");

}