#include <stdio.h>

void suma();
float resta(float,float);
void multiplicacion();
float division(float,float);

int main() {
    printf("Calculadora sencilla\n");
    suma();
    printf("Resultado resta: %.2f\n", resta(10,5));
    return 0;
}
void suma() {
    float a, b;
    printf("Ingresa dos numeros para sumar: ");
    scanf("%f %f", &a, &b);
    printf("Resultado suma: %.2f\n", a + b);
}

float resta(float a, float b) {
    return a - b;
}