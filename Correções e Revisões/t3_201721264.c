//Anderson Schieck Lopes - 201721264

//Trabalho 3 de Lab1 - Jogo do Dado com 1 vetor de 10 posições

//Bibliotecas necessárias
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado_l () //função para gerar um número aleatório de 1 a 6
{
  int dado_seis; //declaração de variável

  dado_seis = ((rand() % 6 +1)); //comando que gera o número randômico entre 1 e 6
  printf("\n\t\t\tVoce tirou %d no dado .. \n", dado_seis);
  return dado_seis;
}


void main () //Programa principal
{
  //Declaração de Variáveis
  int tab[10]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; //declaração do vetor e suas 10 posições zeradas
  int i=0, cont=0, pos, dado, j, continua=0; //Declaração das demais variáveis tipo inteiro
  srand((unsigned) time(NULL)); //Para o rand pegar um novo valor
  puts("\n\n\t\t\tJogo do tabuleiro Iniciado"); //Mensagem de Abertura do Game

  do
  {
    i++;
    printf("\n\n\n\tRodada %d\n\n", i); //Contador de Turnos
    dado =  dado_l(); //Variável dado recebe função randômica que vai simular a jogada do dado

    for (j=0; j<10; j++) //Laço de Repetição

    printf("\n\t[%d]: %d", j+1, tab[j]); //Impressão do Tabuleiro / Tabela

	printf("\n\n\tInforme a posicao onde este valor pode ser inserido: ");
	scanf("%d", &pos);

	while ((pos < 1) || (pos > 10) || (tab[pos-1] != 0) ) //Verificação da posição informada
    {
      printf("\n\n\tPosicao invalida \n\tReinforme a posicao que deseja inserir o valor jogado: ");
      scanf("%d", &pos);
    }

    tab[pos-1] = dado; //Leitura da Posição

    //Condições para Continuidade ou Não do Jogo
    if ((tab[pos-2]!=0 && tab[pos-2] > dado) || (tab[pos]!=0 && tab[pos]<dado))
    continua = 0 ;

    else
    {
      continua = 1;
      cont++;
    }
  } while (continua==1 && (cont < 10)); //Finalização do laço Do ~ While

  if (continua==1 && cont==10) //Caso o jogador venceu
  {
    puts("\n\n\n\t -- \t Parabens!! Voce ganhou!!! :-) \t --");
  }

  else //Caso o jogador perdeu
  {
    puts("\n\n\n\t -- \t Ahh, que pena, voce perdeu!! :-( \t --");
  }

  //Impressão da tabela / tabuleiro independente do resultado
  puts("\n\n\tVisualizacao final do tabuleiro:\n");
  printf("\n\t[%d]: %d", 0+1, tab[0]);
  printf("\n\t[%d]: %d", 1+1, tab[1]);
  printf("\n\t[%d]: %d", 2+1, tab[2]);
  printf("\n\t[%d]: %d", 3+1, tab[3]);
  printf("\n\t[%d]: %d", 4+1, tab[4]);
  printf("\n\t[%d]: %d", 5+1, tab[5]);
  printf("\n\t[%d]: %d", 6+1, tab[6]);
  printf("\n\t[%d]: %d", 7+1, tab[7]);
  printf("\n\t[%d]: %d", 8+1, tab[8]);
  printf("\n\t[%d]: %d", 9+1, tab[9]);
  printf("\n\n\n");

  getch();
  return 0;

}
