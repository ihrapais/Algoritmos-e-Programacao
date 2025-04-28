#include <stdio.h>
#include <stdlib.h>
#include <time.h>




int** criaTabuleiro(){
    int **tabuleiro;
    int i,j;

    tabuleiro = (int**) malloc (6 * sizeof(int*));
    for(i=0; i<6; i++){
        tabuleiro[i] = (int*) malloc (6 * sizeof(int));
    }

    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            tabuleiro[i][j] = 0 ;
        }
    }
    return tabuleiro;
}


void mostrarTabuleiro(int **tabuleiro){
	int i, j;
	for(i = 0; i<1; i++){
		printf(" ");
		for (i = 0; i<6; i++){
			printf(" %d", i);
		}
	}
	printf("\n");
	for (i = 0; i < 6; i++){
		printf("%d ",i);
		for(j = 0; j < 6; j++){
			printf("%d ", tabuleiro[i][j]);
		}
		printf("\n");
	}
}


int sorteia(){
   return rand() % 6 + 1;
}

void atualizaTabuleiro(int **tab, int l, int c, int num){
	tab[l][c] = num;
}


int main(){

	int **tabuleiro;
	tabuleiro = criaTabuleiro();
	
	int linha, coluna;
	srand(time(NULL));
	mostrarTabuleiro(tabuleiro);
	int numSorteado = sorteia();
	printf("Numero sorteado foi: %d , onde deseja coloca-lo?\n", numSorteado);
	printf("linha: ");
	scanf("%d",&linha);
	printf("coluna: ");
	scanf("%d",&coluna);

	atualizaTabuleiro(tabuleiro, linha, coluna, numSorteado);
	mostrarTabuleiro(tabuleiro);
}


