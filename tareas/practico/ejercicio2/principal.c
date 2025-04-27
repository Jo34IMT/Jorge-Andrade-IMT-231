#include <stdio.h>
#include "funciones.h"
int main(){
    int a = 0;
    while(1){
        printf("Ingresa un numero entero, coloca cero para salir. \n");
        scanf("%d", &a);
        if(a == 0){
            printf("el programa finalizo. \n");
            break;
        }if(a < 0){
            printf("Ingresa un numero positivo. ");
            continue;
        }
        int dig = fdig(a);
        printf("tu numero tiene %d digitos.", dig);
    }
    return 0;
}
