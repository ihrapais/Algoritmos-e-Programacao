// Apresentar os quadrados dos números inteiros de 15 a 200

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

main() {

    int x,soma=0;

    x=15;
    while (x <=200){
        printf("O quadrado do numero %d eh: %d\n",x, x*x);
        x=x+1;
    }

    system("pause");
    return 0; }
