//13. Escreva um algoritmo que leia um vetor de 15 elementos inteiros. Ordene o vetor em ordem decrescente e exiba-o.

#include <stdio.h>

int main() {
    int v[15], i, j, temp;

    printf("Informe 15 valores inteiros:\n");
    for(i = 0; i < 15; i++) {
        printf("v[%d] = ", i + 1);
        scanf("%d", &v[i]);
    }

    for(i = 0; i < 14; i++) {
        for(j = i + 1; j < 15; j++) {
            if(v[i] < v[j]) {
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }

    printf("\nVetor em ordem decrescente:\n");
    for(i = 0; i < 15; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}
