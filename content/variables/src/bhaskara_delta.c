/**
 * Programa em C para calcular o valor de Delta
 * presente na formula de Bhaskara
 * Compilação: gcc bhaskara_delta.c -o delta.out
 * Execução: ./delta.out
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
  int coeficiente_a;
  int coeficiente_b;
  int coeficiente_c;

  printf("Informe o coeficiente a: ");
  scanf("%d", &coeficiente_a);
  printf("%d\n", coeficiente_a);
  printf("Informe o coeficiente b: ");
  scanf("%d", &coeficiente_b);
  printf("Informe o coeficiente c: ");
  scanf("%d", &coeficiente_c);

  int delta = (coeficiente_b * coeficiente_b) - (4 * coeficiente_a * coeficiente_c);

  printf("Delta: %d\n", delta);
  return 0;
}