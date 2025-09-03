#include <stdio.h>

int main() {

    // Carta 1
    char estado1;
    char codigo1[10];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Carta 2
    char estado2;
    char codigo2[10];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada de dados da Carta 1
    printf("Digite o estado da Carta 1: ");
    scanf(" %c", &estado1);

    printf("Digite o código da Carta 1: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da Carta 2
    printf("\nDigite o estado da Carta 2: ");
    scanf(" %c", &estado2);

    printf("Digite o código da Carta 2: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    float densidade1 = (float) populacao1 / area1;
    float pibPerCapita1 = pib1 / (float) populacao1;

    float densidade2 = (float) populacao2 / area2;
    float pibPerCapita2 = pib2 / (float) populacao2;

    // Super Poder = população + área + PIB + pontos turísticos + PIB per capita + (1 / densidade)
    float superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);
    float superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // Exibição da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional:  %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibição da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // ----------- Comparações -----------
// ----------- Comparações com Placar -----------
    printf("\nComparação de Cartas:\n");

    int pontos1 = 0, pontos2 = 0;

    // População
    if (populacao1 > populacao2) { printf("População: Carta 1 venceu\n"); pontos1++; }
    else if (populacao2 > populacao1) { printf("População: Carta 2 venceu\n"); pontos2++; }
    else { printf("População: Empate\n"); }

    // Área
    if (area1 > area2) { printf("Área: Carta 1 venceu\n"); pontos1++; }
    else if (area2 > area1) { printf("Área: Carta 2 venceu\n"); pontos2++; }
    else { printf("Área: Empate\n"); }

    // PIB
    if (pib1 > pib2) { printf("PIB: Carta 1 venceu\n"); pontos1++; }
    else if (pib2 > pib1) { printf("PIB: Carta 2 venceu\n"); pontos2++; }
    else { printf("PIB: Empate\n"); }

    // Pontos turísticos
    if (pontosTuristicos1 > pontosTuristicos2) { printf("Pontos Turísticos: Carta 1 venceu\n"); pontos1++; }
    else if (pontosTuristicos2 > pontosTuristicos1) { printf("Pontos Turísticos: Carta 2 venceu\n"); pontos2++; }
    else { printf("Pontos Turísticos: Empate\n"); }

    // Densidade populacional (menor vence)
    if (densidade1 < densidade2) { printf("Densidade Populacional: Carta 1 venceu\n"); pontos1++; }
    else if (densidade2 < densidade1) { printf("Densidade Populacional: Carta 2 venceu\n"); pontos2++; }
    else { printf("Densidade Populacional: Empate\n"); }

    // PIB per capita
    if (pibPerCapita1 > pibPerCapita2) { printf("PIB per Capita: Carta 1 venceu\n"); pontos1++; }
    else if (pibPerCapita2 > pibPerCapita1) { printf("PIB per Capita: Carta 2 venceu\n"); pontos2++; }
    else { printf("PIB per Capita: Empate\n"); }

    // Super Poder
    if (superPoder1 > superPoder2) { printf("Super Poder: Carta 1 venceu\n"); pontos1++; }
    else if (superPoder2 > superPoder1) { printf("Super Poder: Carta 2 venceu\n"); pontos2++; }
    else { printf("Super Poder: Empate\n"); }

    // Resultado final
    printf("\nPlacar Final → Carta 1: %d | Carta 2: %d\n", pontos1, pontos2);
    if (pontos1 > pontos2) printf("Vencedor: Carta 1!\n");
    else if (pontos2 > pontos1) printf("Vencedor: Carta 2!\n");
    else printf("Resultado: Empate!\n");

    return 0;
}
