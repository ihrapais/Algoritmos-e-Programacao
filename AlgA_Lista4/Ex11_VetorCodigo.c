//11. Escreva um algoritmo que leia um código numérico inteiro e um vetor de 50 posições de
// números. Se o código for zero, termine o algoritmo. Se o código for 1, mostre o vetor na
// ordem em que foi lido. Se o código for 2, mostre o vetor na ordem inversa, do último elemento até o primeiro.

#include <stdio.h>

int main() {
    int v[50], i, codigo;

    printf("Digite o codigo (0 para sair, 1 para ordem normal, 2 para ordem inversa): ");
    scanf("%d", &codigo);

    if(codigo == 0) {
        return 0;
    }

    printf("Informe 50 numeros:\n");
    for(i = 0; i < 50; i++) {
        printf("v[%d] = ", i + 1);
        scanf("%d", &v[i]);
    }

    if(codigo == 1) {
        printf("\nVetor na ordem normal:\n");
        for(i = 0; i < 50; i++) {
            printf("%d ", v[i]);
        }
    } else if(codigo == 2) {
        printf("\nVetor na ordem inversa:\n");
        for(i = 49; i >= 0; i--) {
            printf("%d ", v[i]);
        }
    }

    printf("\n");
    return 0;
}
