# Variáveis :earth_asia:

Manipular dados é um processo corriqueiro em qualquer programa computacional, porém para que dados sejam manipulados é necessário que os mesmos estejam disponíveis para acesso durante todo o ciclo de execução daquele programa. A única forma de ter eles disponíveis é armazenando-os em algum lugar temporário.

Portanto, variáveis são apenas espaços reservados em memória RAM para armazenar temporariamente algum dado importante para a execução do programa.  Ao declarar uma variável é necessário informar um nome e o tipo de dado que ela armazena, depois de declara ela recebe o endereço de memória onde ela foi alocada.

## Declaração de Variáveis

Em C podemos declarar variáveis da seguinte forma:

```c
<tipo> <nome> [= <valor_inicial>]
```

Definimos um nome bem como um tipo, e opcionalmente podemos já inicializa-lá com algum valor.

Exemplos:

```c
int numero = 7;
char caractere;
...
```

Vamos quebrar a declaração de variáveis nas seguintes partes:

- **Tipo**: O tipo de uma variável apenas define o formato de dado que vai ser armazenado, se é um número inteiro ou decimal, um caractere, um byte e etc. O que muda principalmente de um tipo pra outro é os valores que podemos armazenar mas também a quantidade de memória que é alocada. Temos os seguintes tipos:

|   Tipo   | Descrição                    | Formato      | Valores válidos                                  | Tamanho |
| :------: | ---------------------------- | ------------ | ------------------------------------------------ | ------- |
|  `int`   | Armazena número **inteiros** | `%d` ou `%i` | de -32767 até 32767                              | 2 bytes |
| `float`  | Armazena números `reais`     | `%f`         | de -3.4x10^38 até -3.14x10^38 com até 6 dígitos  | 4 bytes |
| `double` | Armazena números `reais`     | `%lf`        | de -1.7x10^308 até 1.7x10^308 com até 10 dígitos | 8 bytes |
|  `char`  | Armazena letras e símbolos   | `%c`         | Exemplos: ['a', 'A', 'b', '*', '4', '^', ...]    | 1 byte  |
|  `void`  | É  `vazio`.                  |              |                                                  | 1 byte  |

- **Nome**: É importante nomear variáveis de forma que elas tenham um significado condizente á seu proposito. Isso ajuda na legibilidade do código e também é uma boa prática de programação. Porém, há algumas regras que devemos seguir ao nomear variáveis, sendo elas:

  - **Não usar caracteres especiais como**: ***, &, %, $, ^, @, ç, ~** e etc.

  - **Não utilizar espaços**

  - **Iniciar o nome com letras ou _, mas nunca com números**

  - **Não pode haver duas variáveis com nomes iguais**

    Exemplos:

    `int 1num;` :x:

    `int número;` :x:

    `int numero;`:white_check_mark:

    `int num3r0;`:white_check_mark:

    `char minha variável;`:x:

    `char minha_variavel;`:white_check_mark:

    > :warning: A linguagem C é **Case Sensitive** ou seja diferencia minúsculas de maiúsculas. Então, a variável `numero` será diferente de `Numero` ou de `NUMERO`

- **Atribuição**

  Podemos atribuir  um valor á uma variável no momento da sua declaração ou em qualquer outro ponto do programa desde que usamos o operador de atribuição `=` e passamos um valor compatível com o tipo informado.

  ```c
  int numero = 7; // Inicialização ou atribuição no momento da declaração
  numero = 8; // É possível reatribuir variáveis
  
  char letra; // Primeiro declara a variável
  letra = 'F' // Depois atribui
  ```

## Constantes

Uma constante segue os mesmos "princípios" de um variável porém difere de uma variável pois não é possível reatribuir valores pra uma constante. Portanto, ao definir uma constante é preciso definitivamente inicializa-la com um valor que não poderá ser alterado. Aliás é uma **constante**.

Podemos definir uma constante de duas formas:

- Dentro da função main, usando `const`:

  ```c
  int main() {
      const float PI = 3.141592; // Declara a constante PI como sendo um float com o valor 3.141592
      ...
      return 0;
  }
  ```

  

- Fora da função main, usando a diretiva `#define`:

  ```c
  #include <stdio.h>
  #include <stdio.h>
  #define PI 3.141592 // Define PI como sendo um float com o valor 3.141592
  
  int main() {
      ...
      return 0;
  }
  ```

## Input / Output (I/O)

Manipular dados é importante, mas também precisamos mostra-lós e também recebe-lós de forma dinâmica (vinda de quem está utilizando, do usuário). É nesse momento que Entrada (Input) e Saída (Output) de dados é essencial.

Na linguagem C possuímos duas funções vindas da biblioteca `stdio.h` que nos ajudam em relação a I/O, são elas:

- `printf`: Utilizada para saída de dados (em geral, no terminal).
- `scanf`: Utilizada para entrada de dados (em geral, vinda do teclado).

### Saída: `printf`

Com a função `printf` podemos exibir para o usuário os dados e outras informações como logs de erro, avisos e etc.

- Exibindo uma mensagem:

  `print("Olá");`

- Exibindo dados armazenas em variáveis e constantes:

  Podemos utilizar os formatadores para exibir variáveis bem como a variável em si.

  É possível exibir uma mensagem com uma variável.

  ```c
  #define PI 3.1415
  
  int main() {
      int idade = 19;
      const float proporcao_aurea = 1.61803;
      
      printf("Minha idade é: %d", idade);
      printf("%f", PI);
      printf("Constante da proporção Aurea: %f", proporcao_aurea);
      
      // Multiplos valores
      printf("Constante da proporção Aurea é %f e a de PI é %f", proporcao_aurea, PI);
      
      return 0;
  }
  
  ```

### Entrada: `scanf`

Podemos requisitar pra que o usuário digite um dado que é necessário para o programa utilizando o `scanf`

Sintaxe básica:

```c
int main() {
    int variavel;
    
    scanf("%d", &variavel); // Irá capturar o valor e armazenar na variavel "variavel"
    
    return 0;
}
```

Exemplo:

```c
int main() {
    int idade;
    
    printf("Informe sua idade: "); // Pede ao usuário pra ele informar a idade
    scanf("%d", &idade); // Irá capturar o valor e armazenar na variavel "idade"
    printf("Sua idade é: %d", idade);
    
    return 0;
}
```

