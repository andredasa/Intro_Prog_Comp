#include <stdio.h>

// Tamanho do tabuleiro
#define TAMANHO 10

// Valor representando uma célula com navio
#define NAVIO 3

// Tamanho fixo dos navios
#define TAMANHO_NAVIO 3

// Função para imprimir o tabuleiro
void imprimirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    printf("Tabuleiro:\n\n");

    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]); // Imprime cada célula com um espaço
        }
        printf("\n");
    }

    printf("\n");
}

int main() {
    // Declaração e inicialização do tabuleiro com 0 (água)
    int tabuleiro[TAMANHO][TAMANHO] = {0};

    // Declaração dos vetores representando os navios (todos os valores são 3)
    int navioHorizontal[TAMANHO_NAVIO] = {NAVIO, NAVIO, NAVIO};
    int navioVertical[TAMANHO_NAVIO] = {NAVIO, NAVIO, NAVIO};

    // Coordenadas iniciais definidas no código
    int linhaInicialHorizontal = 2;
    int colunaInicialHorizontal = 4;

    int linhaInicialVertical = 5;
    int colunaInicialVertical = 7;

    // Verificação se o navio horizontal cabe no tabuleiro
    if (colunaInicialHorizontal + TAMANHO_NAVIO <= TAMANHO) {
        // Verificação se as posições estão livres (sem outro navio)
        int sobreposicao = 0;
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            if (tabuleiro[linhaInicialHorizontal][colunaInicialHorizontal + i] != 0) {
                sobreposicao = 1;
                break;
            }
        }

        // Se não houver sobreposição, posiciona o navio
        if (!sobreposicao) {
            for (int i = 0; i < TAMANHO_NAVIO; i++) {
                tabuleiro[linhaInicialHorizontal][colunaInicialHorizontal + i] = navioHorizontal[i];
            }
        } else {
            printf("Erro: Sobreposição detectada no navio horizontal.\n");
        }
    } else {
        printf("Erro: Navio horizontal ultrapassa os limites do tabuleiro.\n");
    }

    // Verificação se o navio vertical cabe no tabuleiro
    if (linhaInicialVertical + TAMANHO_NAVIO <= TAMANHO) {
        int sobreposicao = 0;
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            if (tabuleiro[linhaInicialVertical + i][colunaInicialVertical] != 0) {
                sobreposicao = 1;
                break;
            }
        }

        if (!sobreposicao) {
            for (int i = 0; i < TAMANHO_NAVIO; i++) {
                tabuleiro[linhaInicialVertical + i][colunaInicialVertical] = navioVertical[i];
            }
        } else {
            printf("Erro: Sobreposição detectada no navio vertical.\n");
        }
    } else {
        printf("Erro: Navio vertical ultrapassa os limites do tabuleiro.\n");
    }

    // Exibe o tabuleiro final com os navios posicionados
    imprimirTabuleiro(tabuleiro);

    return 0;
}
