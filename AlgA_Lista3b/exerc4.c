// Nome: Anderson Schieck Lopes
// Exercício 4: Números de 4 dígitos com propriedade especial

#include <stdio.h>

int main() {
    int numero, parte1, parte2, soma;
    for (numero = 1000; numero <= 9999; numero++) {
        parte1 = numero / 100;
        parte2 = numero % 100;
        soma = parte1 + parte2;
        if (soma * soma == numero) {
            printf("%d\n", numero);
        }
    }
    return 0;
}
