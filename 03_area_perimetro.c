#include <stdio.h>
#define PI 3.14159
int main() {
    float radio, area, perimetro;
    printf("Ingrese el radio del circulo: ");
    scanf("%f", &radio);
    area = PI * radio * radio;
    perimetro = 2 * PI * radio;
    printf("Area: %.2f\n", area);
    printf("Perimetro: %.2f\n", perimetro);
    return 0;
}
