// Nome: Anderson Schieck Lopes
// Exercício 8: Média de Salários

#include <stdio.h>

int main() {

    float salario, soma_salarios = 0.0, media;
    int i;
    int num_funcionarios = 10;

    printf("Digite o salario dos %d funcionarios:\n", num_funcionarios);

    for (i = 1; i <= num_funcionarios; i++) {
        printf("Salario funcionario %d: R$ ", i);
        scanf("%f", &salario);
        soma_salarios = soma_salarios + salario;
    }

    media = soma_salarios / num_funcionarios;

    printf("\nA media salarial eh: R$ %.2f\n", media);

    return 0;
}
