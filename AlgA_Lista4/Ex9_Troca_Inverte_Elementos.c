//9. Escreva um algoritmo que leia um vetor de 20 posições e mostre-o. Em seguida,
//troque o primeiro elemento com o último, o segundo com o penúltimo, o terceiro com o
//antepenúltimo e assim sucessivamente. Mostre o novo vetor depois da troca.

#include <stdio.h>

int main() {
    int v[20], i, temp;

    printf("Informe 20 valores inteiros:\n");
    for(i = 0; i < 20; i++) {
        printf("v[%d] = ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\nVetor original:\n");
    for(i = 0; i < 20; i++) {
        printf("%d ", v[i]);
    }

    for(i = 0; i < 10; i++) {
        temp = v[i];
        v[i] = v[19 - i];
        v[19 - i] = temp;
    }

    printf("\nVetor apos a troca:\n");
    for(i = 0; i < 20; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}
