//6. Escreva um programa que leia valores em um vetor de 5 posições. Escrever os elementos
//do vetor e após escrever os elementos na ordem inversa.

#include <stdio.h>

int main() {
    int v[5], i;

    printf("Informe 5 numeros inteiros:\n");
    for(i = 0; i < 5; i++) {
        printf("v[%d] = ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\nOrdem normal:\n");
    for(i = 0; i < 5; i++)
        printf("v[%d] = %d\n", i + 1, v[i]);

    printf("\nOrdem inversa:\n");
    for(i = 4; i >= 0; i--)
        printf("v[%d] = %d\n", i + 1, v[i]);

    return 0;
}
