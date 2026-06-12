#include <stdio.h>

void suma();
void resta();
void multiplicacion();
void division();

int main() {
    printf("Calculadora sencilla\n\n");

    suma();
    resta();
    multiplicacion();
    division();

    return 0;
}

void suma() {
    float a, b;
    printf("Ingresa dos numeros para sumar: ");
    scanf("%f %f", &a, &b);
    printf("Resultado suma: %.2f\n\n", a + b);
}

void resta() {
    float a, b;
    printf("Ingresa dos numeros para restar: ");
    scanf("%f %f", &a, &b);
    printf("Resultado resta: %.2f\n\n", a - b);
}

void multiplicacion() {
    float a, b;
    printf("Ingresa dos numeros para multiplicar: ");
    scanf("%f %f", &a, &b);
    printf("Resultado multiplicacion: %.2f\n\n", a * b);
}

void division() {
    float a, b;
    printf("Ingresa dos numeros para dividir: ");
    scanf("%f %f", &a, &b);

    if (b == 0) {
        printf("Error: no se puede dividir entre cero.\n\n");
        return;
    }

    printf("Resultado division: %.2f\n\n", a / b);
}