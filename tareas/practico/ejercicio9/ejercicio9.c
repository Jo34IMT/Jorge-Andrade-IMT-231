#include <stdio.h>
#include "funciones.h"
int main(){
    int a = 0;
    int b = 0;
    while(1){
        printf("ingres un numero:\n");
        scanf("%d", &a);
        if(a >= 10){
           b = fnum(a);
           printf("tu numero invertido es : %d \n", b);
        }else{
           printf("el progrma termino:\n");
           break;
        }
    }
    return 0;
}
