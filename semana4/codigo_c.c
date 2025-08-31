#include <stdio.h>
#include <math.h>

#define MAXI 1000  // Máximo número de iteraciones

// Función para calcular el factorial
double factorial(int n) {
    double resultado = 1.0;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int opcion, n, max;
    double x, h, termino, suma, error, epsilon;

    suma = 0.0;
    n = 0;

    printf("Seleccione la funcion que desee ejecutar:\n");
    printf("1. e^x\n");
    printf("2. sen(x)\n");
    printf("3. cos(x)\n");
    printf("4. ln(1 + x)\n");
    printf("5. arctan(x)\n");
    scanf("%d", &opcion);

    printf("Ingrese el valor de x: ");
    scanf("%lf", &x);

    printf("Ingrese h (expansion alrededor de a, normalmente a=0): ");
    scanf("%lf", &h);

    printf("Ingrese el error maximo permitido (epsilon): ");
    scanf("%lf", &epsilon);

    do {
        switch (opcion) {
            case 1: // e^x
                termino = pow(x - h, n) / factorial(n);
                break;

            case 2: // sen(x)
                termino = pow(-1, n) * pow(x - h, 2*n + 1) / factorial(2*n + 1);
                break;

            case 3: // cos(x)
                termino = pow(-1, n) * pow(x - h, 2*n) / factorial(2*n);
                break;

            case 4: // ln(1 + x)
                if (n == 0)
                    termino = 0;
                else
                    termino = pow(-1, n + 1) * pow(x - h, n) / n;
                break;

            case 5: // arctan(x)
                termino = pow(-1, n) * pow(x - h, 2*n + 1) / (2*n + 1);
                break;

            default:
                printf("Opcion invalida.\n");
                return 1;
        }

        suma += termino;
        error = fabs(termino);  // el error se estima con el ultimo termino
        n++;

    } while (error > epsilon && n < MAXI);

    printf("\nResultado de la aproximacion de la funcion: %lf\n", suma);
    printf("Numero de terminos utilizados: %d\n", n);
    printf("Error final estimado: %lf\n", error);

    return 0;
}
