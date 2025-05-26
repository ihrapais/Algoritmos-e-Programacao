// Exercício 2: Matrículas de alunos
#include <stdio.h>

int main() {
    int matriculas[30], i, codigo;

    printf("Cadastro de 30 matriculas:\n");
    for(i = 0; i < 30; i++) {
        printf("Matricula %d: ", i + 1);
        scanf("%d", &matriculas[i]);
    }

    printf("\nDigite um codigo de operacao (0 = sair, 1 = normal, 2 = inversa, 3 = indices pares): ");
    scanf("%d", &codigo);

    if(codigo == 0) return 0;
    else if(codigo == 1) {
        printf("\nMatriculas na ordem normal:\n");
        for(i = 0; i < 30; i++) printf("%d ", matriculas[i]);
    } else if(codigo == 2) {
        printf("\nMatriculas na ordem inversa:\n");
        for(i = 29; i >= 0; i--) printf("%d ", matriculas[i]);
    } else if(codigo == 3) {
        printf("\nMatriculas nos indices pares:\n");
        for(i = 0; i < 30; i += 2) printf("%d ", matriculas[i]);
    } else {
        printf("Codigo invalido.\n");
    }
    printf("\n");
    return 0;
}
