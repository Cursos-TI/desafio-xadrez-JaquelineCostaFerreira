#include <stdio.h>
int main() {
    // Movimento da Torre - usando for
    int casas_torre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimento do Bispo - usando while
    int casas_bispo = 5;
    int contador = 0;
    printf("Movimento do Bispo:\n");
    while (contador < casas_bispo) {
        printf("Cima Direita\n");
        contador++;
    }
    printf("\n");

    // Movimento da Rainha - usando do-while
    int casas_rainha = 8;
    int contador_rainha = 0;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < casas_rainha);

    return 0;
}
