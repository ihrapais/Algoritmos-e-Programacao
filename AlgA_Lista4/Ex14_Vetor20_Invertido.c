//14. Faça um programa em C que declare um vetor de 20 elementos inteiros, leia os conteúdos
//do vetor, e copie estes conteúdos para outro vetor, invertendo sua ordem. Assim, o valor
//do primeiro elemento do primeiro vetor deve ser o valor do último elemento do segundo
//vetor, por exemplo. Mostrar os conteúdos do primeiro vetor em uma linha e os do segundo uma linha abaixo.

#include <stdio.h>

int main() {
    int v1[20], v2[20], i;

    printf("Informe 20 numeros inteiros:\n");
    for(i = 0; i < 20; i++) {
        printf("v1[%d] = ", i + 1);
        scanf("%d", &v1[i]);
    }

    for(i = 0; i < 20; i++) {
        v2[i] = v1[19 - i];
    }

    printf("\nVetor original:\n");
    for(i = 0; i < 20; i++) printf("%d ", v1[i]);

    printf("\nVetor invertido:\n");
    for(i = 0; i < 20; i++) printf("%d ", v2[i]);

    printf("\n");
    return 0;
}
