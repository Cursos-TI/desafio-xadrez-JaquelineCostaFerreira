#include <stdio.h>

// Função recursiva para mover a Torre
void mover_torre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    mover_torre(casas - 1);
}

// Função recursiva para mover o Bispo
void mover_bispo(int casas, int mov_vertical) {
    if (casas == 0) return;
    for (int i = 0; i < mov_vertical; i++) {
        printf("Cima Direita\n");
    }
    mover_bispo(casas - 1, mov_vertical);
}

// Função recursiva para mover a Rainha
void mover_rainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    mover_rainha(casas - 1);
}

int main() {
    // Movimento da Torre
    printf("Movimento da Torre:\n");
    mover_torre(5);
    printf("\n");

    // Movimento do Bispo (com recursão e loops aninhados)
    printf("Movimento do Bispo:\n");
    mover_bispo(5, 1);
    printf("\n");

    // Movimento da Rainha
    printf("Movimento da Rainha:\n");
    mover_rainha(8);
    printf("\n");

    // Movimento do Cavalo com loops aninhados
    printf("Movimento do Cavalo:\n");
    for (int i = 0; i < 2; i++) { // Duas casas para cima
        printf("Cima\n");
    }
    for (int j = 0; j < 1; j++) { // Uma casa para a direita
        printf("Direita\n");
    }
    
    return 0;
}

