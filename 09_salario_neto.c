#include <stdio.h>
int main(void) {
    float bruto, porcentaje, neto;
    printf("Ingrese el salario bruto: ");
    if (scanf("%f", &bruto) != 1) return 1;
    printf("Ingrese el porcentaje de descuento: ");
    if (scanf("%f", &porcentaje) != 1) return 1;
    if (bruto < 0 || porcentaje < 0 || porcentaje > 100) {
        printf("Datos no validos.\n");
        return 1;
    }
    neto = bruto - bruto * porcentaje / 100;
    printf("Salario neto: $%.2f\n", neto);
    return 0;
}
