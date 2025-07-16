#include <stdio.h>

#define TAMANHO 10         // Tamanho do tabuleiro (10x10)
#define NAVIO 3            // Valor representando uma parte do navio
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

// Verifica se há sobreposição nas coordenadas
int verificaSobreposicao(int tabuleiro[TAMANHO][TAMANHO], int coordenadas[3][2]) {
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        int linha = coordenadas[i][0];
        int coluna = coordenadas[i][1];
        if (tabuleiro[linha][coluna] != 0) {
            return 1; // Há sobreposição
        }
    }
    return 0; // Livre
}

// Posiciona um navio no tabuleiro nas coordenadas fornecidas
void posicionarNavio(int tabuleiro[TAMANHO][TAMANHO], int coordenadas[3][2]) {
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        int linha = coordenadas[i][0];
        int coluna = coordenadas[i][1];
        tabuleiro[linha][coluna] = NAVIO;
    }
}

int main() {
    int tabuleiro[TAMANHO][TAMANHO] = {0};

    // ===================== //
    // NAVIO 1 - Horizontal  //
    // Linha ajustada de 2 -> 4
    // ===================== //
    int linhaH = 4;
    int colunaH = 4;
    int navioH[3][2] = {
        {linhaH, colunaH},
        {linhaH, colunaH + 1},
        {linhaH, colunaH + 2}
    };

    if (colunaH + TAMANHO_NAVIO <= TAMANHO && !verificaSobreposicao(tabuleiro, navioH)) {
        posicionarNavio(tabuleiro, navioH);
    } else {
        printf("Erro: Navio horizontal fora dos limites ou sobreposto.\n");
    }

    // =================== //
    // NAVIO 2 - Vertical  //
    // Linha ajustada de 5 -> 6
    // =================== //
    int linhaV = 6;
    int colunaV = 7;
    int navioV[3][2] = {
        {linhaV, colunaV},
        {linhaV + 1, colunaV},
        {linhaV + 2, colunaV}
    };

    if (linhaV + TAMANHO_NAVIO <= TAMANHO && !verificaSobreposicao(tabuleiro, navioV)) {
        posicionarNavio(tabuleiro, navioV);
    } else {
        printf("Erro: Navio vertical fora dos limites ou sobreposto.\n");
    }

    // ============================ //
    // NAVIO 3 - Diagonal Principal //
    // ============================ //
    int linhaD1 = 0;
    int colunaD1 = 0;
    int navioD1[3][2] = {
        {linhaD1, colunaD1},
        {linhaD1 + 1, colunaD1 + 1},
        {linhaD1 + 2, colunaD1 + 2}
    };

    if (linhaD1 + TAMANHO_NAVIO <= TAMANHO && colunaD1 + TAMANHO_NAVIO <= TAMANHO &&
        !verificaSobreposicao(tabuleiro, navioD1)) {
        posicionarNavio(tabuleiro, navioD1);
    } else {
        printf("Erro: Navio diagonal principal fora dos limites ou sobreposto.\n");
    }

    // =================================== //
    // NAVIO 4 - Diagonal Secundária (↘) //
    // =================================== //
    int linhaD2 = 0;
    int colunaD2 = 9;
    int navioD2[3][2] = {
        {linhaD2, colunaD2},
        {linhaD2 + 1, colunaD2 - 1},
        {linhaD2 + 2, colunaD2 - 2}
    };

    if (linhaD2 + TAMANHO_NAVIO <= TAMANHO && colunaD2 - (TAMANHO_NAVIO - 1) >= 0 &&
        !verificaSobreposicao(tabuleiro, navioD2)) {
        posicionarNavio(tabuleiro, navioD2);
    } else {
        printf("Erro: Navio diagonal secundária fora dos limites ou sobreposto.\n");
    }

    // Exibir o tabuleiro final
    imprimirTabuleiro(tabuleiro);

    return 0;
}
