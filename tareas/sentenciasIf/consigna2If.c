#include <stdio.h>

int main(void){
    int numberA=0;
    printf("ingresa un numero entero plis \n");
    scanf("%d", &numberA);
    if(numberA > 0){
            printf("tu numero es positivo: %d \n", numberA);
    }else if(numberA < 0){
            printf("tu numero es negativo: %d \n", numberA);
    }else{
            printf("tu numero es cero: %d \n", numberA);
    }
    return 0;
}
