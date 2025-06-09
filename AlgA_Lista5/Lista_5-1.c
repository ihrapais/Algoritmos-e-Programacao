//Ler uma matriz informada pelo usuário, com tamanho 3 x 5. Mostrar seus elementos.

#include <stdio.h>
//#include <stdlib.h>

int main() {
    int i, j, matriz[3][5];

    // Preenchendo a matriz
    printf("Digite os elementos da matriz 3x5:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("\nElemento [%d][%d]: ", i+1, j+1);
            //matriz[i][j] = rand()%50;
            //printf("%d\t",matriz[i][j]);
                if(j==5)
                    printf("\n");
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i=0; i<3; i++){
        for (j=0; j<5; j++){
            printf("\n%d ", matriz[i][j]);
        }
    }

    // Mostrando a diagonal principal
    //printf("\nDiagonal principal:\n");
    //for (i = 0; i < 4; i++) {
    //   printf("%d ", matriz[i][i]);
    //}
    printf("\n");

    //Maior valor da matriz e a sua posição

    /*int x, linhaX, colunaX;

    x=matriz[0][0];
    for(i=0; i<4; i++)
        for(j=0; j<4; j++)
            if(matriz[i][j] > x){
                x=matriz[i][j];
                linhaX=i;
                colunaX=j;
            }
    printf("\nMaior Valor = %d\n", x);
    printf("Na Linha %d e Coluna %d\n", linhaX, colunaX);*/

    return 0;
}
