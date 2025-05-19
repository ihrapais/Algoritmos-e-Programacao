//7. Faça um algoritmo que leia 2 vetores A e B, de ordem 8, e calcule o produto escalar do
//vetor. O produto escalar é obtido da seguinte forma:

#include <stdio.h>

int main() {
    int a[8], b[8], i, produto = 0;

    printf("Informe 8 valores para o vetor A:\n");
    for(i = 0; i < 8; i++) {
        printf("A[%d] = ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Informe 8 valores para o vetor B:\n");
    for(i = 0; i < 8; i++) {
        printf("B[%d] = ", i + 1);
        scanf("%d", &b[i]);
    }

    for(i = 0; i < 8; i++)
        produto += a[i] * b[i];

    printf("\nProduto escalar = %d\n", produto);

    return 0;
}
