#include <stdio.h>
int main(void) {
    int numero;
    printf("Ingrese un numero entero: ");
    if (scanf("%d", &numero) != 1) return 1;
    if (numero % 2 == 0)
        printf("El numero es par.\n");
    else
        printf("El numero es impar.\n");
    return 0;
}
