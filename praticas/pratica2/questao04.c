// Faça um programa em C que leia a largura e o comprimento de um terreno em metros e calcule a sua área em hectares (1 hectare = 10.000 m²).

#include <stdio.h> 

int main() {
  float largura;
  float comprimento;

  printf("Digite a largura do terreno em metros: ");
  int deu_certo = scanf("%f", &largura);

  printf("Digite o comprimento do terreno em metros: ");
  deu_certo = scanf("%f", &comprimento);

  float hectare = (largura * comprimento) / 1000; // Primeira forma de fazer o calculo.
  // float hectare = (largura * comprimento) / (10.000 * 10.000 * 10.000); - Segunda forma de fazer o calculo.

  printf("O valor do terreno é de %.2f Hectares\n", hectare);
  

  
  return 0;
}