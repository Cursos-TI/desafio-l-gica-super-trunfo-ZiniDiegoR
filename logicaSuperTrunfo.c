#include <stdio.h>

int main() {
    // Dados da carta 1
    char pais1[50] = "Brasil";
    int populacao1 = 203062512;
    float area1 = 8515767.0;
    float pib1 = 2.13;
    int pontosTuristicos1 = 30;
    float densidade1 = populacao1 / area1;

    // Dados da carta 2
    char pais2[50] = "Argentina";
    int populacao2 = 46044703;
    float area2 = 2780400.0;
    float pib2 = 0.63;
    int pontosTuristicos2 = 25;
    float densidade2 = populacao2 / area2;

    int opcao;

    printf("=== SUPER TRUNFO - COMPARACAO DE CARTAS ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de pontos turisticos\n");
    printf("5 - Densidade demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\n=== RESULTADO DA COMPARACAO ===\n");
    printf("Pais 1: %s\n", pais1);
    printf("Pais 2: %s\n", pais2);

    switch (opcao) {
        case 1:
            printf("Atributo escolhido: Populacao\n");
            printf("%s: %d\n", pais1, populacao1);
            printf("%s: %d\n", pais2, populacao2);

            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", pais1);
            } else {
                if (populacao2 > populacao1) {
                    printf("Vencedor: %s\n", pais2);
                } else {
                    printf("Empate!\n");
                }
            }
            break;

        case 2:
            printf("Atributo escolhido: Area\n");
            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n", pais2, area2);

            if (area1 > area2) {
                printf("Vencedor: %s\n", pais1);
            } else {
                if (area2 > area1) {
                    printf("Vencedor: %s\n", pais2);
                } else {
                    printf("Empate!\n");
                }
            }
            break;

        case 3:
            printf("Atributo escolhido: PIB\n");
            printf("%s: %.2f trilhoes\n", pais1, pib1);
            printf("%s: %.2f trilhoes\n", pais2, pib2);

            if (pib1 > pib2) {
                printf("Vencedor: %s\n", pais1);
            } else {
                if (pib2 > pib1) {
                    printf("Vencedor: %s\n", pais2);
                } else {
                    printf("Empate!\n");
                }
            }
            break;

        case 4:
            printf("Atributo escolhido: Numero de pontos turisticos\n");
            printf("%s: %d\n", pais1, pontosTuristicos1);
            printf("%s: %d\n", pais2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedor: %s\n", pais1);
            } else {
                if (pontosTuristicos2 > pontosTuristicos1) {
                    printf("Vencedor: %s\n", pais2);
                } else {
                    printf("Empate!\n");
                }
            }
            break;

        case 5:
            printf("Atributo escolhido: Densidade demografica\n");
            printf("%s: %.2f hab/km²\n", pais1, densidade1);
            printf("%s: %.2f hab/km²\n", pais2, densidade2);

            // Regra especial: menor densidade vence
            if (densidade1 < densidade2) {
                printf("Vencedor: %s\n", pais1);
            } else {
                if (densidade2 < densidade1) {
                    printf("Vencedor: %s\n", pais2);
                } else {
                    printf("Empate!\n");
                }
            }
            break;

        default:
            printf("Opcao invalida! Escolha um numero de 1 a 5.\n");
            break;
    }

    return 0;
}