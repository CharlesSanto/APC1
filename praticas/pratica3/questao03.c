
// 3. Faça um programa em C que imprima um qualitativo associado a uma nota lida conforme a tabela: 1 = Ruim; 2 = Insuficiente; 3 = Suficiente, 4 = Bom, 5 = Ótimo, e imprima Nota inválida nos demais casos.

#include <stdio.h>

int main() {
  int nota;

  printf("Faca a avaliacao da nossa loja de acordo com esta tabela: \n");
  printf("Ruim = 1\n");
  printf("Insuficiente = 2\n");
  printf("Suficiente = 3\n");
  printf("Bom = 4\n");
  printf("Ótimo = 5\n");
  printf("Escolha uma opcao => ");
  int deu_certo = scanf("%i", &nota);

  if (deu_certo) {
    if (nota == 1) {
      printf("Ruim\n");
      printf("Obrigado por avaliar nossa loja!\n");
    } 
    else if (nota == 2) {
      printf("Insuficiente\n");
      printf("Obrigado por avaliar nossa loja!\n");
    } 
    else if (nota == 3) {
      printf("Suficiente\n");
      printf("Obrigado por avaliar nossa loja!\n");
    } 
    else if (nota == 4) {
      printf("Bom\n");
      printf("Obrigado por avaliar nossa loja!\n");
    } 
    else if (nota == 5) {
      printf("Ótimo\n");
      printf("Obrigado por avaliar nossa loja!\n");
    } 
    else {
      printf("Valor invalido. Tente novamente!\n");
    }
  } 
  else {
    printf("Erro na leitura. Tente novamente!\n");
  }

  return 0;
}
