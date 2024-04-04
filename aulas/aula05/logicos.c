#include <stdio.h>

int main() {
  int n1;

  printf("Entre com um número: ");
  int deu_certo = scanf("%i", &n1);
  
  // 0 < x < 10, 0 < x E x < 10
  int maior_que_0_e_menor_que_10 = n1 > 0 && n1 <10;
  printf("0 < numero que < 10? %i\n", maior_que_0_e_menor_que_10);

  // x < 0, x > 10, x < 0 OU x > 10
  int menor_que_0_ou_maior_que_10 = n1 < 0 || n1 > 10;
  printf("numero < 0 ou numero > 10? %i\n", menor_que_0_ou_maior_que_10);

  // x NAO < 0
  int nao_e_menor_que_0 = !(n1 < 0);
  printf("numero nao < 0 %i\n", nao_e_menor_que_0);
  
  return 0;
}