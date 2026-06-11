#include <stdio.h>

void suma();
void resta();

int main() {
    printf("Calculadora sencilla\n");

    suma();
    resta();

    return 0;
}

void suma() {
    float a, b;
    printf("Ingresa dos numeros para sumar: ");
    scanf("%f %f", &a, &b);
    printf("Resultado suma: %.2f\n", a + b);
}

void resta() {
    float a, b;
    printf("Ingresa dos numeros para restar: ");
    scanf("%f %f", &a, &b);
    printf("Resultado resta: %.2f\n", a - b);
}
