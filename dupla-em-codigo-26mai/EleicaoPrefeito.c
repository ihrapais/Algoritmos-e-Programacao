//2 - Leia um vetor de inteiros de 5 posições que contém a legenda (número do partido) dos candidatos a uma eleição para Prefeito.
//Em um outro vetor, leia e armazene a quantidade de votos que cada candidato obteve na eleição (considere que os valores registrados são distintos).
//Crie um vetor para armazenar o percentual de votos obtidos por cada um dos candidatos e por fim, mostre:

//a) o conteúdo de cada um dos vetores:
//b)o candidato com maior votação (sua legenda, quantidade de votos e percentual obtido).






#include <stdio.h>
#define N 5

int main() {
    int partidos[N];       // Vetor com o número dos partidos
    int votos[N];          // Vetor com a quantidade de votos por partido
    float percentuais[N];  // Vetor com os percentuais
    int totalVotos = 0;
    int i;

    // Entrada dos números dos partidos
    printf("Digite os numeros dos partidos:\n");
    for (i = 0; i < N; i++) {
        printf("Partido [%d]: ", i + 1);
        scanf("%d", &partidos[i]);
    }

    // Entrada da quantidade de votos para cada partido
    printf("\nDigite a quantidade de votos para cada partido:\n");
    for (i = 0; i < N; i++) {
        printf("Votos para o partido %d: ", partidos[i]);
        scanf("%d", &votos[i]);
        totalVotos += votos[i]; // Soma total de votos
    }

    // Cálculo dos percentuais
    for (i = 0; i < N; i++) {
        percentuais[i] = (votos[i] * 100.0) / totalVotos;
    }

    // Impressão dos vetores
    printf("\nResultado da Eleicao:\n");
    for (i = 0; i < N; i++) {
        printf("Partido %d - Votos: %d - Percentual: %.2f%%\n", partidos[i], votos[i], percentuais[i]);
    }

    // Encontrar o candidato mais votado
    int maxIndex = 0;
    for (i = 1; i < N; i++) {
        if (votos[i] > votos[maxIndex]) {
            maxIndex = i;
        }
    }

    // Mostrar o mais votado
    printf("\nCandidato mais votado:\n");
    printf("Partido: %d\n", partidos[maxIndex]);
    printf("Votos: %d\n", votos[maxIndex]);
    printf("Percentual: %.2f%%\n", percentuais[maxIndex]);

    return 0;
}
