#include <stdio.h>

int main() {
    int op1, op2, resultado;
    char operacao;

    printf("Digite o primeiro operando: ");
    scanf("%d", &op1);
    printf("Digite a operacao (+, -, *, /): ");
    fflush(stdin);
    scanf("%c", &operacao);
    printf("Digite o segundo operando: ");
    scanf("%d", &op2);

    switch (operacao) {
        case '+':
            resultado = op1 + op2;
            printf("%d + %d = %d\n", op1, op2, resultado);
            break;
        case '-':
            resultado = op1 - op2;
            printf("%d - %d = %d\n", op1, op2, resultado);
            break;
        case '*':
            resultado = op1 * op2;
            printf("%d * %d = %d\n", op1, op2, resultado);
            break;
        case '/':
            if (op2 != 0) {
                resultado = op1 / op2;
                printf("%d / %d = %d\n", op1, op2, resultado);
            } else {
                printf("Erro: Divisao por zero!\n");
            }
            break;
        default:
            printf("Operacao invalida!\n");
            break;
    }

    return 0;
}
