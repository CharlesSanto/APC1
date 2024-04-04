#include <stdio.h>

int main() {
  int anos;
  const int mes = 30;
  int meses;
  int dias;

  printf("Digite sua idade: \n");
  int deu_certo = scanf("%i", &anos);
  
  printf("Quantos meses? \n");
  deu_certo = scanf("%i", &meses);

  printf("Quantos dias? \n");
  deu_certo = scanf("%i", &dias);

  int dias_totais = (anos * 365) + (meses * mes) + dias;

  printf("Voce viveu %i dias \n", dias_totais);

  
  return 0;
}