// Nome: Anderson Schieck Lopes
// Exerc�cio 9: Pot�ncia sem usar pow

#include <stdio.h>

int main() {
    int a, b, resultado = 1, i;
    printf("Digite o valor de A (base): ");
    scanf("%d", &a);
    printf("Digite o valor de B (expoente): ");
    scanf("%d", &b);
    for (i = 0; i < b; i++) {
        resultado *= a;
    }
    printf("%d elevado a %d eh %d\n", a, b, resultado);
    return 0;
}
