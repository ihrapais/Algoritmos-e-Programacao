//Anderson Schieck Lopes - 201721264

//Trabalho 3 de Lab1 - Jogo do Dado com 1 vetor de 10 posi��es

//Bibliotecas necess�rias
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado_l () //fun��o para gerar um n�mero aleat�rio de 1 a 6
{
  int dado_seis; //declara��o de vari�vel

  dado_seis = ((rand() % 6 +1)); //comando que gera o n�mero rand�mico entre 1 e 6
  printf("\n\t\t\tVoce tirou %d no dado .. \n", dado_seis);
  return dado_seis;
}


void main () //Programa principal
{
  //Declara��o de Vari�veis
  int tab[10]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; //declara��o do vetor e suas 10 posi��es zeradas
  int i=0, cont=0, pos, dado, j, continua=0; //Declara��o das demais vari�veis tipo inteiro
  srand((unsigned) time(NULL)); //Para o rand pegar um novo valor
  puts("\n\n\t\t\tJogo do tabuleiro Iniciado"); //Mensagem de Abertura do Game

  do
  {
    i++;
    printf("\n\n\n\tRodada %d\n\n", i); //Contador de Turnos
    dado =  dado_l(); //Vari�vel dado recebe fun��o rand�mica que vai simular a jogada do dado

    for (j=0; j<10; j++) //La�o de Repeti��o

    printf("\n\t[%d]: %d", j+1, tab[j]); //Impress�o do Tabuleiro / Tabela

	printf("\n\n\tInforme a posicao onde este valor pode ser inserido: ");
	scanf("%d", &pos);

	while ((pos < 1) || (pos > 10) || (tab[pos-1] != 0) ) //Verifica��o da posi��o informada
    {
      printf("\n\n\tPosicao invalida \n\tReinforme a posicao que deseja inserir o valor jogado: ");
      scanf("%d", &pos);
    }

    tab[pos-1] = dado; //Leitura da Posi��o

    //Condi��es para Continuidade ou N�o do Jogo
    if ((tab[pos-2]!=0 && tab[pos-2] > dado) || (tab[pos]!=0 && tab[pos]<dado))
    continua = 0 ;

    else
    {
      continua = 1;
      cont++;
    }
  } while (continua==1 && (cont < 10)); //Finaliza��o do la�o Do ~ While

  if (continua==1 && cont==10) //Caso o jogador venceu
  {
    puts("\n\n\n\t -- \t Parabens!! Voce ganhou!!! :-) \t --");
  }

  else //Caso o jogador perdeu
  {
    puts("\n\n\n\t -- \t Ahh, que pena, voce perdeu!! :-( \t --");
  }

  //Impress�o da tabela / tabuleiro independente do resultado
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
