// Nome: Anderson Schieck Lopes
// Exercício 3: Soma até zero

#include <stdio.h>

int main() {
    int num;
    int soma = 0;

    printf("Digite numeros para somar (0 para parar):\n");
    scanf("%d", &num);

    while (num != 0) {
        soma = soma + num;
        printf("Digite proximo numero (0 para parar): ");
        scanf("%d", &num);
    }

    printf("\nA soma total eh: %d\n", soma);

    return 0;
}
