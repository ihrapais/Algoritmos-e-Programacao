//4. Escreva um algoritmo que leia um vetor de 80 elementos inteiros. Encontre e mostre o
//menor elemento e a sua posição.

//(Modificar o numero 10 no for para 80)

#include <stdio.h>

int main() {
    int v[80], i, menor, pos;

    printf("Informe 80 numeros inteiros:\n");
    for(i = 0; i < 10; i++) {
        printf("v[%d] = ", i + 1);
        scanf("%d", &v[i]);
    }

    menor = v[0];
    pos = 0;

    for(i = 1; i < 10; i++) {
        if(v[i] < menor) {
            menor = v[i];
            pos = i;
        }
    }

    printf("\nMenor valor: %d\nPosicao: %d\n", menor, pos + 1);

    return 0;
}
