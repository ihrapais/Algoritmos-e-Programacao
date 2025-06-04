//a) Ler uma matriz 2x3, multiplicar seus elementos por um número informado pelo usuário e mostrar a matriz modificada

#include <stdio.h>

int main() {
    int matriz[2][3];
    int i, j, multiplicador;

    // Leitura da matriz
    printf("Digite os elementos da matriz 2x3:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Leitura do multiplicador
    printf("Digite um numero para multiplicar os elementos: ");
    scanf("%d", &multiplicador);

    // Multiplicando e mostrando a matriz modificada
    printf("Matriz modificada:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            matriz[i][j] *= multiplicador;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
