#include <stdio.h>
#include <string.h>

// Função para exibir o nome do atributo
const char* getNomeAtributo(int opcao) {
    switch (opcao) {
        case 1: return "População";
        case 2: return "Área";
        case 3: return "PIB";
        case 4: return "Pontos Turísticos";
        case 5: return "Densidade Demográfica";
        case 6: return "PIB per Capita";
        default: return "Desconhecido";
    }
}

// Função para obter o valor de um atributo específico
float getValorAtributo(int opcao, unsigned long int pop, float area, float pib, int pontos, float densidade, float pibPerCapita) {
    switch (opcao) {
        case 1: return (float)pop;
        case 2: return area;
        case 3: return pib;
        case 4: return (float)pontos;
        case 5: return densidade;
        case 6: return pibPerCapita;
        default: return 0.0;
    }
}

// Função para exibir os atributos disponíveis (sem for)
void exibirAtributosDisponiveis(int excluido) {
    if (excluido != 1) printf("1 - População\n");
    if (excluido != 2) printf("2 - Área\n");
    if (excluido != 3) printf("3 - PIB\n");
    if (excluido != 4) printf("4 - Pontos Turísticos\n");
    if (excluido != 5) printf("5 - Densidade Demográfica\n");
    if (excluido != 6) printf("6 - PIB per Capita\n");
}

// Função para selecionar segundo atributo com recursão no lugar de laço
int escolherSegundoAtributo(int primeiro) {
    int segundo;
    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    exibirAtributosDisponiveis(primeiro);
    printf("Digite sua opção: ");
    scanf("%d", &segundo);

    if (segundo != primeiro && segundo >= 1 && segundo <= 6) {
        return segundo;
    } else {
        printf("Opção inválida. Escolha novamente.\n");
        return escolherSegundoAtributo(primeiro);
    }
}

int main() {
    // Carta 1
    char estado1, codigo1[4], nomeCidade1[50];
    unsigned long int populacao1;
    float area1, pib1, densidade1, pibPerCapita1;
    int pontosTuristicos1;

    // Carta 2
    char estado2, codigo2[4], nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2, densidade2, pibPerCapita2;
    int pontosTuristicos2;

    // Entrada carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Informe a População da Cidade: ");
    scanf("%lu", &populacao1);
    printf("Informe a Área da Cidade (em km²): ");
    scanf("%f", &area1);
    printf("Informe o PIB da Cidade (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // Entrada carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Informe o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Informe a População da Cidade: ");
    scanf("%lu", &populacao2);
    printf("Informe a Área da Cidade (em km²): ");
    scanf("%f", &area2);
    printf("Informe o PIB da Cidade (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    int atributo1, atributo2;

    // Seleção de atributos
    printf("\nEscolha o PRIMEIRO atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (MENOR vence)\n");
    printf("6 - PIB per Capita\n");
    printf("Digite sua opção: ");
    scanf("%d", &atributo1);

    atributo2 = escolherSegundoAtributo(atributo1);

    float valor1_c1 = getValorAtributo(atributo1, populacao1, area1, pib1, pontosTuristicos1, densidade1, pibPerCapita1);
    float valor2_c1 = getValorAtributo(atributo2, populacao1, area1, pib1, pontosTuristicos1, densidade1, pibPerCapita1);
    float valor1_c2 = getValorAtributo(atributo1, populacao2, area2, pib2, pontosTuristicos2, densidade2, pibPerCapita2);
    float valor2_c2 = getValorAtributo(atributo2, populacao2, area2, pib2, pontosTuristicos2, densidade2, pibPerCapita2);

    // Exibição
    printf("\nComparação dos atributos:\n");
    printf("%s:\n", nomeCidade1);
    printf(" - %s: %.2f\n", getNomeAtributo(atributo1), valor1_c1);
    printf(" - %s: %.2f\n", getNomeAtributo(atributo2), valor2_c1);

    printf("%s:\n", nomeCidade2);
    printf(" - %s: %.2f\n", getNomeAtributo(atributo1), valor1_c2);
    printf(" - %s: %.2f\n", getNomeAtributo(atributo2), valor2_c2);

    // Pontuação
    float pontos_c1 = 0, pontos_c2 = 0;

    if (atributo1 == 5) {
        if (valor1_c1 < valor1_c2) pontos_c1++;
        else if (valor1_c1 > valor1_c2) pontos_c2++;
        else { pontos_c1 += 0.5; pontos_c2 += 0.5; }
    } else {
        if (valor1_c1 > valor1_c2) pontos_c1++;
        else if (valor1_c1 < valor1_c2) pontos_c2++;
        else { pontos_c1 += 0.5; pontos_c2 += 0.5; }
    }

    if (atributo2 == 5) {
        if (valor2_c1 < valor2_c2) pontos_c1++;
        else if (valor2_c1 > valor2_c2) pontos_c2++;
        else { pontos_c1 += 0.5; pontos_c2 += 0.5; }
    } else {
        if (valor2_c1 > valor2_c2) pontos_c1++;
        else if (valor2_c1 < valor2_c2) pontos_c2++;
        else { pontos_c1 += 0.5; pontos_c2 += 0.5; }
    }

    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", nomeCidade1, soma1);
    printf("%s: %.2f\n", nomeCidade2, soma2);

    printf("\nResultado final:\n");
    if (soma1 > soma2) {
        printf("%s venceu a rodada!\n", nomeCidade1);
    } else if (soma2 > soma1) {
        printf("%s venceu a rodada!\n", nomeCidade2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
