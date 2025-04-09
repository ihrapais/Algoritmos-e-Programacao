// Nome: Anderson Schieck Lopes
// Exercício 6b: Função y = 4x + 3 com intervalo informado pelo usuário

#include <stdio.h>

int main() {
    int x, y, inicio, fim;
    printf("Digite o valor inicial de x: ");
    scanf("%d", &inicio);
    printf("Digite o valor final de x: ");
    scanf("%d", &fim);
    for (x = inicio; x <= fim; x++) {
        y = 4 * x + 3;
        printf("x = %d, y = %d\n", x, y);
    }
    return 0;
}
