#include <stdio.h>
#include "funciones.h"
int main(){
    int num = 0;
    while(1){
        printf("ingresa un numero, ingresa (-1) parav salir: \n");
        scanf("%d", &num);
        if(num == -1){
            printf("el programa finalizo");
            break;
        }if(parimpar(num)){
            printf("tu numero es par %d \n", num);
        }else{
            printf("tu numero es impar %d \n", num);
        }
    }
    return 0;
} 
