// Nome: Anderson Schieck Lopes
// Exercício 2: Somatório no intervalo

#include <stdio.h>

int main() {
    int num1, num2, temp;
    int soma = 0;
    int contador;

    printf("Digite o primeiro numero do intervalo: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero do intervalo: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    contador = num1;

    while (contador <= num2) {
        soma = soma + contador;

        contador = contador + 1;
    }

    printf("\nO somatorio entre %d e %d eh: %d\n", num1, num2, soma);

    return 0;
}
