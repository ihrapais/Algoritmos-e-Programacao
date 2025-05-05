/*1. Em uma fazenda existem 20 bois. Cada boi tem no seu pescoço um cartão contendo um
número de identificação e seu peso. Escreva um algoritmo que recebe como entrada o
número de identificação e o peso dos 20 bois. O algoritmo deve mostrar:
a. O número e o peso do boi mais gordo
b. O número e o peso do boi mais magro
c. A média de peso dos bois*/


#include <stdio.h>

int main() {
    int id, id_mais_gordo, id_mais_magro;
    float peso, maior_peso = 0, menor_peso = 99999, soma_peso = 0;

    for (int i = 0; i < 20; i++) {
        printf("Digite o numero de identificacao do boi %d: ", i + 1);
        scanf("%d", &id);
        printf("Digite o peso do boi %d (em kg): ", i + 1);
        scanf("%f", &peso);

        soma_peso += peso;
        if (peso > maior_peso) {
            maior_peso = peso;
            id_mais_gordo = id;
        }
        if (peso < menor_peso) {
            menor_peso = peso;
            id_mais_magro = id;
        }
    }

    printf("Boi mais gordo: ID %d, Peso %.2f\nkg", id_mais_gordo, maior_peso);
    printf("Boi mais magro: ID %d, Peso %.2f\nkg", id_mais_magro, menor_peso);
    printf("Media de peso: %.2f\nkg", soma_peso / 20);

    return 0;
}
