//5. Escreva um algoritmo que leia um vetor inteiro de 20 posições. Crie um segundo vetor,
//substituindo os valores nulos por 2. Mostre os vetor lido e o vetor resultado.

#include <stdio.h>

int main() {
    int v1[20], v2[20], i;

    printf("Informe 20 numeros inteiros:\n");
    for(i = 0; i < 20; i++) {
        printf("v1[%d] = ", i + 1);
        scanf("%d", &v1[i]);
        if(v1[i] == 0)
            v2[i] = 2;
        else
            v2[i] = v1[i];
    }

    printf("\nVetor original lido:\n");
    for(i = 0; i < 20; i++)
        printf("v1[%d] = %d\n", i + 1, v1[i]);

    printf("\nVetor resultado com substituicoes:\n");
    for(i = 0; i < 20; i++)
        printf("v2[%d] = %d\n", i + 1, v2[i]);

    return 0;
}
