#include <stdio.h>

// Função para exibir o nome do atributo
void mostrarNomeAtributo(int atributo) {
    switch (atributo) {
        case 1:
            printf("Populacao");
            break;
        case 2:
            printf("Area");
            break;
        case 3:
            printf("PIB");
            break;
        case 4:
            printf("Pontos Turisticos");
            break;
        case 5:
            printf("Densidade Demografica");
            break;
        default:
            printf("Atributo invalido");
    }
}

// Função para obter o valor do atributo da carta 1
float obterValorAtributoCarta1(int atributo, int populacao1, float area1, float pib1, int pontos1, float densidade1) {
    switch (atributo) {
        case 1:
            return populacao1;
        case 2:
            return area1;
        case 3:
            return pib1;
        case 4:
            return pontos1;
        case 5:
            return densidade1;
        default:
            return 0;
    }
}

// Função para obter o valor do atributo da carta 2
float obterValorAtributoCarta2(int atributo, int populacao2, float area2, float pib2, int pontos2, float densidade2) {
    switch (atributo) {
        case 1:
            return populacao2;
        case 2:
            return area2;
        case 3:
            return pib2;
        case 4:
            return pontos2;
        case 5:
            return densidade2;
        default:
            return 0;
    }
}

int main() {
    // Cartas pré-cadastradas
    char pais1[] = "Brasil";
    int populacao1 = 203062512;
    float area1 = 8515767.0;
    float pib1 = 2.13;
    int pontos1 = 30;
    float densidade1 = populacao1 / area1;

    char pais2[] = "Argentina";
    int populacao2 = 46044703;
    float area2 = 2780400.0;
    float pib2 = 0.64;
    int pontos2 = 25;
    float densidade2 = populacao2 / area2;

    int atributo1, atributo2;
    float valor1Carta1, valor1Carta2;
    float valor2Carta1, valor2Carta2;
    float somaCarta1, somaCarta2;

    printf("=== SUPER TRUNFO - DESAFIO FINAL ===\n");
    printf("Cartas em jogo:\n");
    printf("1. %s\n", pais1);
    printf("2. %s\n\n", pais2);

    printf("Escolha o primeiro atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &atributo1);

    printf("\nEscolha o segundo atributo:\n");

    switch (atributo1) {
        case 1:
            printf("2 - Area\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turisticos\n");
            printf("5 - Densidade Demografica\n");
            break;
        case 2:
            printf("1 - Populacao\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turisticos\n");
            printf("5 - Densidade Demografica\n");
            break;
        case 3:
            printf("1 - Populacao\n");
            printf("2 - Area\n");
            printf("4 - Pontos Turisticos\n");
            printf("5 - Densidade Demografica\n");
            break;
        case 4:
            printf("1 - Populacao\n");
            printf("2 - Area\n");
            printf("3 - PIB\n");
            printf("5 - Densidade Demografica\n");
            break;
        case 5:
            printf("1 - Populacao\n");
            printf("2 - Area\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turisticos\n");
            break;
        default:
            printf("Primeiro atributo invalido!\n");
            return 0;
    }

    printf("Opcao: ");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2) {
        printf("\nErro: voce nao pode escolher o mesmo atributo duas vezes.\n");
        return 0;
    }

    if (atributo2 < 1 || atributo2 > 5) {
        printf("\nErro: segundo atributo invalido.\n");
        return 0;
    }

    valor1Carta1 = obterValorAtributoCarta1(atributo1, populacao1, area1, pib1, pontos1, densidade1);
    valor1Carta2 = obterValorAtributoCarta2(atributo1, populacao2, area2, pib2, pontos2, densidade2);

    valor2Carta1 = obterValorAtributoCarta1(atributo2, populacao1, area1, pib1, pontos1, densidade1);
    valor2Carta2 = obterValorAtributoCarta2(atributo2, populacao2, area2, pib2, pontos2, densidade2);

    // Soma dos atributos
    // Para densidade demográfica, como menor valor vence, usamos o inverso na soma
    somaCarta1 = 0;
    somaCarta2 = 0;

    if (atributo1 == 5) {
        somaCarta1 += 1 / valor1Carta1;
        somaCarta2 += 1 / valor1Carta2;
    } else {
        somaCarta1 += valor1Carta1;
        somaCarta2 += valor1Carta2;
    }

    if (atributo2 == 5) {
        somaCarta1 += 1 / valor2Carta1;
        somaCarta2 += 1 / valor2Carta2;
    } else {
        somaCarta1 += valor2Carta1;
        somaCarta2 += valor2Carta2;
    }

    printf("\n=== RESULTADO DA RODADA ===\n");
    printf("Pais 1: %s\n", pais1);
    printf("Pais 2: %s\n\n", pais2);

    printf("Primeiro atributo: ");
    mostrarNomeAtributo(atributo1);
    printf("\n");
    printf("%s: %.2f\n", pais1, valor1Carta1);
    printf("%s: %.2f\n\n", pais2, valor1Carta2);

    printf("Segundo atributo: ");
    mostrarNomeAtributo(atributo2);
    printf("\n");
    printf("%s: %.2f\n", pais1, valor2Carta1);
    printf("%s: %.2f\n\n", pais2, valor2Carta2);

    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n", pais1, somaCarta1);
    printf("%s: %.2f\n\n", pais2, somaCarta2);

    if (somaCarta1 > somaCarta2) {
        printf("Vencedor: %s\n", pais1);
    } else if (somaCarta2 > somaCarta1) {
        printf("Vencedor: %s\n", pais2);
    } else {
        printf("Empate!\n");
    }

    // Exemplo de uso do operador ternário
    printf("Resumo: %s\n", (somaCarta1 > somaCarta2) ? pais1 : (somaCarta2 > somaCarta1) ? pais2 : "Empate");

    return 0;
}