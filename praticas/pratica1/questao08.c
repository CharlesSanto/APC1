#include <stdio.h>

int main() {
  int segundos;

  printf("Digite uma quantidade em segundos para calcular: ");
  int deu_certo = scanf("%i", &segundos);

  int horas = segundos / 3600;
  int resto = horas % 3600;
  int minutos = resto / 60;
  int segundo = segundos % 60;

  printf("%i segundos corresponde a %i horas %i minutos e %i segundos\n", segundos, horas, minutos, segundo);
  


  return 0;
}