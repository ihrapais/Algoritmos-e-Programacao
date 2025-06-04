//c) Gerar uma matriz 4x4 e mostrar sua diagonal principal

#include <stdio.h>

int main() {
    float matriz[4][4];
    int i, j;

    // Preenchendo a matriz
    printf("Digite os elementos da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    // Mostrando a diagonal principal
    printf("Diagonal principal:\n");
    for (i = 0; i < 4; i++) {
        printf("%.1f ", matriz[i][i]);
    }
    printf("\n");

    return 0;
}
