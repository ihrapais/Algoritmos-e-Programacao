/* Anderson Schieck Lopes - SI1 - Matrícula: 201721264

Descrição:

Faça um programa que calcula a distância em linha reta entre dois pontos na superfície do planeta.
O programa deve ler a latitude e a longitude de cada ponto, em graus, e informar a distância em metros.
Considere que o planeta é uma esfera com raio 6500km.Para esse cálculo, você vai precisar de funções trigonométricas.
Coloque em seu programa #include <math.h>, e use as funções sin(x), cos(x), tan(x).
Essas funções recebem um ângulo em radianos e retornam o valor do seu seno, cosseno ou tangente, respectivamente.
O valor de pi pode ser obtido com a constante M_PI.
Não esqueça de incluir a opção -lm no final do comando de compilação, para incluir a biblioteca de funções matemáticas.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  // Declaração de Variaveis
  double lat1, lat2, lon1, lon2;
  double x1, x2, y1, y2, z1, z2;
  double distancia;
  double r=6500; // r = raio do planeta em km

  printf("\n\tDigite as coordenadas geograficas de 2 pontos distintos: \n\n");

  // Entrada de dados
  printf("\n\tInforme a latidude 1 (entre -90 e 90): ");
  scanf("%lf", &lat1);
  printf("\n\tInforme a longitude 1 (entre -180 e 180): ");
  scanf("%lf", &lon1);
  printf("\n\tInforme a latitude 2 (entre -90 e 90): ");
  scanf("%lf", &lat2);
  printf("\n\tInforme a longitude 2 (entre -180 e 180): ");
  scanf("%lf", &lon2);

  //condicional para que as latitudes não ultrapassem o valor de -90 ou 90
  if (lat1, lat2 < -90 || lat1, lat2 > 90 )
  {
    printf("\n\tLatitude invalida");
    return 2;
  }

  //condicional para que as longitudes não ultrapassem o valor de -180 ou 180
  if (lon1, lon2 < -180 || lon1, lon2 > 180 )
  {
    printf("\n\tLongitude invalida\n");
    return 2;
  }

  // Conversão de Graus para Radianos
  double lat1rad=(lat1*M_PI)/180;
  double lon1rad=(lon1*M_PI)/180;
  double lat2rad=(lat2*M_PI)/180;
  double lon2rad=(lon2*M_PI)/180;

  //Continuidade de comandos para o cálculo da distacia
  x1=r*cos(lat1rad)*cos(lon1rad);
  y1=r*cos(lat1rad)*sin(lon1rad);
  z1=r*sin(lat1rad);

  x2=r*cos(lat2rad)*cos(lon2rad);
  y2=r*cos(lat2rad)*sin(lon2rad);
  z2=r*sin(lat2rad);

  distancia=sqrt(pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2));
  distancia=distancia*1000;
  printf("\n\tA distancia entre os pontos eh de: %.fm.\n", distancia);

  return 0;
}

