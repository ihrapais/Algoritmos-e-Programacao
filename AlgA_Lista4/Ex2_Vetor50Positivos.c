//2. Escreva um algoritmo que leia um vetor com 50 posições de números inteiros, mostre
//somente os positivos e por fim mostre a quantidade de números positivos no vetor.

#include <stdio.h>

int main() {
    int v[50], i, cont = 0;

    printf("Informe 50 numeros inteiros:\n");
    for(i = 0; i < 50; i++) {
        printf("v[%d] = ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\nNumeros positivos:\n");
    for(i = 0; i < 50; i++) {
        if(v[i] > 0) {
            printf("v[%d] = %d\n", i + 1, v[i]);
            cont++;
        }
    }

    printf("\nQuantidade de positivos: %d\n", cont);

    return 0;
}
