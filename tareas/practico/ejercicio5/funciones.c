#include "funciones.h"
#include <stdio.h>
void sumar() {
    float num1, num2;
    printf("Ingrese el primer número: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);
    printf("La suma es: %.2f\n", num1 + num2);
}

// Función para restar dos números
void restar() {
    float num1, num2;
    printf("Ingrese el primer número: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);
    printf("La resta es: %.2f\n", num1 - num2);
}

// Función para multiplicar dos números
void multiplicar() {
    float num1, num2;
    printf("Ingrese el primer número: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);
    printf("La multiplicación es: %.2f\n", num1 * num2);
}
