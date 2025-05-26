# Algoritmos e Programacao A - Lista de Exercicios IIId

Este repositorio contem as solucoes para a Lista de Exercicios IIId da disciplina de Algoritmos e Programacao A, desenvolvidas em linguagem C e sem a utilizacao de vetores.

## Descricao dos Exercicios

Aqui estao as descricoes dos problemas propostos nesta lista:

1.  **Calculo de Raizes de Equacao de 2o Grau:**
    Desenvolver um algoritmo que leia os coeficientes `a`, `b` e `c` de uma equacao de 2o grau ($ax^2 + bx + c = 0$) e calcule suas raizes utilizando a formula de Baskara. O algoritmo deve continuar lendo conjuntos de coeficientes ate que `a`, `b` e `c` sejam todos zero. Deve tratar os casos em que o discriminante ($\Delta = b^2 - 4ac$) e negativo (raizes imaginarias) e quando `a` e zero (equacao de primeiro grau).

2.  **Simulacao de Desmatamento:**
    Escrever um algoritmo que leia a area inicial de uma regiao e a taxa percentual de desmatamento anual. O algoritmo deve calcular e informar em quantos anos a area de mata estara reduzida a menos de 20% de sua area inicial, apresentando tambem a area restante naquele ano.

3.  **Tabela de Conversao Fahrenheit para Celsius:**
    Implementar um algoritmo que imprima uma tabela de equivalencia entre graus Fahrenheit e Celsius. A tabela deve abranger o intervalo de 50 a 70 graus Fahrenheit, com incrementos de 1 grau, utilizando a formula de conversao $C = \frac{F-32}{1.8}$.

4.  **Analise de Consumo de Energia Eletrica:**
    Desenvolver um algoritmo para processar dados de consumidores de energia eletrica. Para cada consumidor, sao fornecidos o codigo, a quantidade de kWh consumidos no mes e o tipo ('R' para residencial, 'C' para comercial, 'I' para industrial). O algoritmo deve ler esses dados ate que o tipo de consumidor seja 'X' e, ao final, apresentar:
    * O menor consumo entre os consumidores residenciais e o codigo do consumidor.
    * O maior consumo entre os consumidores comerciais e o codigo do consumidor.
    * A media geral de consumo dos consumidores industriais.
