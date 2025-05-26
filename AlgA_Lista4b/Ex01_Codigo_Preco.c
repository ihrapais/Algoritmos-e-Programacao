// Exercício 1: Código e preço dos produtos
#include <stdio.h>

int main() {
    int codigos[50], i, cod;
    float precos[50];

    printf("Cadastro de 50 produtos:\n");
    for(i = 0; i < 50; i++) {
        printf("Codigo do produto %d: ", i + 1);
        scanf("%d", &codigos[i]);
        printf("Preco do produto %d: ", i + 1);
        scanf("%f", &precos[i]);
    }

    printf("\nDigite o codigo do produto para consultar: ");
    scanf("%d", &cod);

    int encontrado = 0;
    for(i = 0; i < 50; i++) {
        if(codigos[i] == cod) {
            printf("Preco do produto: R$ %.2f\n", precos[i]);
            encontrado = 1;
            break;
        }
    }
    if(!encontrado) {
        printf("Codigo nao encontrado.\n");
    }
    return 0;
}
