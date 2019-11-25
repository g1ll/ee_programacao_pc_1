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
    int valorSensor;
    ligaSensor();
    printf("\nDados:\n");
    
    do{
        valorSensor=leSensor();
        printf(" %d ", valorSensor);
    }while(valorSensor!=0);

    


    printf("\n\n\n");
    getchar();
    return 0;
}