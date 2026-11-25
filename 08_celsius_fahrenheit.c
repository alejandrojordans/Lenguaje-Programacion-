#include <stdio.h>
int main(void) {
    float celsius, fahrenheit;
    printf("Ingrese los grados Celsius: ");
    if (scanf("%f", &celsius) != 1) return 1;
    fahrenheit = celsius * 9.0f / 5.0f + 32;
    printf("Fahrenheit: %.2f\n", fahrenheit);
    return 0;
}
