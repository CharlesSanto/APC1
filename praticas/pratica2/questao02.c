// Faça um programa em C que leia dois números inteiros e imprima o quociente e o resto da divisão entre eles.

#include <stdio.h>

int main() {
  int n1;
  int n2;

  printf("Digite um número: ");
  int deu_certo = scanf("%i", &n1);

  printf("Digite outro número: ");
  deu_certo = scanf("%i", &n2);

  float quociente = n1 / n2;
  float resto = n1 % n2;

  printf("O quociente de %i e %i é %.1f\n", n1, n2, quociente);
  printf("O resto da divisão entre %i e %i é %.1f\n", n1, n2, resto);
  return 0;
}