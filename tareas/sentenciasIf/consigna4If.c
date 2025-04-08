#include <stdio.h>

int main(void){
    int edad=0;
    printf("Hola, cuantos años tienes");
    scanf("%d" , &edad);
    if(edad < 13){
       printf("Sos un niño con %d \n" ,edad);
    }else if(edad >= 13 && edad <= 17){
       printf("sos un adolescente con %d \n" ,edad);
    }else{
       printf("sos un adulto con %d \n" ,edad);
    }
    return 0;
}
