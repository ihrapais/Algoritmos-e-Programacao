// Nome: Anderson Schieck Lopes
// Exercício 4: Contar pares e ímpares até zero

#include <stdio.h>

int main() {
    int num;
    int cont_pares = 0;
    int cont_impares = 0;

    printf("Digite numeros (0 para parar):\n");
    scanf("%d", &num);

    while (num != 0) {
        if (num % 2 == 0) {
            cont_pares = cont_pares + 1;
        } else {
            cont_impares = cont_impares + 1;
        }
        printf("Digite proximo numero (0 para parar): ");
        scanf("%d", &num); //
    }

    printf("\nQuantidade de pares: %d\n", cont_pares);
    printf("Quantidade de impares: %d\n", cont_impares);

    return 0;
}
