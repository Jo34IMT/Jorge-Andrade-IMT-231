#include <stdio.h>

int main(){
    int a,b = 0;
    while(1){
        printf("ingresa un numero: \n");
        scanf("%d", &a);
        if(a == -1){
           printf("tu programa ha finalizado:");
           break;
        }if(a % 3 == 0){
           b++;
        }
    }
    printf("se encontras los multiplos: %d \n", b);
    return 0;
}
