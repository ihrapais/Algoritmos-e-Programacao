//3. Escreva um algoritmo que leia dois vetores de 10 posições e faça a multiplicação dos
//elementos de mesmo índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante.

#include <stdio.h>

int main() {
    int a[10], b[10], c[10], i;

    printf("Informe 10 valores para o vetor A:\n");
    for(i = 0; i < 10; i++) {
        printf("A[%d] = ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Informe 10 valores para o vetor B:\n");
    for(i = 0; i < 10; i++) {
        printf("B[%d] = ", i + 1);
        scanf("%d", &b[i]);
    }

    printf("\nVetor C (produto dos mesmos indices):\n");
    for(i = 0; i < 10; i++) {
        c[i] = a[i] * b[i];
        printf("C[%d] = %d\n", i + 1, c[i]);
    }

    return 0;
}
