//1 - Desenvolva um algoritmo para armazenar um vetor, a temperatura máxima diária do mês de maio/2025. Posteriormente:
//   a- Faça a leitura da temperatura máxima para todos os dias do mês de maio
//   b- Calcule a média da temperatura máxima no mês de maio
//   c- Encontre os valores da maior e menor temperatura máxima
//   d- Mostre os dias em que houve a maior temperatura máxima
//   e- Mostre os dias em que houve a menor temperatura máxima

//Anderson e Kaua

#include <stdio.h>

int main() {
    int maio[31], tempMax[31], i, maior=0, menor=50;
    float somaTemp=0, mediaMax=0;

    printf("Informe as Temperaturas Maximas de cada dia em graus Celsius:\n");
    for(i = 0; i < 11; i++) {
        printf("%d de Maio de 2025 = ", i + 1);
        scanf("%d", &tempMax[i]);
        somaTemp += tempMax[i];
    }

    for(i = 0; i < 11; i++) {
        if(tempMax[i] > maior) {
            maior = tempMax[i];

        }
        if(tempMax[i] < menor) {
            menor = tempMax[i];

        }
    }
    mediaMax = somaTemp/11;
    printf("\nA media da temperatura maxima do mes de maio de 2025 foi: %.2f\n", mediaMax );

    printf("\nA Maior temperatura maxima de maio foi: %d\n graus C", maior);
    printf("\nA Menor temperatura maxima de maio foi: %d\n graus C", menor);



     for(i = 0; i < 11; i++)
            if(tempMax[i] == maior)
        printf("\nOs dias com as maiores temperaturas foram: %d\n", i+1);


     for(i = 0; i < 11; i++)
            if(tempMax[i] == menor)
        printf("\nOs dias com as menores temperaturas foram: %d\n", i+1);


    return 0;
}
