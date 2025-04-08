#include <stdio.h>

int main(void) {
    int n = 0;
    printf("ingresa un numero \n");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
         printf("%d ",i);
    }
    return 0;
}
