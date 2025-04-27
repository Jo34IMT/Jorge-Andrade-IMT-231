#include "funciones.h"
#include <stdio.h>
int fnum(int a){
    int b = 0; 
    int c = 0;
    while(a > 0){
        b = (a % 10);
        c = (c * 10) + b;
        a = a / 10;
    }
    return c;
}

