#include<stdio.h> 
int main() 
{ 
    // a = 5(00000101), b = 9(00001001) 
    unsigned char a = 5, b = 9;  
  
    // Resultado: 00001010 = 10
    printf("a<<1 = %d\n", a<<1); 
    
    // Resultado: 00010010 = 18  
    printf("b<<1 = %d\n", b<<1);   

    // Resultado: 00000001 = 10+29 zeros = 1073741824 
    printf("1<<30 = 2^30 = %ld Bytes ≃ 1GB\n", 1<<30);
    // Resultado: 00000010 = 10+30 zeros = 2*1073741824 
    printf("2<<30 = 2*2^30 = %ld Bytes ≃ 2GB\n", 2<<30); 

    printf("\n\n\n");
    getchar();
    //(x<<y)Mesmo que x = x*2^y
    //(x>>y)Mesmo que x = x/2^y
    //sempre operadores positivos
    //limite do inteiro 32 ou 64 bits

    return 0; 
} 