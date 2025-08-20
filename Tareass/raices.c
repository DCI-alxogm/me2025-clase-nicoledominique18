//Código que calcula valores de x1 y x2 usando la fórmula general                                #include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminante, x1, x2;

    printf("Ecuacion cuadratica: ax^2 + bx + c = 0\n");
    printf("Ingrese el valor de a: ");
    scanf("%lf", &a);
    printf("Ingrese el valor de b: ");
    scanf("%lf", &b);
    printf("Ingrese el valor de c: ");
    scanf("%lf", &c);

    // Calculamos el discriminante
    discriminante = b*b - 4*a*c;

    if (a == 0) {
        printf("Error: a no puede ser 0 (no es una cuadratica).\n");
    } else if (discriminante > 0) {
        // Dos soluciones reales distintas
        x1 = (-b + sqrt(discriminante)) / (2*a);
        x2 = (-b - sqrt(discriminante)) / (2*a);
        printf("Las soluciones reales son:\n");
        printf("x1 = %.4lf\n", x1);
        printf("x2 = %.4lf\n", x2);
    } else if (discriminante == 0) {
        // Una solución real (raíz doble)
        x1 = -b / (2*a);
        printf("La solucion real doble es:\n");
        printf("x1 = x2 = %.4lf\n", x1);
    } else {
        // Soluciones complejas
        double parteReal = -b / (2*a);
        double parteImaginaria = sqrt(-discriminante) / (2*a);
        printf("Las soluciones complejas son:\n");
        printf("x1 = %.4lf + %.4lfi\n", parteReal, parteImaginaria);
        printf("x2 = %.4lf - %.4lfi\n", parteReal, parteImaginaria);
    }

    return 0;
}
