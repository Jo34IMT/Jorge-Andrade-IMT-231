#include <stdio.h>
int main(){
    int i,j = 0;
    while(1){
        printf("ingresa un numero positivo;(si colas negativo salir): \n");
        scanf("%d", &i);
        if(i >= 0){
           j += i;
        }else{
           printf("el programa termino la suma total es: %d \n", j);
           break;
        }
    }
    return 0;
}
