
# Introdução à Linguagem C para Iniciantes

Bem-vindo ao guia introdutório de C! Esta linguagem de programação é poderosa, rápida e forma a base de muitas outras linguagens modernas. Aprender C vai te dar uma compreensão profunda de como o computador realmente funciona.

---

## Objetivo deste Repositório

Este repositório tem como finalidade:

- Introduzir a lógica de programação usando C
- Ensinar passo a passo os conceitos básicos
- Apresentar exemplos comentados e fáceis de entender
- Ajudar iniciantes a construir uma base sólida em C

---

## Por que aprender C?

- **Velocidade:** É uma das linguagens mais rápidas que existem.
- **Controle:** Permite acesso direto à memória.
- **Base de tudo:** C é a base do Unix, Linux, Python, Java e muitas outras tecnologias.
- **Mercado:** Ainda muito usado em sistemas embarcados, firmware, drivers e jogos.

---

## Pré-requisitos

- Nenhuma experiência anterior necessária.
- Vontade de aprender!
- Um compilador C instalado (ex: CodeBlocks, GCC, Dev-C++, VisualStudio Code, etc.)

---

## Estrutura do Conteúdo

### 1. Conceitos Fundamentais

- **Variáveis e Tipos de Dados**  
  `int`, `float`, `char`, `double`

- **Operadores**  
  Aritméticos (`+`, `-`, `*`, `/`, `%`)  
  Relacionais (`==`, `!=`, `>`, `<`, `>=`, `<=`)  
  Lógicos (`&&`, `||`, `!`)

- **Álgebra Booleana**  
  Base para decisões em `if`, `while`, `for`

### 2. Controle de Fluxo

- `if`, `else`
- `switch`
- `while`, `do...while`
- `for`

### 3. Funções

- Criação e uso de funções
- Passagem de parâmetros
- Retorno de valores

---

## Exemplos Práticos

### Exemplo 1: Soma de dois números

```
#include <stdio.h>

int main() {
    int a, b, soma;

    printf("Digite dois números: ");
    scanf("%d %d", &a, &b);

    soma = a + b;
    printf("A soma é: %d\n", soma);

    return 0;
}

```

Exemplo 2: Verificar se o número é par ou ímpar

```
#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
        printf("O número é par\n");
    else
        printf("O número é ímpar\n");

    return 0;
}

```
---

Compilando e Executando (GCC)

gcc arquivo.c -o programa
./programa

No Windows (MinGW instalado):

gcc arquivo.c -o programa.exe
programa.exe


---

Checklist de Conhecimento

[x] Declarar variáveis corretamente

[x] Utilizar scanf e printf

[x] Usar estruturas de controle como if, for, while

[x] Criar e chamar funções

[ ] Manipular vetores (arrays)

[ ] Usar ponteiros (nível intermediário)

[ ] Manipular arquivos em C



---

Recursos Recomendados:

Curso em vídeo - Linguagem C (YouTube)

Conteúdos deste repositório 

Tutoriais em PDF

Algum livro relacionado


---

Bons estudos e boas práticas de programação!
