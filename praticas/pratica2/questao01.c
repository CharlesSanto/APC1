#include <stdio.h>

int main() {
  int n1;
  int n2;
  int n3;

  printf("Digite um número: ");
  int deu_certo = scanf("%i", &n1);

  printf("Digite outro número: ");
  deu_certo = scanf("%i", &n2);

  printf("Digite mais um número: ");
  deu_certo = scanf("%i", &n3);

  float media = (n1 + n2 + n3) / 3;

  printf("A media aritmetica foi %.1f\n", media);
  return 0;
}