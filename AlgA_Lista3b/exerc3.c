// Nome: Anderson Schieck Lopes
// Exercício 3: Potência de um número

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
