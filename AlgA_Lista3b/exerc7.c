// Nome: Anderson Schieck Lopes
// Exercício 7: Maior e menor número entre n lidos

#include <stdio.h>

int main() {
    int n, numero, maior, menor, i;
    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);
    printf("Digite o 1o numero: ");
    scanf("%d", &numero);
    maior = menor = numero;
    for (i = 2; i <= n; i++) {
        printf("Digite o %do numero: ", i);
        scanf("%d", &numero);
        if (numero > maior) maior = numero;
        if (numero < menor) menor = numero;
    }
    printf("Maior: %d\nMenor: %d\n", maior, menor);
    return 0;
}
