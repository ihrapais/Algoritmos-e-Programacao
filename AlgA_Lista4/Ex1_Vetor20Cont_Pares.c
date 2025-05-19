/*1. Escreva um algoritmo que leia e mostre um vetor de 20 elementos inteiros. A seguir,
conte quantos valores pares existem no vetor.*/

#include <stdio.h>

int main() {
    int v[20], i, pares = 0;

    printf("Informe 20 numeros inteiros:\n");
    for(i = 0; i < 20; i++) {
        printf("v[%d] = ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\nValores informados:\n");
    for(i = 0; i < 20; i++) {
        printf("v[%d] = %d\n", i + 1, v[i]);
        if(v[i] % 2 == 0)
            pares++;
    }

    printf("\nQuantidade de numeros pares: %d\n", pares);

    return 0;
}
