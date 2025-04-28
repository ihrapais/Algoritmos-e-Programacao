#include <stdio.h>

int main() {
    float salario, aliquota, valor_ir;

    printf("Digite o salario mensal (em R$): ");
    scanf("%f", &salario);

    if (salario <= 1566.61) {
        aliquota = 0.0;
    } else if (salario <= 2347.85) {
        aliquota = 7.5;
    } else if (salario <= 3130.51) {
        aliquota = 15.0;
    } else if (salario <= 3911.63) {
        aliquota = 22.5;
    } else {
        aliquota = 27.5;
    }

    valor_ir = salario * (aliquota / 100);

    printf("Salario mensal: R$ %.2f\n", salario);
    printf("Aliquota IR: %.1f%%\n", aliquota);
    printf("Valor do IR: R$ %.2f\n", valor_ir);

    return 0;
}
