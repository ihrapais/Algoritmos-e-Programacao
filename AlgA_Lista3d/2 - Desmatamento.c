#include <stdio.h>

int main() {
    float area_inicial, taxa_desmatamento, area_atual;
    int ano = 0;

    printf("Digite a area inicial da regiao (em km2): ");
    scanf("%f", &area_inicial);
    printf("Digite a taxa de desmatamento anual (em percentual): ");
    scanf("%f", &taxa_desmatamento);

    area_atual = area_inicial;
    float limite_area = area_inicial * 0.20; // 20% da area inicial

    while (area_atual >= limite_area) {
        area_atual = area_atual * (1 - taxa_desmatamento / 100);
        ano++;
    }

    printf("Em %d anos, a area estara reduzida a menos ou igual a 20%% de sua area atual, o que corresponde a %.2f km2.\n", ano, area_atual);

    return 0;
}
