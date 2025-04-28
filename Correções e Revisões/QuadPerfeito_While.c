// Receber do teclado, vários números e verificar se eles são ou não quadrados perfeitos.
// O programa termina quando o usuário  digitar um número menor ou igual a zero.
// PS: UM NÚMERO É QUADRADO PERFEITO QUANDO TEM UM NÚMERO INTEIRO COMO RAIZ-QUADRADA.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

main()     {

    int numero,c,p;

    printf("Informe um numero positivo: ");
    scanf("%d", &numero);

    while (numero > 0){

            c = 1;
            p = c * c;

            while (p < numero){

                c++;
                p=c * c;
            }

            if (p == numero){

                printf("\nO numero informado eh quadrado perfeito.\n");
            }
            else{

                printf("\nO numero informado nao eh quadrado perfeito.\n");
            }

            printf("Informe um numero positivo: ");
            scanf("%d", &numero);

        }

        printf("\n");
        system("pause");
        return 0;

}
