#include <stdio.h>

/*
    Programa: Simulação de movimentos de peças de xadrez.
    Peças: Torre, Rainha, Bispo e Cavalo.

    Regras de implementação:
    - Torre: Recursiva simples (movimento para Direita)
    - Rainha: Recursiva simples (movimento para Esquerda)
    - Bispo: Recursiva dupla (vertical e horizontal)
    - Cavalo: Loop complexo com 3 movimentos fixos: Cima, Cima, Direita
*/

// ==========================
// TORRE – Recursiva simples
// ==========================
void moverTorre(int casas) {
    if (casas == 0)
        return;

    printf("Direita\n");
    moverTorre(casas - 1);
}

// ==========================
// RAINHA – Recursiva simples
// ==========================
void moverRainha(int casas) {
    if (casas == 0)
        return;

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// ==========================
// BISPO – Recursiva dupla
// ==========================
void moverHorizontal(int colunaAtual, int totalColunas) {
    if (colunaAtual >= totalColunas)
        return;

    printf("Cima Direita\n");
    moverHorizontal(colunaAtual + 1, totalColunas);
}

void moverBispo(int linhaAtual, int totalLinhas, int totalColunas) {
    if (linhaAtual >= totalLinhas)
        return;

    moverHorizontal(0, totalColunas); // Loop interno por recursão
    moverBispo(linhaAtual + 1, totalLinhas, totalColunas); // Loop externo recursivo
}

// ==========================
// CAVALO – Loop com 3 movimentos fixos
// ==========================
void moverCavalo() {
    for (int passo = 0; passo < 3; passo++) {
        if (passo < 2) {
            printf("Cima\n");
        } else {
            printf("Direita\n");
        }
    }
}

// ==========================
// FUNÇÃO PRINCIPAL
// ==========================
int main() {
    // Torre
    printf("Movimento da Torre:\n");
    moverTorre(5);  // 5 movimentos para Direita

    // Bispo
    printf("\nMovimento do Bispo:\n");
    moverBispo(0, 3, 2);  // 3 linhas, 2 colunas por linha

    // Rainha
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);  // 8 movimentos para Esquerda

    // Cavalo
    printf("\nMovimento do Cavalo:\n");
    moverCavalo();  // Cima, Cima, Direita

    return 0;
}
