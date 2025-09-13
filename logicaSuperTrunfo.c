#include <stdio.h>
#include <string.h>

int main() {
    // -------- VARIÁVEIS --------
    char nome1[50], nome2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    int escolha;

    // -------- ENTRADA DE DADOS --------
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o nome do país: ");
    scanf(" %[^\n]", nome1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o nome do país: ");
    scanf(" %[^\n]", nome2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // ------ CÁLCULOS ------
    float densidade1 = (float)populacao1 / area1;
    float pibPerCapita1 = pib1 / (float) populacao1;
    float densidade2 = (float)populacao2 / area2;
    float pibPerCapita2 = pib2 / (float) populacao2;


    // ------ MENU ------
    printf("\n=== Escolha o atributo para comparação ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB Per Capita\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &escolha);

    printf("\n=== Comparação de Cartas ===\n");

    // -------- SWITCH PARA COMPARAÇÃO --------
    switch (escolha) {
        case 1: // População
            printf("Comparando População:\n");
            printf("%s: %lu\n", nome1, populacao1);
            printf("%s: %lu\n", nome2, populacao2);

            if (populacao1 > populacao2)
                printf("Resultado: %s venceu!\n", nome1);
            else if (populacao2 > populacao1)
                printf("Resultado: %s venceu!\n", nome2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 2: // Área
            printf("Comparando Área:\n");
            printf("%s: %.2f km²\n", nome1, area1);
            printf("%s: %.2f km²\n", nome2, area2);

            if (area1 > area2)
                printf("Resultado: %s venceu!\n", nome1);
            else if (area2 > area1)
                printf("Resultado: %s venceu!\n", nome2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 3: // PIB
            printf("Comparando PIB:\n");
            printf("%s: %.2f\n", nome1, pib1);
            printf("%s: %.2f\n", nome2, pib2);

            if (pib1 > pib2)
                printf("Resultado: %s venceu!\n", nome1);
            else if (pib2 > pib1)
                printf("Resultado: %s venceu!\n", nome2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 4: // Pontos Turísticos
            printf("Comparando Pontos Turísticos:\n");
            printf("%s: %d\n", nome1, pontosTuristicos1);
            printf("%s: %d\n", nome2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Resultado: %s venceu!\n", nome1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Resultado: %s venceu!\n", nome2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 5: // Densidade Demográfica (MENOR VENCE)
            printf("Comparando Densidade Demográfica:\n");
            printf("%s: %.2f hab/km²\n", nome1, densidade1);
            printf("%s: %.2f hab/km²\n", nome2, densidade2);

            if (densidade1 < densidade2)
                printf("Resultado: %s venceu!\n", nome1);
            else if (densidade2 < densidade1)
                printf("Resultado: %s venceu!\n", nome2);
            else
                printf("Resultado: Empate!\n");
            break;

          case 6: // PIB Per Capita (MAIOR VENCE)
            printf("PIB per Capita:\n");
            printf("%s: PIB Per Capita: %.2f reais\n", nome1, pibPerCapita1);
            printf("%s: PIB Per Capita: %.2f reais\n", nome2, pibPerCapita2);

            if (pibPerCapita1 > pibPerCapita2)
                printf("Resultado: %s venceu!\n", nome1);
            else if (pibPerCapita1 < pibPerCapita2)
                printf("Resultado: %s venceu!\n", nome2);
            else
                printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
    }

    return 0;
}