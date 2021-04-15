# Operadores Aritméticos :heavy_division_sign:

## O que é um operador?

> Um operador é um símbolo que indica a realização de uma operação sobre uma ou mais variáveis ou valores. Há uma grande diversidade de operadores em C.

Os operadores aritméticos assim como o nome propõem são ideais para realizar expressões aritméticas como adição, subtração, divisão e entre outras.

Os operadores aritméticos apenas podem ser usados com variáveis de tipo `int`, `float`. `double` e qualquer outro tipo numérico.

## Operadores e exemplos

Considere que exista as seguintes variaveis com os valores: `A = 20` e `B = 4`.

Na tabela abaixo é mostrado o funcionamento dos operadores aritméticos:

| **Operador** |  **Descrição**  |          Expressão           | Resultado |
| :----------: | :-------------: | :--------------------------: | :-------: |
|     `+`      |     Adição      |           `A + B`            |   `24`    |
|     `-`      |    Subtração    |           `A - B`            |   `16`    |
|     `*`      |  Multiplicação  |           `A * B`            |   `80`    |
|     `/`      | Divisão inteira |           `A / B`            |    `5`    |
|     `%`      |     Módulo      |           `A % B`            |    `0`    |
|     `++`     |   Incremento    | `A++` equivale a `A = A + 1` |   `21`    |
|     `--`     |   Decremento    | `A--` equivale a `A = A - 1` |   `19`    |

**:warning: Sobre os operadores de incremento e decremento: ** Há duas variações. O pré-fixado e o pós-fixado.

- Pré-fixado: Primeiro incrementa ou decrementa e depois realização a atribuição. `A = ++B` teremos  `A = 5` e `B = 6`

- Pós-fixado: Primeiro realiza a atribuição e depois incrementa ou decrementa. `A = B++` teremos  `A = 6` e `B = 6`

## Ordem de precedência

A ordem de precedência dos operadores permanecem as mesmas estabelecidas pela matemática:

1. Parêntesis;
2. Multiplicações e Divisões (da esquerda para a direita);
3. Somas e Subtrações (da esquerda para a direita);

Exemplo:

```c
int x = 10;
int y = 20;
int z = 5;

float resultado = (y + z) * 4 / z - x; // (20 + 5) * 4 / 5 - 10;
// resultado == 10.0
```

