#include <stdio.h>

#define TAMANHO 10         // Tamanho do tabuleiro
#define NAVIO 3            // Valor representando o navio
#define TAMANHO_NAVIO 3    // Tamanho fixo dos navios

// Função para imprimir o tabuleiro
void imprimirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    printf("Tabuleiro:\n\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    // Inicializa o tabuleiro com zeros (água)
    int tabuleiro[TAMANHO][TAMANHO] = {0};

    // NAVIO 1 - Horizontal (linha 4, colunas 4 a 6)
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[4][4 + i] = NAVIO;
    }

    // NAVIO 2 - Vertical (coluna 7, linhas 6 a 8)
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[6 + i][7] = NAVIO;
    }

    // NAVIO 3 - Diagonal principal (0,0 → 2,2)
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[i][i] = NAVIO;
    }

    // NAVIO 4 - Diagonal secundária (0,9 → 2,7)
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[i][9 - i] = NAVIO;
    }

    // Exibe o tabuleiro com os navios
    imprimirTabuleiro(tabuleiro);

    return 0;
}
