#include <stdio.h>

int main() {
  int n1;
  int n2;

  printf("Entre com o primeiro número: ");
  int deu_certo = scanf("%i", &n1);
  
  printf("Entre com o segundo número: ");
  deu_certo = scanf("%i", &n2);

  int iguais = n1 == n2;
  printf("Os numeros sao iguais? %i\n", iguais);

  int diferentes = n1 != n2;
  printf("Os numeros sao diferentes? %i\n", diferentes);

  int maior = n1 > n2;
  printf("O priemiro numero é maior que o segundo? %i\n", maior);

  int menor = n1 < n2;
  printf("O primeiro numero e menor? %i\n", menor);

  int maior_igual = n1 >= n2;
  printf("O primeiro numero e maior igual? %i\n", maior_igual);

  int menor_igual = n1 <= n2;
  printf("O primeiro numero e menor igual? %i\n", menor_igual);
  
  return 0;
}