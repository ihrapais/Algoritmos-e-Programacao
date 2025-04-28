// Exerc�cio 2 - Baseado nos valores digitados pelo usu�rio, calcular a �rea ou o per�metro
// Se for 1 - �rea da circunfer�ncia
// Se for 2 - per�metro da circunfer�ncia

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Principal fun��o do sistema
int main (){

    //Corrige problema de acentua��o
    setlocale(LC_ALL, "Portuguese");

    int indicador;
    float valor, total;

    //Pede para o usuario digitar e L� o valor digitado
    printf("Digite o indicador da opera��o (1- �rea da Circunfer�ncia | 2- Per�metro da Circunfer�ncia: \n");
    scanf("%d", &indicador);

    if (indicador==1||indicador==2){ //Testa se o indicador � igual a 1 ou 2

        printf("Digite o valor: \n");
        scanf("%f", &valor);

        if (indicador==1){//Testa se o indicador � igual a 1

            total=(pow(valor,2)*3.14); //Faz o c�lculo da �rea (s� ser� executado se indicador for igual a 1

            //Imprime o resultado
            printf("A �rea da Circunfer�ncia �: R$ %2.f \n", total);

        }
        else { //Testa se o indicador � igual a 2

            total=(pow(valor,2)*3.14*2); //Faz o c�lculo do per�metro (s� ser� executado se indicador for igual a 2

            //Imprime o resultado
            printf("O Per�metro da Circunfer�ncia �: R$ %2.f \n", total);
        }
    }
    else {

        printf("Voc� digitou um valor inv�lido (Seu tapado)! \n"); //S� ser� executado se o valor digitado for diferente de 1 e de 2
    }

    return 0;
}


