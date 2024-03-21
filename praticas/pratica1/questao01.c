#include <stdio.h>

int main() {
 float nota_a1;
 float nota_a2;
  
  printf("Digite a nota da A1: ");
  scanf("%f", &nota_a1);

  printf("Digite a nota da A2: ");
  scanf("%f", &nota_a2);

  float media_final = (0.4*nota_a1) + (0.6*nota_a2);

  printf("Sua media final foi %.1f\n", media_final);
  

 

  return 0;
}