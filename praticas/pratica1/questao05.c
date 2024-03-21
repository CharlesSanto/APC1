#include <stdio.h>

int main() {
  int gigabyte;

  printf("Digite um Ggabyte: ");
  scanf("%i", &gigabyte);

  float byte = 1024 * 1024 * 1024;
  float resultado = gigabyte * byte;

  printf("O valor convertido para byte foi: %f ", resultado);
  
  return 0;
}