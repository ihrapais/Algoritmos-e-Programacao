// Exerc�cio 1 - Aumento de Sal�rio

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Principal fun��o do sistema
int main (){

    //Corrige problema de acentua��o
    setlocale(LC_ALL, "Portuguese");

    float salario, salarioAtualizado;

    //Pede para o usuario digitar e L� o valor digitado
    printf("Digite o sal�rio: \n");
    scanf("%f", &salario);

    if (salario>1000){//Testa se o salario digitado � maior que 1000

        salarioAtualizado=salario+(salario*7/100); //Faz o c�lculo do sal�rio com aumento de 7%

    }
    else {

        salarioAtualizado=salario+(salario*5/100); //Faz o c�lculo do sal�rio com aumento de 5%
    }

    //Imprime o resultado
    printf("O valor do sal�rio com aumento �: R$ %2.f \n", salarioAtualizado);

    return 0;
}


