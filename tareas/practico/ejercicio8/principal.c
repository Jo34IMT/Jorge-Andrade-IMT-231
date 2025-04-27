#include <stdio.h>
#include "funciones.h"
int main(){
    int a = 0;
    while(1){
          printf("ingresa un numero enterp positivo \n");
          scanf("%d", &a);
          if(a <= 0){
              printf("el programa ha terminado: \n");
              break;
          }else{
              a = fact(a);
              printf("el resultado es: %d \n", a);
          }
    }
    return 0;
}
