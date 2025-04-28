// Exercício 2 - Baseado nos valores digitados pelo usuário, calcular a área ou o perímetro
// Se for 1 - área da circunferência
// Se for 2 - perímetro da circunferência

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Principal função do sistema
int main (){

    //Corrige problema de acentuação
    setlocale(LC_ALL, "Portuguese");

    int indicador;
    float valor, total;

    //Pede para o usuario digitar e Lê o valor digitado
    printf("Digite o indicador da operação (1- Área da Circunferência | 2- Perímetro da Circunferência: \n");
    scanf("%d", &indicador);

    if (indicador==1||indicador==2){ //Testa se o indicador é igual a 1 ou 2

        printf("Digite o valor: \n");
        scanf("%f", &valor);

        if (indicador==1){//Testa se o indicador é igual a 1

            total=(pow(valor,2)*3.14); //Faz o cálculo da área (só será executado se indicador for igual a 1

            //Imprime o resultado
            printf("A Área da Circunferência é: R$ %2.f \n", total);

        }
        else { //Testa se o indicador é igual a 2

            total=(pow(valor,2)*3.14*2); //Faz o cálculo do perímetro (só será executado se indicador for igual a 2

            //Imprime o resultado
            printf("O Perímetro da Circunferência é: R$ %2.f \n", total);
        }
    }
    else {

        printf("Você digitou um valor inválido (Seu tapado)! \n"); //Só será executado se o valor digitado for diferente de 1 e de 2
    }

    return 0;
}


