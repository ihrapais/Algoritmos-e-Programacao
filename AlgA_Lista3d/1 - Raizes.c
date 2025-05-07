#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;

    do {
        printf("Digite os coeficientes a, b e c (ou 0 0 0 para sair): ");
        scanf("%f %f %f", &a, &b, &c);

        if (a == 0 && b == 0 && c == 0) {
            break;
        }

        if (a == 0) {
            printf("A equacao e de primeiro grau.\n");
        } else {
            delta = b * b - 4 * a * c;

            if (delta < 0) {
                printf("Nao foi possivel calcular as raizes (Delta negativo - raizes imaginarias).\n");
            } else {
                x1 = (-b + sqrt(delta)) / (2 * a);
                x2 = (-b - sqrt(delta)) / (2 * a);
                printf("As raizes sao: x1 = %.2f e x2 = %.2f\n", x1, x2);
            }
        }
    } while (1);

    return 0;
}
