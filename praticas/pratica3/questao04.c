// // 4. Faça um programa em C que leia uma tecla pressionada e determine se ela é uma letra,
// um dígito ou um caractere especial.

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    // Prompt para o usuário
    printf("Pressione uma tecla: ");
    // Leitura de um caractere
    ch = getchar();

    // Verifica se é uma letra
    if (isalpha(ch)) {
        printf("Voce pressionou uma letra.\n");
    }
    // Verifica se é um dígito
    else if (isdigit(ch)) {
        printf("Voce pressionou um digito.\n");
    }
    // Se não for letra nem dígito, é um caractere especial
    else {
        printf("Voce pressionou um caractere especial.\n");
    }

    return 0;
}
