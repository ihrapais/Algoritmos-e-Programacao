// Nome: Anderson Schieck Lopes
// Exerc�cio 4: N�meros de 4 d�gitos com propriedade especial

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
