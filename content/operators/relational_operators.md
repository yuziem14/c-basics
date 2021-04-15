# Operadores Relacionais :fast_forward:

## O que é um operador?

> Um operador é um símbolo que indica a realização de uma operação sobre uma ou mais variáveis ou valores. Há uma grande diversidade de operadores em C.

Os operadores relacionais permitem realizar comparação entre valores. O resultado produzido é um valor `booleano`.

### O que são Booleanos (Lógicos)? :white_check_mark::x:

Ao pensarmos de maneira computacional concluímos que um computador entende apenas **dois estados** (`0` ou `1`, os `bits`).

Dessa forma, `boolean` é um tipo de dado que armazena apenas dois estados: `true` ou `false`.

Exemplos:

- **10 é maior que 5:** `true`
- **10 é igual á 5:** `false`

:warning: O tipo primitivo `boolean` não existe em C de forma "nativa". Portanto, em C podemos representar o valor `true` como sendo `1` e o valor `false` como sendo `0`, caso necessário.

## Operadores e exemplos

Considere que exista as seguintes variáveis com os valores: `A = 10` e `B = 20`.

Na tabela abaixo é mostrado o funcionamento dos operadores relacionais:

| **Operador** | **Descrição**  | Expressão | Resultado |
| :----------: | :------------: | :-------: | :-------: |
|     `==`     |   Igualdade    | `A == B`  |  `false`  |
|     `!=`     |   Diferente    | `A != B`  |  `true`   |
|     `>`      |  Maior do que  |  `A > B`  |  `false`  |
|     `<`      |  Menor do que  |  `A < B`  |  `true`   |
|     `>=`     | Maior ou Igual | `A >= B`  |  `false`  |
|     `<=`     | Menor ou Igual | `A <= B`  |  `true`   |

## Ordem de precedência

A ordem de precedência dos operadores relacionais é:

1. `<`,  `>`, `<=`,  `>=`; Esquerda para direita.
2. `==`, `!=`; Esquerda para direita.