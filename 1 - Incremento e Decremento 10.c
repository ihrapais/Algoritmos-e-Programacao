//Vetores (Conjunto de dados do mesmo tipo)

//er 1 Vetor, mostrar os elementos na ordem inversa (índice)

#include <stdio.h>
int main(){

    //Declaração de vetor
    int v[10];
    int i, n, flag=1;

    //Leitura do vetor
    printf("Informe 10 valores inteiros:\n");

    for(i=0; i<10; i++){
        printf("v[%d] = ",i);
        scanf("%i", &v[i]);
    }

    printf("\n");
    // mostrar o vetor na ordem inversa
    for(i=9; i>=0; i--)
        printf("v[%d] = %d\n", i, v[i]);

    //Ler um valor inteiro e verificar se esse valor existe no vetor
    printf("Digite um numero para procurar no vetor: ");
    scanf("%i", &n);

    for(i=0; i<10; i++){
        if (v[i] == n){
            flag =0;
            printf("Posicao v[%d]\n", i);
        }
    }
    if (flag==1)
        printf("Valor %d nao encontrado em nenhum vetor", n);
    else
        printf("Valor %d encontrado", n);

    return 0;

}
