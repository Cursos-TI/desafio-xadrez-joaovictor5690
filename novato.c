#include <stdio.h>

int main() {
    // Quantidade de movimentos para cada peça
    int movimentosBispo = 5;
    int movimentosTorre = 5;
    int movimentosRainha = 8;

    int i;

    // -------------------------------
    // Movimentação do Bispo
    // Diagonal superior direita = Cima + Direita
    // Utiliza estrutura de repetição FOR
    // -------------------------------
    printf("Movimentação do Bispo:\n");
    for (i = 0; i < movimentosBispo; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // -------------------------------
    // Movimentação da Torre
    // Direita
    // Utiliza estrutura de repetição WHILE
    // -------------------------------
    printf("\nMovimentação da Torre:\n");
    i = 0;
    while (i < movimentosTorre) {
        printf("Direita\n");
        i++;
    }

    // -------------------------------
    // Movimentação da Rainha
    // Esquerda
    // Utiliza estrutura de repetição DO-WHILE
    // -------------------------------
    printf("\nMovimentação da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < movimentosRainha);

    return 0;
}
