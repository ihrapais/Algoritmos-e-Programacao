// Nome: Anderson Schieck Lopes
// Exercício 1: Tabuada dos números de 1 a 10

#include <stdio.h>

int main() {
    int numero, i;
    for (numero = 1; numero <= 10; numero++) {
        printf("\nTabuada do %d:\n", numero);
        for (i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", numero, i, numero * i);
        }
    }
    return 0;
}
