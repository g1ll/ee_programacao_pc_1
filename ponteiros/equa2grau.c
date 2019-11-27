#include<stdio.h>
#include<math.h>

int calcEqSegundoGrau(float a,float b, float c,float *x1,float *x2);

int main(void){
    float r1,r2,a,b,c;

    printf("\nCoeficientes (a b c):\n");
    scanf("%f %f %f",&a,&b,&c);

    if(calcEqSegundoGrau(a,b,c,&r1,&r2)==1)
        printf("\nNao possui raizes reais!");
    else
        printf("\nRaizes:\n\tr1: %f\n\tr2: %f",r1,r2);
    
    printf("\n\n\n");
    getchar();
    getchar();
    return 0;
}

int calcEqSegundoGrau(float a,float b, float c,float *x1,float *x2){
    
    int cod = 0;
    float dc=0;

    dc  = b*b -4*a*c;
    if(dc>0){
        *x1 = (-b+sqrt(dc))/2*a;
        *x2 = (-b-sqrt(dc))/2*a;
    }else{
        cod = 1;   
    }
    
    return cod;
}