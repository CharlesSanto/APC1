#include <stdio.h>
#include <math.h>

int main() {
  int a;
  int b;
  int c; 
  printf("Insira um número: ");
  int deu_certo = scanf("%i", &a);
  
  printf("Insira outro número: ");
  deu_certo = scanf("%i", &b);

  printf("Insira mais um número: ");
  deu_certo = scanf("%i", &c);

  double delta = (b * b) -4 * a * c;
  double bhaskara_positivo = (- b + sqrt(delta)) / 2 * a;
  double bhaskara_negativo = (- b - sqrt(delta)) / 2 * a;

  printf("O valor de bhaskara_positivo é %f\n", bhaskara_positivo);
  printf("O valor de bhaskara_negativo é %f\n", bhaskara_negativo);

  
  return 0;
}