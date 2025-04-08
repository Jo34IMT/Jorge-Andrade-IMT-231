#include <stdio.h>

int main(void){
    int año=0;
    printf("Ingrsea un año \n:");
    scanf("%d", &año);
    if(año % 4 == 0 && (año % 100 != 0 || año % 400 ==0)){
         printf("tu año es bisiesto %d \n" ,año);
    }else{
         printf("no es bisiesto %d \n" ,año);
    }
    return 0;
}
