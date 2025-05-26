//8. Faça um algoritmo que leia um vetor V de 10 posições e, após, verifica se um número N,
//fornecido pelo usuário, existe no vetor. Se existir, indicar a(s) posição(ões), senão escrever
//a mensagem "O número fornecido não existe no vetor!".

#include <stdio.h>

int main() {
    int v[10], i, n, encontrado = 0;

    printf("Informe 10 valores inteiros:\n");
    for(i = 0; i < 10; i++) {
        printf("v[%d] = ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\nInforme o numero a ser procurado: ");
    scanf("%d", &n);

    for(i = 0; i < 10; i++) {
        if(v[i] == n) {
            printf("Numero encontrado na posicao %d\n", i + 1);
            encontrado = 1;
        }
    }

    if(!encontrado) {
        printf("O numero fornecido nao existe no vetor!\n");
    }

    return 0;
}
