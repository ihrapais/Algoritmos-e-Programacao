// Nome: Anderson Schieck Lopes
// Exercício 6: Progressão Aritmética

#include <stdio.h>

int main() {
    int primeiro_termo, razao, i, termo_atual;

    printf("Digite o primeiro termo da PA: ");
    scanf("%d", &primeiro_termo);
    printf("Digite a razao da PA: ");
    scanf("%d", &razao);

    printf("\nOs 10 elementos seguintes da PA sao:\n");

    termo_atual = primeiro_termo;

    for (i = 0; i < 10; i++) {
        termo_atual = termo_atual + razao;
        printf("%d ", termo_atual);
    }
    printf("\n");

    return 0;
}
