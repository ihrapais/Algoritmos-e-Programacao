//11. Escreva um algoritmo que leia um c�digo num�rico inteiro e um vetor de 50 posi��es de
// n�meros. Se o c�digo for zero, termine o algoritmo. Se o c�digo for 1, mostre o vetor na
// ordem em que foi lido. Se o c�digo for 2, mostre o vetor na ordem inversa, do �ltimo elemento at� o primeiro.

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
