#include "funciones.h"

int fdig(int a){
    int i = 0;
    if(a == 0) return 1;
    while(a != 0){
        a = a / 10;
        ++i;
    }
    return i;
}


