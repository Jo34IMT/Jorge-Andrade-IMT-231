#include <stdio.h>

int main(void){
         int numberA=0;
         int numberB=0;
         printf("Ingresa el primer numero \n");
         scanf("%d", &numberA);
         printf("Ingresa otro numero \n");
         scanf("%d", &numberB);
         if(numberA > numberB){
                  printf("el numero mayor es %d \n", numberA);
         }else{
                  printf("el numero mayor es %d \n", numberB);
         }
         return 0;
}
