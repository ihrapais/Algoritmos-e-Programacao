#include <stdio.h>

int main() {
    int dia1, mes1, ano1, dia2, mes2, ano2;

    // Primeira data
    printf("Digite a primeira data:\n");
    printf("Dia: ");
    scanf("%d", &dia1);
    printf("Mes: ");
    scanf("%d", &mes1);
    printf("Ano: ");
    scanf("%d", &ano1);

    // Segunda data
    printf("Digite a segunda data:\n");
    printf("Dia: ");
    scanf("%d", &dia2);
    printf("Mes: ");
    scanf("%d", &mes2);
    printf("Ano: ");
    scanf("%d", &ano2);

    // Comparação das datas
    if (ano1 > ano2) {
        printf("A primeira data (%d/%d/%d) e mais recente.\n", dia1, mes1, ano1);
    } else if (ano2 > ano1) {
        printf("A segunda data (%d/%d/%d) e mais recente.\n", dia2, mes2, ano2);
    } else if (mes1 > mes2) {
        printf("A primeira data (%d/%d/%d) e mais recente.\n", dia1, mes1, ano1);
    } else if (mes2 > mes1) {
        printf("A segunda data (%d/%d/%d) e mais recente.\n", dia2, mes2, ano2);
    } else if (dia1 > dia2) {
        printf("A primeira data (%d/%d/%d) e mais recente.\n", dia1, mes1, ano1);
    } else if (dia2 > dia1) {
        printf("A segunda data (%d/%d/%d) e mais recente.\n", dia2, mes2, ano2);
    } else {
        printf("As datas sao iguais!\n");
    }

    return 0;
}
