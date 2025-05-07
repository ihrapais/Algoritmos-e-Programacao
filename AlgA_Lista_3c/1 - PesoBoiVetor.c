#include <stdio.h>

int main() {
    int codigo[10], indice, indiceMaiorPeso, indiceMenorPeso;
    float peso[10], maiorPeso, menorPeso, media, somaPesos = 0.0;

    printf("Informe o peso dos 10 bois (o codigo sera o numero de ordem): \n");

    // Leitura dos dados dos bois
    for (indice = 0; indice < 10; indice++) {
        codigo[indice] = indice + 1; // O código agora é o índice + 1
        printf("Peso do boi %d (em kg): ", indice + 1);
        scanf("%f", &peso[indice]);
        somaPesos += peso[indice]; // Acumula a soma dos pesos
    }

    printf("\n\nOs dados informados foram: \n");
    for (indice = 0; indice < 10; indice++) {
        printf("Codigo: %d Peso do boi: %.1f kg\n", codigo[indice], peso[indice]);
    }

    // Encontra o boi mais gordo
    maiorPeso = peso[0];
    indiceMaiorPeso = 0;
    for (indice = 1; indice < 10; indice++) {
        if (peso[indice] > maiorPeso) {
            maiorPeso = peso[indice];
            indiceMaiorPeso = indice;
        }
    }

    // Encontra o boi mais magro
    menorPeso = peso[0];
    indiceMenorPeso = 0;
    for (indice = 1; indice < 10; indice++) {
        if (peso[indice] < menorPeso) {
            menorPeso = peso[indice];
            indiceMenorPeso = indice;
        }
    }

    // Calcula a média dos pesos
    media = somaPesos / 10;

    // Exibe os resultados
    printf("\n\nResultados:\n");
    printf("Boi mais gordo: Codigo %d, Peso %.1f kg\n", codigo[indiceMaiorPeso], maiorPeso);
    printf("Boi mais magro: Codigo %d, Peso %.1f kg\n", codigo[indiceMenorPeso], menorPeso);
    printf("Media de peso dos bois: %.1f kg\n", media);

    return 0;
}
