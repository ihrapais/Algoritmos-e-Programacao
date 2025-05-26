// Exercício 3: Mega-Sena
#include <stdio.h>
#include <stdlib.h> //é necessário porque a função rand() pertence à biblioteca stdlib.h
#include <time.h> //Comando adicionado para evitar repetições no sorteio

int main() {
    int aposta[6], sorteio[6], i, j, acertos = 0;

    printf("Digite sua aposta da Mega-Sena (6 numeros de 1 a 60):\n");
    for(i = 0; i < 6; i++) {
        scanf("%d", &aposta[i]);
    }

    srand(time(NULL)); //Comando adicionado para evitar repetições no sorteio
    printf("\nNumeros sorteados: ");
    for(i = 0; i < 6; i++) {
        sorteio[i] = rand() % 60 + 1;
        printf("%d ", sorteio[i]);
    }

    for(i = 0; i < 6; i++) {
        for(j = 0; j < 6; j++) {
            if(aposta[i] == sorteio[j]) {
                acertos++;
                break;
            }
        }
    }

    printf("\nQuantidade de acertos: %d\n", acertos);
    return 0;
}
