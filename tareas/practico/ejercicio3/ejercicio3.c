#include <stdio.h>

typedef enum { ROJO, VERDE, AMARILLO } Semaforo;

int main() {
    Semaforo estado = ROJO; // El estado inicial es ROJO
    int ciclos = 0; // Variable para contar los ciclos

    while (ciclos < 10) { // El programa termina después de 10 ciclos
        switch (estado) {
            case ROJO:
                printf("El semáforo está en ROJO.\n");
                estado = VERDE; // Cambiar al siguiente estado
                break;
            case VERDE:
                printf("El semáforo está en VERDE.\n");
                estado = AMARILLO; // Cambiar al siguiente estado
                break;
            case AMARILLO:
                printf("El semáforo está en AMARILLO.\n");
                estado = ROJO; // Cambiar al siguiente estado
                break;
        }
        ciclos++; // Incrementar el contador de ciclos
    }

    printf("Programa terminado después de 10 ciclos.\n");
    return 0;
}
