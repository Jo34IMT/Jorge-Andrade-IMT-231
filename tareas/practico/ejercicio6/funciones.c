#include "funciones.h"
#include <stdio.h>

int com(int a, int b){
    if(a > b){
       printf("tu numero es mayor: %d \n", a);
    }else if(a < b){
       printf("tu numero es mayor : %d \n", b);
    }else{
       printf("tu %d = %d",a,b);
    }
}



