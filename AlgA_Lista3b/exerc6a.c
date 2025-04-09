// Nome: Anderson Schieck Lopes
// Exercício 6a: Função y = 4x + 3 com x de -7 a 15

#include <stdio.h>

int main() {
    int x, y;
    for (x = -7; x <= 15; x++) {
        y = 4 * x + 3;
        printf("x = %d, y = %d\n", x, y);
    }
    return 0;
}
