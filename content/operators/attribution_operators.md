# Operadores de Atribuição :pushpin:

## O que é um operador?

> Um operador é um símbolo que indica a realização de uma operação sobre uma ou mais variáveis ou valores. Há uma grande diversidade de operadores em C.

Os operadores de atribuição permitem conceder algum valor á uma variável de mesmo tipo que o valor passado. O resultado é a mutação do valor da variável indicada na atribuição.

## Operadores e exemplos

Considere que exista as seguintes variáveis com os valores: `A = 10` e `B = 20`.

Na tabela abaixo é mostrado o funcionamento dos operadores de atribuição:

| **Operador** |        **Descrição**         | Expressão |  Equivale   |
| :----------: | :--------------------------: | :-------: | :---------: |
|     `=`      |      Atribuição Simples      |  `A = B`  |             |
|     `+=`     |     Atribuição com Soma      | `A += B`  | `A = A + B` |
|     `-=`     |   Atribuição com Subtração   | `A -= B`  | `A = A - B` |
|     `*=`     | Atribuição com Multiplicação | `A *= B`  | `A = A * B` |
|     `/=`     |    Atribuição com Divisão    | `A /= B`  | `A = A / B` |
|     `%=`     |    Atribuição com Módulo     | `A %= B`  | `A = A % B` |

:warning: **Não confunda o operador de atribuição simples `=` com o operador relacional de igualdade `==`**.  Lembre-se: `= != ==`

> Há mais operadores de atribuição como os de atribuição bit-a-bit como `<<=` e outros mas no momento não vamos entrar nesse assunto.

## Ordem de precedência

A ordem de precedência dos operadores de atribuição é:

1.  `=` , `+=`,  `-=`,  `*=`,  `/=`,  `%=`;  Esquerda para a direita.