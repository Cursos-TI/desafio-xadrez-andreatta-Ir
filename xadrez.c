#include <stdio.h>

void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

void moverBispo(int casas) {
    if (casas == 0) return;
    printf("Cima, Direita\n");
    moverBispo(casas - 1);
}

void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

void moverRainhaCompleta(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    printf("Cima\n"); // Inclui movimento diagonal
    moverRainhaCompleta(casas - 1);
}

int main() {
    int i;

    // Movimentação da Torre (5 casas para a direita) 
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // Movimentação do Bispo (5 casas na diagonal para cima e à direita) 
    printf("\nMovimento do Bispo:\n");
    moverBispo(5);

    // Movimentação da Rainha (8 casas para a esquerda e para cima) 
    printf("\nMovimento da Rainha:\n");
    moverRainhaCompleta(8);

    // Movimentação do Cavalo (2 casas para cima e 1 casa para a direita) 
    printf("\nMovimento do Cavalo:\n");
    for (i = 0; i < 2; i++) {
        printf("Cima\n");
    }
    printf("Direita\n");

    return 0;
}
