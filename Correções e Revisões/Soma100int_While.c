// Apresentar o total da soma obtida dos cem primeiros números inteiros

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

main() {

    int x,soma=0;

    x=1;

    while (x <=100){

        soma=soma + x;
        x=x+1;
    }

    printf("A soma dos 100 primeiros numeros inteiros eh: %d\n",soma);

    system("pause");
    return 0;
}
