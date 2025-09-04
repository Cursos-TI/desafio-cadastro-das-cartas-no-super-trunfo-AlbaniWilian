#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
        // Declaração de variáveis para a primeira carta
    char estado1;
    char codigoCarta1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade_populacional1;
    float pib_per_capita1;

    // Declaração de variáveis para a segunda carta
    char estado2;
    char codigoCarta2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade_populacional2;
    float pib_per_capita2;

    // --- CADASTRO DA PRIMEIRA CARTA ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigoCarta1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a Area (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Calculos para a primeira carta
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    // --- CADASTRO DA SEGUNDA CARTA ---
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", codigoCarta2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a Area (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calculos para a segunda carta
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // --- EXIBIÇÃO DAS INFORMAÇÕES DAS CARTAS ---
    printf("\n--- Informacoes das Cartas ---\n");

    // Exibindo a primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);
    printf("----------------------\n");

    // Exibindo a segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);
    printf("----------------------\n");

    return 0;
}
