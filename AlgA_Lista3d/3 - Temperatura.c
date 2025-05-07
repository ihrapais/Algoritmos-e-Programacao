#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Tabela de Equivalencia Fahrenheit para Celsius:\n");
    printf("Fahrenheit\tCelsius\n");

    for (fahrenheit = 50; fahrenheit <= 70; fahrenheit++) {
        celsius = (fahrenheit - 32) / 1.8;
        printf("%.2f\t\t%.2f\n", fahrenheit, celsius);
    }

    return 0;
}
