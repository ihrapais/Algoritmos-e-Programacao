// Nome: Anderson Schieck Lopes
// Exerc�cio 5: Fatorial

#include <stdio.h>

int main() {
    int n, i;
    int fatorial = 1;

    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Nao existe fatorial de numero negativo.\n");
    } else {
        // Loop 'for' para calcular o fatorial
        // Come�a em 2 porque multiplicar por 1 n�o muda o valor
        for (i = 2; i <= n; i++) {
            fatorial = fatorial * i;
        }
        printf("O fatorial de %d eh: %d\n", n, fatorial);
         // ATEN��O: Para n > 7 (aprox.), o resultado pode ficar incorreto!
    }

    return 0;
}
