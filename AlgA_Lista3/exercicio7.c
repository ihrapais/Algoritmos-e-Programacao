// Nome: Anderson Schieck Lopes
// Exercício 7: Potências

#include <stdio.h>
#include <math.h> // Necessário para pow()

int main() {
    double base, resultado; // pow() geralmente usa double
    int exp_inicio, exp_fim, i, temp;

    printf("Digite a base: ");
    scanf("%lf", &base); // %lf para ler double
    printf("Digite o expoente inicial: ");
    scanf("%d", &exp_inicio);
    printf("Digite o expoente final: ");
    scanf("%d", &exp_fim);

     // Garante que exp_inicio seja menor que exp_fim
    if (exp_inicio > exp_fim) {
        temp = exp_inicio;
        exp_inicio = exp_fim;
        exp_fim = temp;
    }

    printf("\nPotencias de %.2lf entre expoentes %d e %d:\n", base, exp_inicio, exp_fim);

    // Loop 'for' para iterar nos expoentes
    for (i = exp_inicio; i <= exp_fim; i++) {
        resultado = pow(base, i); // Calcula a potência
        printf("%.2lf ^ %d = %.4lf\n", base, i, resultado);
    }

    return 0;
}
