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
    int *d,*nd,i=0,j,ds=0,di=0;
    float media=0;
    
    d = malloc(sizeof(int*));

    ligaSensor();
    printf("\nDados:\n");
    
    d[i]=leSensor();
    printf(" %d ", d[i]);
    
    while(d[i]!=0){
        nd=realloc(d, ++i * sizeof (int*));
        if(nd!=NULL){
            d = nd;
            d[i]=leSensor();
            printf(" %d ", d[i]);
        }else{
             printf("\nErro ao alocar memoria!\n");
        }
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

    free(d);
    d = NULL;
    free(nd);
    nd = NULL;
        
    printf("\n\tDados acima da media: %d (%f)",ds,ds*100.0/i);
    printf("\n\tDados abaixo da media: %d (%f)",di,di*100.0/i);
   
    printf("\n\n\n");
    getchar();
    return 0;
}