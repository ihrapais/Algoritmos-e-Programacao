// Nome: Anderson Schieck Lopes
// Exercício 5: Soma dos 50 primeiros elementos da série

#include <stdio.h>

int main() {
    float soma = 0.0;
    int i, numerador = 1000;
    for (i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            soma -= (float)numerador / i;
        } else {
            soma += (float)numerador / i;
        }
        numerador -= 3;
    }
    printf("A soma dos 50 primeiros termos eh %.2f\n", soma);
    return 0;
}
