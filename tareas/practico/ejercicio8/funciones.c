#include "funciones.h"
#include <stdio.h>

int fact(int a){
    int b = 1;
    for(int i = 0;i < a;i++){
        b = b * (a - i);
    }
    return b;
}

