// Nome: Anderson Schieck Lopes
// Exercício 1: Pares no intervalo (Simples)

#include <stdio.h>

int main() {
    int num1, num2, i, temp;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("\nNumeros pares entre %d e %d:\n", num1, num2);

    for (i = num1; i <= num2; i++) {
        // Verifica se 'i' é par
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
