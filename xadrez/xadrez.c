#include <stdio.h>

/*
    Programa: Simulação de movimentos de peças de xadrez.
    Peças simuladas: Torre, Bispo e Rainha.
    Cada peça utiliza uma estrutura de repetição diferente:
    - Torre: estrutura for
    - Bispo: estrutura while
    - Rainha: estrutura do-while

    O programa exibe no console os movimentos realizados por cada peça.
*/

int main() {
    // ==========================
    // MOVIMENTO DA TORRE (for)
    // ==========================

    // A Torre se movimenta em linha reta (horizontal ou vertical).
    // Neste caso, simulamos a torre movendo-se 5 casas para a direita.
    // A estrutura 'for' é usada por ser ideal para repetições com contador definido.

    printf("Movimento da Torre:\n");

    // Loop que imprime "Direita" 5 vezes, simulando o movimento da Torre
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n"); // Direção do movimento da Torre
    }

    // ==========================
    // MOVIMENTO DO BISPO (while)
    // ==========================

    // O Bispo move-se sempre na diagonal (combinação de duas direções).
    // Aqui, simulamos o Bispo movendo-se 5 casas na diagonal para cima e à direita.
    // A estrutura 'while' é usada para mostrar um controle baseado em condição.

    printf("\nMovimento do Bispo:\n");

    int casasBispo = 1; // Contador de casas percorridas pelo Bispo

    // Enquanto o Bispo não tiver se movido 5 casas, continua o movimento
    while (casasBispo <= 5) {
        printf("Cima Direita\n"); // Direção do movimento do Bispo (diagonal)
        casasBispo++; // Avança para a próxima casa
    }

    // ==========================
    // MOVIMENTO DA RAINHA (do-while)
    // ==========================

    // A Rainha pode mover-se em todas as direções (combina Torre e Bispo).
    // Aqui, simulamos a Rainha movendo-se 8 casas para a esquerda.
    // A estrutura 'do-while' é usada para garantir que o corpo do loop seja executado pelo menos uma vez.

    printf("\nMovimento da Rainha:\n");

    int casasRainha = 1; // Contador de casas percorridas pela Rainha

    // Executa o movimento da Rainha ao menos uma vez, e continua até 8 casas
    do {
        printf("Esquerda\n"); // Direção do movimento da Rainha
        casasRainha++; // Avança para a próxima casa
    } while (casasRainha <= 8);

    return 0; // Fim do programa
}
