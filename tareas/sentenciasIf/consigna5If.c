#include <stdio.h>
 int main(void){
     int numeroA = 0;
     printf("ingresa un numero \n");
     scanf("%d", &numeroA);
     if(numeroA % 2 == 0){
          printf("tu numero es par %d \n ", numeroA);
     }else{
          printf("tu numero es impar %d \n ", numeroA);
     }
     return 0;
}

