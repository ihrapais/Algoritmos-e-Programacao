// Exercício 1 - Aumento de Salário

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Principal função do sistema
int main (){

    //Corrige problema de acentuação
    setlocale(LC_ALL, "Portuguese");

    float salario, salarioAtualizado;

    //Pede para o usuario digitar e Lê o valor digitado
    printf("Digite o salário: \n");
    scanf("%f", &salario);

    if (salario>1000){//Testa se o salario digitado é maior que 1000

        salarioAtualizado=salario+(salario*7/100); //Faz o cálculo do salário com aumento de 7%

    }
    else {

        salarioAtualizado=salario+(salario*5/100); //Faz o cálculo do salário com aumento de 5%
    }

    //Imprime o resultado
    printf("O valor do salário com aumento é: R$ %2.f \n", salarioAtualizado);

    return 0;
}


