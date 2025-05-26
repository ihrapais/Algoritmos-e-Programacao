//12. Escreva um algoritmo que leia 2 vetores X(10) e Y(10) e os escreva.
//Crie, a seguir, um vetor para cada uma das operações:
//• A união de X com Y
//• A diferença entre X e Y
//• A interseção entre X e Y
//Escreva os vetores resultado de cada operação.

#include <stdio.h>

int main() {
    int x[10], y[10], uniao[20], inter[10], dif[10];
    int i, j, k = 0, l = 0, m = 0;

    printf("Informe 10 valores para o vetor X:\n");
    for(i = 0; i < 10; i++) {
        printf("X[%d] = ", i + 1);
        scanf("%d", &x[i]);
    }

    printf("Informe 10 valores para o vetor Y:\n");
    for(i = 0; i < 10; i++) {
        printf("Y[%d] = ", i + 1);
        scanf("%d", &y[i]);
    }

    // União
    for(i = 0; i < 10; i++) uniao[k++] = x[i];
    for(i = 0; i < 10; i++) {
        int existe = 0;
        for(j = 0; j < 10; j++) {
            if(y[i] == x[j]) {
                existe = 1;
                break;
            }
        }
        if(!existe) uniao[k++] = y[i];
    }

    // Interseção
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            if(x[i] == y[j]) {
                inter[l++] = x[i];
                break;
            }
        }
    }

    // Diferença (X - Y)
    for(i = 0; i < 10; i++) {
        int existe = 0;
        for(j = 0; j < 10; j++) {
            if(x[i] == y[j]) {
                existe = 1;
                break;
            }
        }
        if(!existe) dif[m++] = x[i];
    }

    printf("\nUniao: ");
    for(i = 0; i < k; i++) printf("%d ", uniao[i]);

    printf("\nIntersecao: ");
    for(i = 0; i < l; i++) printf("%d ", inter[i]);

    printf("\nDiferenca (X - Y): ");
    for(i = 0; i < m; i++) printf("%d ", dif[i]);

    printf("\n");
    return 0;
}
