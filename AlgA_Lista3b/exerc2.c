// Nome: Anderson Schieck Lopes
// Exercício 2: Números ímpares maiores que o lido e menores que 1000

#include <stdio.h>

int main() {
    int numero, i;
    printf("Digite um numero menor que 1000: ");
    scanf("%d", &numero);
    if (numero >= 1000 || numero < 0) {
        printf("Numero invalido!\n");
    } else {
        for (i = numero + 1; i < 1000; i++) {
            if (i % 2 != 0) {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}
