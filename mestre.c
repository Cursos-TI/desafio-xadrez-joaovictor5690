#include <stdio.h>

// Função recursiva para movimentar o Bispo (diagonal superior direita)
int moverBispo(int passo) {
    if (passo >= 5) {
        return 0;
    }
    printf("Cima\n");
    printf("Direita\n");
    return moverBispo(passo + 1);
}

// Função recursiva para movimentar a Torre (direita)
int moverTorre(int passo) {
    if (passo >= 5) {
        return 0;
    }
    printf("Direita\n");
    return moverTorre(passo + 1);
}

// Função recursiva para movimentar a Rainha (esquerda)
int moverRainha(int passo) {
    if (passo >= 8) {
        return 0;
    }
    printf("Esquerda\n");
    return moverRainha(passo + 1);
}

int main() {
    int i, j;

    // -------------------------------
    // Movimentação do Bispo
    // -------------------------------
    printf("Movimentação do Bispo:\n");
    moverBispo(0);

    // -------------------------------
    // Movimentação da Torre
    // -------------------------------
    printf("\nMovimentação da Torre:\n");
    moverTorre(0);

    // -------------------------------
    // Movimentação da Rainha
    // -------------------------------
    printf("\nMovimentação da Rainha:\n");
    moverRainha(0);

    // -------------------------------
    // Movimentação do Cavalo
    // Movimento em L: 2 para cima + 1 para direita
    // Usa loops aninhados com múltiplas variáveis e continue/break
    // -------------------------------
    printf("\nMovimentação do Cavalo:\n");

    for (i = 0; i < 3; i++) {
        j = 0;
        while (j < 3) {
            if (j < 2) {
                printf("Cima\n");
            } else if (j == 2) {
                printf("Direita\n");
            }

            // Condição extra para demonstrar uso de continue/break
            if (i == 1 && j == 1) {
                j++;
                continue; // pula para próxima iteração
            }

            if (i == 2 && j == 2) {
                break; // interrompe o loop interno
            }

            j++;
        }
        printf("---\n"); // separador visual entre movimentos
    }

    return 0;
}