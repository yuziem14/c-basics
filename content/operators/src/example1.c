#include <stdio.h>
#include <stdlib.h>

int main() {
  int x = 10;
  int y = 20;

  printf("--- Valores iniciais ---\n");
  printf("x: %d\n", x);
  printf("y: %d\n\n", y);

  // Pré-incremento
  y = ++x;
  /** 
   * x = x + 1;
   * y = x
  */

  printf("x: %d\n", x);
  printf("y: %d\n\n", y);

  // Pós-incremento
  y = x++;
  /** 
   * y = x
   * x = x + 1;
  */
  printf("x: %d\n", x);
  printf("y: %d\n\n", y);
}

/** 
 * Teste de mesa:
 * 
 * x = 10
 * y = 20
 * Imprime: x -> 10
 * Imprime: y -> 20
 * 
 * x = x + 1; -> x = 10 + 1 -> x = 11
 * y = x -> y = 11
 * Imprime: x -> 11
 * Imprime: y -> 11
 * 
 * y = x -> y = 11
 * x = x + 1 -> x = 11 + 1 -> x = 12
 * Imprime: x -> 12
 * Imprime: y -> 11
*/