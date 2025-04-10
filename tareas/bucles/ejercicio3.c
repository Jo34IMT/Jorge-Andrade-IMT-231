#include <stdio.h>

int main(void) {
    int x = 0;
    printf("bienvenido a la tabla de multiplicar: ");
    printf("Ingresa un numero: ");
    scanf("%d", &x);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", x, i, x * i);
    }

    return 0;
}
