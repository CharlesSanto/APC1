// Faça um programa em C que leia uma temperatura em graus Celsius e calcule o valor correspondente em graus Fahrenheit (°F = 9/5°C + 32).

#include <stdio.h>

int main() {
  float celsius;

  printf("Digite a temperatura ambiente: ");
  int deu_certo = scanf("%f", &celsius);
  
  float fahrenheit = (celsius * 9/5) + 32;

  printf("Esse valor em Celsius corresponde a %.2f Fahrenheit\n", fahrenheit);
  
  
  return 0;
}