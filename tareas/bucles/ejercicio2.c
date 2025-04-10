#include <stdio.h>

int main(void) {
    int n = 0, suma = 0;
    printf("ingresa un numero \n");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
         suma += i; 
         
    }
    printf("la suma de los numeros es %d \n", suma);
    return 0;
}

