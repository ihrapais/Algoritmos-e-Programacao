//b) Gerar uma matriz 10x10 e mostrar na tela. Depois, mostrar uma linha escolhida pelo usuário

#include <stdio.h>

int main() {
    int matriz[10][10];
    int i, j, linha;

    // Gerando e exibindo a matriz
    printf("Matriz 10x10:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            matriz[i][j] = i * 10 + j;  // Apenas exemplo de preenchimento
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Solicita a linha desejada
    printf("Digite o numero da linha (0 a 9): ");
    scanf("%d", &linha);

    if (linha >= 0 && linha < 10) {
        printf("Linha %d da matriz:\n", linha);
        for (j = 0; j < 10; j++) {
            printf("%d ", matriz[linha][j]);
        }
        printf("\n");
    } else {
        printf("Linha invalida!\n");
    }

    return 0;
}
