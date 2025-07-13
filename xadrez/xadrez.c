#include <stdio.h>

/*
    Programa: Simulação de movimentos de peças de xadrez.
    Peças simuladas: Torre, Bispo, Rainha e Cavalo.
    Cada peça utiliza uma estrutura de repetição diferente:
    - Torre: estrutura for
    - Bispo: estrutura while
    - Rainha: estrutura do-while
    - Cavalo: combinação de for e while (movimento em "L")

    O programa exibe no console os movimentos realizados por cada peça.
*/

int main() {
    // ==========================
    // MOVIMENTO DA TORRE (for)
    // ==========================

    printf("Movimento da Torre:\n");

    // Loop que imprime "Direita" 5 vezes, simulando o movimento da Torre
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // ==========================
    // MOVIMENTO DO BISPO (while)
    // ==========================

    printf("\nMovimento do Bispo:\n");

    int casasBispo = 1;

    while (casasBispo <= 5) {
        printf("Cima Direita\n");
        casasBispo++;
    }

    // ==========================
    // MOVIMENTO DA RAINHA (do-while)
    // ==========================

    printf("\nMovimento da Rainha:\n");

    int casasRainha = 1;

    do {
        printf("Esquerda\n");
        casasRainha++;
    } while (casasRainha <= 8);

    // ==========================
    // MOVIMENTO DO CAVALO (for + while aninhado, sem if)
    // ==========================

    /*
        O Cavalo se move em "L", neste caso:
        - Duas casas para baixo
        - Uma casa para a esquerda

        Implementação usando:
        - Loop 'for' para as duas casas para baixo
        - Loop 'while' aninhado para a casa para a esquerda
    */

    printf("\nMovimento do Cavalo:\n");

    int movimentosBaixo = 2;
    int movimentosEsquerda = 1;

    // Primeiro loop: for
    for (int i = 1; i <= movimentosBaixo; i++) {
        printf("Baixo\n");

        // Executa o while apenas na última iteração,
        // controlando via condição no próprio while
        int contadorEsquerda = 0;
        while (i == movimentosBaixo && contadorEsquerda < movimentosEsquerda) {
            printf("Esquerda\n");
            contadorEsquerda++;
        }
    }

    return 0;
}
