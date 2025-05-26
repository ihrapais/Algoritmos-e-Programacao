//8. Fa�a um algoritmo que leia um vetor V de 10 posi��es e, ap�s, verifica se um n�mero N,
//fornecido pelo usu�rio, existe no vetor. Se existir, indicar a(s) posi��o(�es), sen�o escrever
//a mensagem "O n�mero fornecido n�o existe no vetor!".

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
