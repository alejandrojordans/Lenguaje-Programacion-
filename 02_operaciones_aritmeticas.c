#include <stdio.h>
int main() {
    int a, b;
    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);
    printf("Suma: %d\n", a + b);
    printf("Resta: %d\n", a - b);
    printf("Multiplicacion: %d\n", a * b);
    if (b != 0) {
        printf("Division: %.2f\n", (float)a / b);
        printf("Modulo: %d\n", a % b);
    } else {
        printf("No se puede dividir entre cero.\n");
    }
    return 0;
}
