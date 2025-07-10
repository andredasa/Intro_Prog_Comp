#include <stdio.h>
#include <string.h>

int main() {
    // Declaração das variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    // Declaração das variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    // Leitura dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Informe a População da Cidade: ");
    scanf("%lu", &populacao1);
    printf("Informe a Área da Cidade (em km2): ");
    scanf("%f", &area1);
    printf("Informe o PIB da Cidade (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);

    // Leitura dos dados da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Informe o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Informe a População da Cidade: ");
    scanf("%lu", &populacao2);
    printf("Informe a Área da Cidade (em km2): ");
    scanf("%f", &area2);
    printf("Informe o PIB da Cidade (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

    int opcao;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    printf("\nComparação baseada na opção escolhida:\n");

    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %lu habitantes\n", nomeCidade1, populacao1);
            printf("%s: %lu habitantes\n", nomeCidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", nomeCidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", nomeCidade1, area1);
            printf("%s: %.2f km²\n", nomeCidade2, area2);
            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", nomeCidade1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões R$\n", nomeCidade1, pib1);
            printf("%s: %.2f bilhões R$\n", nomeCidade2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", nomeCidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", nomeCidade1, pontosTuristicos1);
            printf("%s: %d pontos\n", nomeCidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: %s venceu!\n", nomeCidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: %s venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            printf("Atributo: Densidade Demográfica (MENOR vence)\n");
            printf("%s: %.2f hab/km²\n", nomeCidade1, densidade1);
            printf("%s: %.2f hab/km²\n", nomeCidade2, densidade2);
            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu!\n", nomeCidade1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 6:
            printf("Atributo: PIB per Capita\n");
            printf("%s: %.2f R$\n", nomeCidade1, pibPerCapita1);
            printf("%s: %.2f R$\n", nomeCidade2, pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2) {
                printf("Resultado: %s venceu!\n", nomeCidade1);
            } else if (pibPerCapita2 > pibPerCapita1) {
                printf("Resultado: %s venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida. Por favor, execute o programa novamente e escolha uma opção entre 1 e 6.\n");
            break;
    }

    return 0;
}
