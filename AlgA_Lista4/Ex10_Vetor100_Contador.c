//10. Escreva um algoritmo para ler um vetor de inteiros e positivos e imprimir quantas vezes aparecem os números 2, 4 e 8.
//O vetor terá no máximo 100 posições. Saia do programa quando for digitado -1 ou quando atingir o máximo de posições do vetor.

#include <stdio.h>

int main() {
    int v[100], i = 0, num;
    int cont2 = 0, cont4 = 0, cont8 = 0;

    printf("Digite valores positivos (ate 100). Use -1 para parar:\n");

    while(i < 100) {
        printf("v[%d] = ", i + 1);
        scanf("%d", &num);

        if(num == -1)
            break;
        if(num < 0)
            continue;

        v[i] = num;

        if(num == 2) cont2++;
        if(num == 4) cont4++;
        if(num == 8) cont8++;

        i++;
    }

    printf("\nQuantidade de 2: %d\n", cont2);
    printf("Quantidade de 4: %d\n", cont4);
    printf("Quantidade de 8: %d\n", cont8);

    return 0;
}
