#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int ligaSensor(){
    printf("\nSensor ligado...");
    srand(time(0));
}

int leSensor(){
    return rand()%12;
}

int main(void){
    int d[5],a[]={1,2,3},i=0,j,ds=0,di=0;
    float media=0;
    
    printf("\na: ");
    for(j=0;j<3;j++)printf(" %d ",a[j]);

    printf("\n\ta: %d",a[0]);
    ligaSensor();
    printf("\nDados:\n");
    
    d[i]=leSensor();
    printf(" %d ", d[i]);
    while(d[i]!=0){
        d[++i]=leSensor();
        printf(" %d ", d[i]);
    }

    printf("\nCalculando media...");
    printf("\nQtd. Dados: %d \nValores: ",i);
    
    for(j=0;j<i;j++)printf(" %d ", d[j]);
    for(j=0;j<i;j++)media+=d[j];
    
    media/= i;
    printf("\n\tmedia: %f",media);
    
    for(j=0;j<i;j++){
        ds += (d[j]>media)?1:0;
        if(d[j]<media)di++;
    }
        
    printf("\n\tDados acima da media: %d (%f)",ds,ds*100.0/i);
    printf("\n\tDados abaixo da media: %d (%f)",di,di*100.0/i);
    
    printf("\na: ");
    for(j=0;j<3;j++)printf(" %d ",a[j]);
    
    printf("\n\n\n");
    getchar();
    return 0;
}