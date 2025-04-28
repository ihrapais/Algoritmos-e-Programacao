//Anderson Schieck Lopes - 201721264
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado_l () //função para gerar um número aleatório de 1 a 6
{
  int dado_seis;
  dado_seis = (1+(rand() % 6));
  printf("\nVoce tirou %d no dado \n", dado_seis);
  return dado_seis;
}

void main () {
int tabuleiro[10]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, i, cont=0, pos, dado, j, continua=1;


do {
	dado =  dado_l();
	i++;
	printf("\n%d\n", i);
	for (j=0; j<10; j++)
	printf("\t [%d]: %d", j, tabuleiro[j]);
	printf("\n\nInforme a posição aonde deseja inserir o valor sorteado: ");
	scanf("%d", &pos);
	while ((pos < 0) || (pos >= 10) || (tabuleiro[pos] != 0)) {
		printf("Posição inválida. Reinforme a posição aonde deseja inserir o valor sorteado: ");
		scanf("%d", &pos);
	}


		tab[pos] = dado;
		if (tab[pos-1]!=0 && tab[pos-1] > dado){
			continua = 0 ;
			break;
		}
		else {
			continua = 1;
			cont++;
		}

} while (continua && (cont < 10));


if (continua)
printf("Você ganhou!\n");
else

printf("Posição final do tabuleiro:\n");
for (j=0; j<10; j++)
printf("\t[%d]: %d", j, tabuleiro[j]);
getch();
}

  // if ((tab[pos-2] > dado)||(tab[pos-cont]>dado)){//||(tab[pos-4] > dado)||(tab[pos-5] > dado)||(tab[pos-6] > dado)
        //|| (tab[pos-7] > dado)||(tab[pos-8]>dado)||(tab[pos-9] > dado)){
