/*2. No 1º turno de eleição para Presidente da República, há 10 candidatos. Escreva um
algoritmo para ler o número da legenda do candidato e a quantidade de votos recebidos. O
algoritmo deve mostrar o candidato com maior número de votos e o percentual recebido
por este candidato sobre a quantidade total de votos.*/

#include <stdio.h>

int main() {
    int candidato, votos, maior_votos = 0, candidato_mais_votado = 0, total_votos = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o numero da legenda do candidato %d: ", i + 1);
        scanf("%d", &candidato);
        printf("Digite a quantidade de votos do candidato %d: ", i + 1);
        scanf("%d", &votos);

        total_votos += votos;
        if (votos > maior_votos) {
            maior_votos = votos;
            candidato_mais_votado = candidato;
        }
    }

    float percentual = (float)maior_votos * 100 / total_votos;
    printf("Candidato com mais votos: %d, Percentual: %.2f%%\n", candidato_mais_votado, percentual);

    return 0;
}
