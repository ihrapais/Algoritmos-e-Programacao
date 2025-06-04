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

    // Exibi��o da matriz
    printf("\nMatriz de notas:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 3; j++) {
            printf("%.1f\t", nota[i][j]);
        }
        printf("\n");
    }

    // Exerc�cio B: Mostrar as notas de um aluno espec�fico
    printf("\nInsira o n�mero do aluno (1 a 5): ");
    scanf("%d", &n);

    if(n >= 1 && n <= 5) {
        printf("Notas do aluno %d:\n", n);
        for(j = 0; j < 3; j++) {
            printf("Nota %d: %.1f\n", j + 1, nota[n - 1][j]);
        }
    } else {
        printf("N�mero de aluno inv�lido.\n");
    }

    return 0;
}
