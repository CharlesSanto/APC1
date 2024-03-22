// Faça um programa em C que leia o peso e a altura de uma pessoa e calcule o índice de massa corporal (imc = peso / altura²).

#include <stdio.h>

int main() {
  float peso;
  float altura;

  printf("Informe seu peso, por favor: ");
  int deucerto = scanf("%f", &peso);

  printf("Agora informe sua altura: ");
  deucerto = scanf("%f", &altura);

  float massa = peso / (altura * altura);

  printf("Seu indice de massa corporal é %.2f\n", massa);
  
  return 0;
}