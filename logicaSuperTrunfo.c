#include <stdio.h>

int main() {

    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[100];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float percapita1;
    float superPoder1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[100];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float percapita2;
    float superPoder2;

    // Entrada dos dados - Carta 1
    printf("**Carta 1** \n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código do estado (ex A01): ");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade (sem espaços): ");
    scanf(" %s", cidade1);

    printf("Digite a população da cidade (números inteiros): ");
    scanf(" %lu", &populacao1);

    printf("Digite a área em km²: ");
    scanf(" %f", &area1);

    printf("Digite o PIB da área: ");
    scanf(" %f", &pib1);

    printf("Informe o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    densidade1 = populacao1 / area1;
    printf("A densidade populacional é: %f\n", densidade1);

    percapita1 = pib1 / populacao1;
    printf("O PIB per capita é: %f\n", percapita1);

    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + percapita1 + (1.0 / densidade1);

    // Entrada dos dados - Carta 2
    printf("\n**Carta 2** \n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código do estado (ex B02): ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade (sem espaço): ");
    scanf(" %s", cidade2);

    printf("Digite a população da cidade (número inteiro): ");
    scanf(" %lu", &populacao2);

    printf("Digite a área em km²: ");
    scanf(" %f", &area2);

    printf("Digite o PIB da área: ");
    scanf(" %f", &pib2);

    printf("Informe o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;
    printf("A densidade populacional é: %f\n", densidade2);

    percapita2 = pib2 / populacao2;
    printf("O PIB per capita é: %f\n", percapita2);

    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + percapita2 + (1.0 / densidade2);

    // Comparações
    int compPopulacao = populacao1 > populacao2;
    int compArea = area1 > area2;
    int compPIB = pib1 > pib2;
    int compTurismo = pontosTuristicos1 > pontosTuristicos2;
    int compDensidade = densidade1 < densidade2; 
    int compPercapita = percapita1 > percapita2;
    int compSuperPoder = superPoder1 > superPoder2;

    // Saída
    printf("\nComparação de Cartas:\n");

    printf("População: Carta 1 venceu (%d) | Carta 2 venceu (%d)\n", compPopulacao, !compPopulacao);
    printf("Área: Carta 1 venceu (%d) | Carta 2 venceu (%d)\n", compArea, !compArea);
    printf("PIB: Carta 1 venceu (%d) | Carta 2 venceu (%d)\n", compPIB, !compPIB);
    printf("Pontos Turísticos: Carta 1 venceu (%d) | Carta 2 venceu (%d)\n", compTurismo, !compTurismo);
    printf("Densidade Populacional: Carta 1 venceu (%d) | Carta 2 venceu (%d)\n", compDensidade, !compDensidade);
    printf("PIB per Capita: Carta 1 venceu (%d) | Carta 2 venceu (%d)\n", compPercapita, !compPercapita);
    printf("Super Poder: Carta 1 venceu (%d) | Carta 2 venceu (%d)\n", compSuperPoder, !compSuperPoder);

    printf("\nComparação de cartas (Atributo: população):\n");
    printf("Carta 1 - %s: %lu\n", cidade1, populacao1);
    printf("Carta 2 - %s: %lu\n", cidade2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf ("Resultado: Empate!\n");
    }

    printf("\nComparação de cartas (Atributo: área em km²):\n");
    printf("Carta 1 - %s: %lu\n", cidade1, area1);
    printf("Carta 2 - %s: %lu\n", cidade2, area2);

    if (area1 > area2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (area2 > area1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf ("Resultado: Empate!\n");
    }

    printf("\nComparação de cartas (Atributo: PIB):\n");
    printf("Carta 1 - %s: %lu\n", cidade1, pib1);
    printf("Carta 2 - %s: %lu\n", cidade2, pib2);

    if (pib1 > pib2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (pib2 > pib1){
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf ("Resultado: Empate!\n");
    }

    printf("\nComparação de cartas (Atributo: Pontos Turísticos):\n");
    printf("Carta 1 - %s: %lu\n", cidade1, pontosTuristicos1);
    printf("Carta 2 - %s: %lu\n", cidade2, pontosTuristicos2);

    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (pontosTuristicos2 > pontosTuristicos1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf ("Resultado: Empate!\n");
    }

    return 0;
}