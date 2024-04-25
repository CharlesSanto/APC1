#include <stdio.h>
#include <math.h>

int main() {
  int x1;
  int x2;
  int y1;
  int y2;

  printf("Digite o valor de x1: ");
  int deu_certo = scanf("%i", &x1);
  
  printf("Digite o valor de x2: ");
  deu_certo = scanf("%i", &x2);
  
  printf("Digite o valor de y1: ");
  deu_certo = scanf("%i", &y1);
  
  printf("Digite o valor de y2: ");
  deu_certo = scanf("%i", &y2);

  int distancia = sqrt((x1 - x2) + (y1 - y2)) ;

  printf("Distancia entre os dois pontos (x1, y1) e (x2, y2) é %i\n", distancia);
  
  

  return 0;
}