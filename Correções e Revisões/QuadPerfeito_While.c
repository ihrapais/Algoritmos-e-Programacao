// Receber do teclado, v�rios n�meros e verificar se eles s�o ou n�o quadrados perfeitos.
// O programa termina quando o usu�rio  digitar um n�mero menor ou igual a zero.
// PS: UM N�MERO � QUADRADO PERFEITO QUANDO TEM UM N�MERO INTEIRO COMO RAIZ-QUADRADA.

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
