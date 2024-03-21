#include <stdio.h>

int main() {
  const float PI = 3.1416; 
  int raio;

  printf("Determine o valor do raio da pizza: ");
  int deu_certo = scanf("%i", &raio);

  float p = 2 * PI * raio;

  printf("O perimetro da pizza é de %.2f\n", p);

  
  return 0;
}