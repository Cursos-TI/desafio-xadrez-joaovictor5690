#include <stdio.h>

int main() {
    // Quantidade de movimentos em L que o cavalo fará
    int movimentosCavalo = 3;
    int i = 0;

    printf("Movimentação do Cavalo em L:\n");

    // Loop externo controla quantas vezes o cavalo se move em L
    for (i = 0; i < movimentosCavalo; i++) {
        int passosBaixo = 0;

        // Loop interno para os dois passos para baixo
        while (passosBaixo < 2) {
            printf("Baixo\n");
            passosBaixo++;
        }

        // Após os dois passos para baixo, um passo para esquerda
        printf("Esquerda\n");

        // Separador visual entre movimentos
        printf("---\n");
    }

    return 0;
}