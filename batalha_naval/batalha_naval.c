#include <stdio.h>

#define TAMANHO 10
#define NAVIO 3
#define HABILIDADE 5
#define TAMANHO_NAVIO 3
#define TAMANHO_HAB 5  // Tamanho das matrizes de habilidade (5x5)

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

int verificaSobreposicao(int tabuleiro[TAMANHO][TAMANHO], int coordenadas[3][2]) {
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        int linha = coordenadas[i][0];
        int coluna = coordenadas[i][1];
        if (tabuleiro[linha][coluna] != 0) {
            return 1;
        }
    }
    return 0;
}

void posicionarNavio(int tabuleiro[TAMANHO][TAMANHO], int coordenadas[3][2]) {
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        int linha = coordenadas[i][0];
        int coluna = coordenadas[i][1];
        tabuleiro[linha][coluna] = NAVIO;
    }
}

// Função para gerar matriz Cone (apontando para baixo)
void gerarMatrizCone(int matriz[TAMANHO_HAB][TAMANHO_HAB]) {
    for (int i = 0; i < TAMANHO_HAB; i++) {
        for (int j = 0; j < TAMANHO_HAB; j++) {
            int centro = TAMANHO_HAB / 2;
            if (i >= 0 && j >= centro - i && j <= centro + i) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }
}

// Função para gerar matriz Cruz
void gerarMatrizCruz(int matriz[TAMANHO_HAB][TAMANHO_HAB]) {
    for (int i = 0; i < TAMANHO_HAB; i++) {
        for (int j = 0; j < TAMANHO_HAB; j++) {
            if (i == TAMANHO_HAB / 2 || j == TAMANHO_HAB / 2) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }
}

// Função para gerar matriz Octaedro (losango)
void gerarMatrizOctaedro(int matriz[TAMANHO_HAB][TAMANHO_HAB]) {
    for (int i = 0; i < TAMANHO_HAB; i++) {
        for (int j = 0; j < TAMANHO_HAB; j++) {
            if (abs(i - TAMANHO_HAB / 2) + abs(j - TAMANHO_HAB / 2) <= TAMANHO_HAB / 2) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }
}

// Aplica uma matriz de habilidade no tabuleiro, centrando-a na origem
void aplicarHabilidade(int tabuleiro[TAMANHO][TAMANHO], int origemLinha, int origemColuna, int matrizHabilidade[TAMANHO_HAB][TAMANHO_HAB]) {
    int offset = TAMANHO_HAB / 2;
    for (int i = 0; i < TAMANHO_HAB; i++) {
        for (int j = 0; j < TAMANHO_HAB; j++) {
            int linha = origemLinha + i - offset;
            int coluna = origemColuna + j - offset;
            if (linha >= 0 && linha < TAMANHO && coluna >= 0 && coluna < TAMANHO) {
                if (matrizHabilidade[i][j] == 1 && tabuleiro[linha][coluna] == 0) {
                    tabuleiro[linha][coluna] = HABILIDADE;
                }
            }
        }
    }
}

int main() {
    int tabuleiro[TAMANHO][TAMANHO] = {0};

    // Navios
    int navioH[3][2] = {{4, 4}, {4, 5}, {4, 6}};
    int navioV[3][2] = {{6, 7}, {7, 7}, {8, 7}};
    int navioD1[3][2] = {{0, 0}, {1, 1}, {2, 2}};
    int navioD2[3][2] = {{0, 9}, {1, 8}, {2, 7}};

    if (!verificaSobreposicao(tabuleiro, navioH)) posicionarNavio(tabuleiro, navioH);
    if (!verificaSobreposicao(tabuleiro, navioV)) posicionarNavio(tabuleiro, navioV);
    if (!verificaSobreposicao(tabuleiro, navioD1)) posicionarNavio(tabuleiro, navioD1);
    if (!verificaSobreposicao(tabuleiro, navioD2)) posicionarNavio(tabuleiro, navioD2);

    // Matrizes de habilidades
    int cone[TAMANHO_HAB][TAMANHO_HAB];
    int cruz[TAMANHO_HAB][TAMANHO_HAB];
    int octaedro[TAMANHO_HAB][TAMANHO_HAB];

    gerarMatrizCone(cone);
    gerarMatrizCruz(cruz);
    gerarMatrizOctaedro(octaedro);

    // Aplicar habilidades ao tabuleiro
    aplicarHabilidade(tabuleiro, 2, 5, cone);      // Cone com origem próxima ao topo
    aplicarHabilidade(tabuleiro, 7, 2, cruz);      // Cruz mais ao centro-esquerda
    aplicarHabilidade(tabuleiro, 5, 5, octaedro);  // Octaedro centralizado

    // Mostrar o tabuleiro final com áreas de efeito
    imprimirTabuleiro(tabuleiro);

    return 0;
}
