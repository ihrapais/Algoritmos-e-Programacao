// Nome: Anderson Schieck Lopes
// Exerc�cio 3: Pot�ncia de um n�mero

#include <stdio.h>

int main() {
    int base, expoente, resultado = 1, i;
    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);
    for (i = 0; i < expoente; i++) {
        resultado *= base;
    }
    printf("%d elevado a %d eh %d\n", base, expoente, resultado);
    return 0;
}
