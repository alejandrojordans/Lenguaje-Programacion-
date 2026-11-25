#include <stdio.h>
int main() {
    int n, i = 1;
    float num, suma = 0, promedio;
    printf("Cuantos numeros desea ingresar? ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Cantidad no valida.\n");
        return 1;
    }
    while (i <= n) {
        printf("Numero %d: ", i);
        scanf("%f", &num);
        suma += num;
        i++;
    }
    promedio = suma / n;
    printf("Suma total: %.2f\n", suma);
    printf("Promedio: %.2f\n", promedio);
    return 0;
}
