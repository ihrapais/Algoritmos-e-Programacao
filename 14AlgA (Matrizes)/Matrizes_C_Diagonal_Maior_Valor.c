//c) Gerar uma matriz 4x4 e mostrar sua diagonal principal

#include <stdio.h>
#include <stdlib.h>

int main() {
    //float matriz[4][4];
    int i, j, matriz[4][4];

    // Preenchendo a matriz
    //printf("Digite os elementos da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("\nElemento [%d][%d]: ", i, j);
            matriz[i][j] = rand()%50;
            printf("%d\t",matriz[i][j]);
                if(j==3)
                    printf("\n");
          //  scanf("%f", &matriz[i][j]);
        }
    }

    // Mostrando a diagonal principal
    printf("\nDiagonal principal:\n");
    for (i = 0; i < 4; i++) {
        printf("%d ", matriz[i][i]);
    }
    printf("\n");

    //Maior valor da matriz e a sua posição

    int x, linhaX, colunaX;

    x=matriz[0][0];
    for(i=0; i<4; i++)
        for(j=0; j<4; j++)
            if(matriz[i][j] > x){
                x=matriz[i][j];
                linhaX=i;
                colunaX=j;
            }
    printf("\nMaior Valor = %d\n", x);
    printf("Na Linha %d e Coluna %d\n", linhaX, colunaX);

    return 0;
}
