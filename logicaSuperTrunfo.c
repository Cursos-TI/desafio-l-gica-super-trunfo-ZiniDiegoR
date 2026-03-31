#include <stdio.h>
#include <string.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[100], cidade2[100];

    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    int resultadoPopulacao, resultadoArea, resultadoPib;
    int resultadoPontosTuristicos, resultadoDensidade;
    int resultadoPibPerCapita, resultadoSuperPoder;

    printf("Cadastro da Carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Codigo da carta: ");
    scanf("%3s", codigo1);

    printf("Nome da cidade: ");
    scanf(" ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\nCadastro da Carta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Codigo da carta: ");
    scanf("%3s", codigo2);

    printf("Nome da cidade: ");
    scanf(" ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;

    pibPerCapita1 = (pib1 * 1000000000.0f) / (float) populacao1;
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float) populacao2;

    superPoder1 = (float) populacao1 + area1 + pib1 + (float) pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);
    superPoder2 = (float) populacao2 + area2 + pib2 + (float) pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    resultadoPopulacao = populacao1 > populacao2;
    resultadoArea = area1 > area2;
    resultadoPib = pib1 > pib2;
    resultadoPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
    resultadoDensidade = densidade1 < densidade2;
    resultadoPibPerCapita = pibPerCapita1 > pibPerCapita2;
    resultadoSuperPoder = superPoder1 > superPoder2;

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta %d venceu (%d)\n", resultadoPopulacao ? 1 : 2, resultadoPopulacao);
    printf("Area: Carta %d venceu (%d)\n", resultadoArea ? 1 : 2, resultadoArea);
    printf("PIB: Carta %d venceu (%d)\n", resultadoPib ? 1 : 2, resultadoPib);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", resultadoPontosTuristicos ? 1 : 2, resultadoPontosTuristicos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", resultadoDensidade ? 1 : 2, resultadoDensidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", resultadoPibPerCapita ? 1 : 2, resultadoPibPerCapita);
    printf("Super Poder: Carta %d venceu (%d)\n", resultadoSuperPoder ? 1 : 2, resultadoSuperPoder);

    return 0;
}