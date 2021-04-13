# Introdução a Linguagem C :computer:

A linguagem de programação C foi criada em 1972 por Dennis Ritchie e foi usada para desenvolver o sistema Unix.

## Características

Algumas características importantes da linguagem são:

- È uma linguagem **compilada**
- Linguagem de "médio" nível
- Linguagem estruturada e/ou imperativa
- Linguagem de uso geral

A extensão `.c` identifica um arquivo de código fonte escrito em C.

## C e C++

Embora algumas pessoas pensem ser a mesma coisa, não é o caso.

Podemos dizer que a linguagem C++ é uma evolução de C, ou seja C++ é completamente compatível com C porém tem algumas coisas a mais como suporte para o paradigma de **Orientação a Objetos** e outras características interessantes.



## O que significa ser "compilada"?

Por mais que utilizemos texto "legível para humanos" ao escrever um código C, o computador não entende essas palavras como *"main"*, *"int"* e entre outras palavras que são usadas na linguagem. Tudo que um computador entende é **0** e **1**, os famosos bits.

Sendo assim, para executarmos um programa em C é necessário que aconteça a "tradução" a linguagem humana para a linguagem de máquina.

Imagine a seguinte situação, há uma conversa entre um brasileiro e um alemão. Caso um não saiba o idioma do outro não há como ter entendimento entre as partes, portanto é necessário um tradutor que faça o intermédio entre ambos e possibilite a conversa.

O compilador por meio da sintaxe (algo equivalente a gramática) consegue traduzir todo o código em C para um arquivo executável que contém a linguagem de máquina (bits), permitindo assim a sua execução.

Para que a compilação tenha sucesso é necessário que todo o código escrito esteja utilizando a sintaxe e as regras da linguagem corretamente, pois caso o compilador encontre alguma incoerência o processo de compilação é abortado e não é possível gerar o executável.



## Estruturas de um código em C :scroll:

Um programa em C é estruturado em:

- **Blocos**: Nada mais são que conjuntos de instruções, e devem ser delimitados com chaves (`{ ... }`). Um bloco também pode conter outros blocos.
- **Instrução**: Geralmente corresponde a uma ação executada, e deve sempre terminar com ponto-e-vírgula (`;`).

> **Observação :exclamation:**: O código-fonte em si é apenas o conjunto de blocos e instruções, e o programa é o executável gerado a partir do código-fonte.



### Estrutura básica de um código em C

```c
#include <stdio.h>
#include <stdlib.h>

int main () {
    /* instruções */
    
    return 0;
}
```

- `#include`: Inclui uma biblioteca `.h` indicada no código-fonte, permitindo as funções definidas por ela.
- `int main()`: Define a função principal que é um bloco de código e serve como o "ponto de entrada" para execução do programa. Dentro dela é fornecido todas as instruções (e blocos) a serem executados.
- `return 0`: Define o retorno da função `main` como zero e em geral significa que o programa não teve nenhum problema durante a execução.

### Comentários

Os comentários não são processados e servem apenas para que o desenvolvedor/programador possa fazer "anotações" no meio do código. Podem ser feitos comentários de uma linha ou comentários multilinhas.

#### Comentários de linha única

Definidos por meio de duas barras `//`

```c
// Comentário de linha única
```

#### Comentários multilinhas

Os comentários devem estar entre `/*` que indica o inicio dos comentários e `*/` que indica o final dos comentários.

```c
/*
Comentários Multilinhas
Permite escrever comentários em uma linha ou mais
*/
```

> :warning:O compilador ignora os comentários e também espaços, tabulações e quebras de linha no meio do código.



## Compilando e executando o código-fonte

### Compilação

O compilador C usado será o `gcc`. Portanto para compilar basta chamar o compilador e informar qual será o  caminho do arquivo a ser compilado e opcionalmente também pode ser passado o nome do arquivo de saída (o arquivo executável).

`gcc <nome_arquivo.c> [-o <nome_executavel>]`

Exemplos:

`gcc meuprograma.c -o programa`

Nesse caso estamos compilando o arquivo `meuprograma.c` e a saída da compilação estará no arquivo `programa` que é o executável gerado. Porém é possível omitir o `-o programa`, caso seja omitido o arquivo executável será chamado `a.out`

### Execução

Para executar basta chamar o arquivo executável que foi gerado na compilação, utilizando:

`./´programa `ou `./a.out` se o nome do executável foi omitido ao realizar a compilação.

## Prática

Para a prática é necessário saber uma função especifica de biblioteca `stdio.h` que vai ser aprofundada nos próximos capítulos. A função `printf()`.

Por meio do `printf` podemos escrever no terminal (que é a saída padrão nesse caso) qualquer texto. Basta chamar a função e passar como parâmetro o texto que quer imprimir na saída. Por exemplo:

```c
printf("Olá\nTudo bem?");

/*
Resultado:
Olá 
Tudo bem?
*/
```

> :warning: O `\n` é utilizado para adicionar uma quebra de linha após a palavra Olá.

1. Imprima o seu nome, idade e o nome da linguagem de programação que está sendo utilizada. Use um `printf` pra cada informação requisitada.

   **Saída**:

   ```
   Nome: <seu nome aqui>
   Idade: <sua idade aqui>
   Linguagem de Programação: <o nome da linguagem de programação aqui>
   ```