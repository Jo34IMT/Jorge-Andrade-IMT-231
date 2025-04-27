#include <stdio.h>
#include "funciones.h"
int main(){
    int a,b = 0;

    while(1){
        printf("ingresa un numero: \n");
        scanf("%d", &a);
        printf("ingresa un otro: \n");
        scanf("%d", &b);
        if(a == 0 && b == 0){
            break; 
        }else{
            com(a,b);
        }
    }
    return 0;
}
