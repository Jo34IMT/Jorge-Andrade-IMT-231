#include <stdio.h>

int main(void) {
    int numero = 0; 
    int i  = 0;
    printf("Hola, ingresa un número entero: ");
    scanf("%d", &numero);

    if (numero == 0) {
        i = 1;
    } else {
        while (numero != 0) {
            numero /= 10;
            i++;
        }
    }

    printf("Tu numero tiene este numero de digitos: %d\n", i);
    return 0;
}
