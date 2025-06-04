#include <stdio.h>

int main() {
    float nota[5][3];
    int i, j, n;

    // Leitura da matriz
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 3; j++) {
            printf("Nota[%d][%d]: ", i, j);
            scanf("%f", &nota[i][j]);
        }
    }

    // Exibição da matriz
    printf("\nMatriz de notas:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 3; j++) {
            printf("%.1f\t", nota[i][j]);
        }
        printf("\n");
    }

    // Exercício B: Mostrar as notas de um aluno específico
    printf("\nInsira o número do aluno (1 a 5): ");
    scanf("%d", &n);

    if(n >= 1 && n <= 5) {
        printf("Notas do aluno %d:\n", n);
        for(j = 0; j < 3; j++) {
            printf("Nota %d: %.1f\n", j + 1, nota[n - 1][j]);
        }
    } else {
        printf("Número de aluno inválido.\n");
    }

    return 0;
}
