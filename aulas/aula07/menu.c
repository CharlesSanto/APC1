#include <stdio.h>
#include <stdlib.h>

int main() {
  int opcao = 0;
  while (opcao != 4) {
    int deu_certo = system("clear");
    printf("MEU JOGO\n");
    printf("1 - Iniciar\n");
    printf("2 - Ver ranking\n");
    printf("3 - Ajuda\n");
    printf("4 - Sair\n");
    printf("Escolha uma opcao => ");
    deu_certo = scanf("%i", &opcao);
    while (getchar() != '\n'); // Limpar Buffer do teclado
    
    if (!deu_certo) {
      opcao = 0;
     opcao = 0; }
    switch (opcao) {
     case 1: {
      char nome[31];
      deu_certo = system("clear");
      printf("Qual seu nome? ");
      deu_certo = scanf("%[^\n]s", nome);
      while (getchar() != '\n'); // Limpar  Buffer do teclado
      printf("Ola %s!\n", nome);
      printf("Pressione ENTER para iniciar...");
      getchar();
      break;
     }
     case 2: {
       deu_certo = system("clear");
       printf("Ranking -  Top 5\n");
       printf("1° lugar: Charles - 1000 pontos\n");
       printf("2° lugar: Marcos - 1000 pontos\n");
       printf("3° lugar: Lucas - 1000 pontos\n");
       printf("4° lugar: Maria - 1000 pontos\n");
       printf("5° lugar: Mateus - 1000 pontos\n");
       printf("Pressione ENTER para voltar...");
       getchar();
      break;
     }
     case 3:
      break;
     case 4:
      printf("Ate logo!\n");
      break;
     default:
      printf("Opcao invalida! Pressione ENTER para prosseguir...\n");
      getchar();
    }
  }

  return 0;
}