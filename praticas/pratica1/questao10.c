#include <stdio.h>

int main() {
  int numero;

  printf("Entre com um numero de 4 digitos: ");
  int deu_certo = scanf("%i", &numero);

  int unidade = numero % 10;
  int dezena = numero % 10;
  int centena = numero % 10;
  int milhar = numero % 10;

  printf("%i decomposto em %.1i unidades, %.1i dezenas, %.1i centenas e %.1i milhares\n", numero, unidade, dezena, centena, milhar);

  
  
  return 0;
}