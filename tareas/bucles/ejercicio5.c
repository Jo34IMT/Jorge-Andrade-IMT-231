#include <stdio.h>
#include <string.h>

int main() {
    char p [100];
    int l;

    printf("Hola, ingresa una palabra: ");
    scanf("%s", p);

    l = 0;
    while (p[l] != '\0') {
        l++;
    }

    printf("Tu palabra invertida es : ");
    for (int i = l - 1; i >= 0; i--) {
        printf("%c", p[i]);
    }

    printf("\n");
    return 0;
}
