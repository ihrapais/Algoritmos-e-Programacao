#include <stdio.h>

int main() {
    int codigo_consumidor;
    float consumo_kwh;
    char tipo_consumidor;

    int menor_consumo_residencial_codigo = -1;
    float menor_consumo_residencial_valor = -1;

    int maior_consumo_comercial_codigo = -1;
    float maior_consumo_comercial_valor = -1;

    float soma_consumo_industrial = 0;
    int contador_consumo_industrial = 0;

    printf("Digite os dados dos consumidores (codigo, consumo kWh, tipo - R, C, I. Digite X para sair):\n");

    while (1) {
        printf("Codigo do consumidor: ");
        scanf("%d", &codigo_consumidor);
        printf("Consumo kWh: ");
        scanf("%f", &consumo_kwh);
        printf("Tipo de consumidor (R, C, I, X para sair): ");
        scanf(" %c", &tipo_consumidor);

        if (tipo_consumidor == 'X' || tipo_consumidor == 'x') {
            break;
        }

        if (tipo_consumidor == 'R' || tipo_consumidor == 'r') {
            if (menor_consumo_residencial_codigo == -1 || consumo_kwh < menor_consumo_residencial_valor) {
                menor_consumo_residencial_valor = consumo_kwh;
                menor_consumo_residencial_codigo = codigo_consumidor;
            }
        } else if (tipo_consumidor == 'C' || tipo_consumidor == 'c') {
            if (maior_consumo_comercial_codigo == -1 || consumo_kwh > maior_consumo_comercial_valor) {
                maior_consumo_comercial_valor = consumo_kwh;
                maior_consumo_comercial_codigo = codigo_consumidor;
            }
        } else if (tipo_consumidor == 'I' || tipo_consumidor == 'i') {
            soma_consumo_industrial += consumo_kwh;
            contador_consumo_industrial++;
        }
    }

    printf("\nResultados:\n");
    if (menor_consumo_residencial_codigo != -1) {
        printf("Menor consumo residencial: %.2f kWh (Codigo: %d)\n", menor_consumo_residencial_valor, menor_consumo_residencial_codigo);
    } else {
        printf("Nenhum consumidor residencial registrado.\n");
    }

    if (maior_consumo_comercial_codigo != -1) {
        printf("Maior consumo comercial: %.2f kWh (Codigo: %d)\n", maior_consumo_comercial_valor, maior_consumo_comercial_codigo);
    } else {
        printf("Nenhum consumidor comercial registrado.\n");
    }

    if (contador_consumo_industrial > 0) {
        printf("Media geral de consumo industrial: %.2f kWh\n", soma_consumo_industrial / contador_consumo_industrial);
    } else {
        printf("Nenhum consumidor industrial registrado.\n");
    }

    return 0;
}
