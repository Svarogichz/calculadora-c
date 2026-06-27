#include <stdio.h>

void suma();
float resta(float,float);
void multiplicacion();
float divsion(float,float);

int main() {
    int opcion;
    float a, b, resultado;

    do {
        printf("\nMenu de Operaciones\n");
        printf("1.- Suma\n");
        printf("2.- Resta\n");
        printf("3.- Multiplicacion\n");
        printf("4.- Division\n");
        printf("5.- Salir\n");
        printf("Selecciona una opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                suma();
                break;

            case 2:
                printf("Ingresa el primer numero: ");
                scanf("%f", &a);

                printf("Ingresa el segundo numero: ");
                scanf("%f", &b);

                resultado = resta(a, b);
                printf("Resultado: %.2f\n", resultado);
                break;

            case 3:
                multiplicacion();
                break;

            case 4:
                printf("Ingresa el primer numero: ");
                scanf("%f", &a);

                printf("Ingresa el segundo numero: ");
                scanf("%f", &b);

                if(b == 0) {
                    printf("Error: No se puede dividir entre cero.\n");
                } else {
                    resultado = divsion(a, b);
                    printf("Resultado: %.2f\n", resultado);
                }
                break;

            case 5:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opcion no valida.\n");
        }

    } while(opcion != 5);

    return 0;
}

void suma() {
    float a, b, resultado;

    printf("Ingresa el primer numero: ");
    scanf("%f", &a);

    printf("Ingresa el segundo numero: ");
    scanf("%f", &b);

    resultado = a + b;

    printf("Resultado: %.2f\n", resultado);
}

float resta(float a, float b) {
    return a - b;
}

void multiplicacion() {
    float a, b, resultado;

    printf("Ingresa el primer numero: ");
    scanf("%f", &a);

    printf("Ingresa el segundo numero: ");
    scanf("%f", &b);

    resultado = a * b;

    printf("Resultado: %.2f\n", resultado);
}

float divsion(float a, float b) {
    return a / b;
}