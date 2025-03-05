#include <stdio.h>

int main() {
    int i;

    // Movimentação da Torre (5 casas para a direita) 
    printf("Movimento da Torre:\n");
    for (i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimentação do Bispo (5 casas na diagonal para cima e à direita) 
    printf("\nMovimento do Bispo:\n");
    i = 0;
    while (i < 5) {
        printf("Cima, Direita\n");
        i++;
    }

    // Movimentação da Rainha (8 casas para a esquerda) 
    printf("\nMovimento da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < 8);

    return 0;
}
