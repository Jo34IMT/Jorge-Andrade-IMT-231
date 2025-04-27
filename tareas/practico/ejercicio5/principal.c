#include <stdio.h>
#include "funciones.h"
int main(){
    int opcion;
    while(1){
        printf("bienvenido al menu de operaciones: \n");
        printf("Menú:\n");
        printf("1. Sumar dos números\n");
        printf("2. Restar dos números\n");
        printf("3. Multiplicar dos números\n");
        printf("4. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                sumar();  // Llamada a la función para sumar
                break;
            case 2:
                restar();  // Llamada a la función para restar
                break;
            case 3:
                multiplicar();  // Llamada a la función para multiplicar
                break;
            case 4:
                printf("Gracias por usar el programa. ¡Hasta luego!\n");
                return 0;  // Salir del programa
            default:
                printf("Opción no válida. Por favor, elija una opción válida.\n");
        }
    }

    return 0;
}
