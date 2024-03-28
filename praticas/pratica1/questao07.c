#include <stdio.h>
#include <math.h>

int main() {
  int distancia;
  const double PI = 3.1416;

  printf("Qual a distancia percorrida? \n");
  int deu_certo = scanf("%i", &distancia);

  int angulo;
  printf("Qual o angulo da decolagem? \n");
  deu_certo = scanf("%i", &angulo);

  int altura = sin(angulo * (PI / 180)) * distancia;

  printf("A altura foi %i\n", altura);
  
  
  
  

  
  return 0;
}