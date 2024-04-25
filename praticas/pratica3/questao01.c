#include <stdio.h>

int main() {
  int n1;

  printf("Entre com um número: ");
  int deu_certo = scanf("%d", &n1);

  if (deu_certo) {
    if (n1 % 2 == 0) {
      printf("O numero %d é par\n", n1);
    } 
    else {
      printf("O numero %d é impar\n", n1);
    }
  } else {
    printf("Numero invalido! Tente novamente\n");
  }

  return 0;
}