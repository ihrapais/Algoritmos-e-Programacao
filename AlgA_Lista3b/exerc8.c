// Nome: Anderson Schieck Lopes
// Exercício 8: Múltiplos maiores que o número e menores que 1000

#include <stdio.h>

int main() {
    int numero, i, contador = 0;
    printf("Digite um numero natural: ");
    scanf("%d", &numero);
    if (numero <= 0) {
        printf("Numero invalido!\n");
    } else {
        for (i = numero + 1; i < 1000; i++) {
            if (i % numero == 0) {
                contador++;
            }
        }
        printf("Existem %d multiplos de %d maiores que ele e menores que 1000\n", contador, numero);
    }
    return 0;
}
