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

    int escolha;
    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    printf("Digite o número correspondente: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1: // População
            printf("\nComparação: População\n");
            if (populacao1 > populacao2) {
                if (populacao1 > 1000000)
                    printf("Carta 1 venceu com maior população!\n");
            } else if (populacao2 > populacao1) {
                if (populacao2 > 1000000)
                    printf("Carta 2 venceu com maior população!\n");
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área
            printf("\nComparação: Área\n");
            if (area1 > area2) {
                if (area1 > 5000)
                    printf("Carta 1 venceu com uma área maior!\n");               
            } else if (area2 > area1) {
                if (area2 > 5000)
                    printf("Carta 2 venceu com uma área maior!\n");
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("\nComparação: PIB\n");
            if (pib1 > pib2) {
                if (pib1 > 100000)
                    printf("Carta 1 venceu com um PIB maior!\n");
            } else if (pib2 > pib1) {
                if (pib2 > 100000)
                    printf("Carta 2 venceu com um PIB maior!\n");
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Pontos turísticos
            printf("\nComparação: Pontos Turísticos\n");
            if (pontosTuristicos1 > pontosTuristicos2) {
                if (pontosTuristicos1 >= 10)
                    printf("Carta 1 venceu: mais pontos turísticos!\n");
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                if (pontosTuristicos2 >= 10)
                    printf("Carta 2 venceu: mais pontos turísticos!\n");
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade populacional (quanto MENOR, melhor qualidade de vida)
            printf("\nComparação: Densidade Populacional\n");
            if (densidade1 < densidade2) {
                if (densidade1 < 100)
                    printf("Carta 1 venceu: densidade menor!\n");
            } else if (densidade2 < densidade1) {
                if (densidade2 < 100)
                    printf("Carta 2 venceu: densidade menor!\n");
            } else {
                printf("Empate!\n");
            }
            break;

        case 6: // PIB per capita
            printf("\nComparação: PIB per capita\n");
            if (percapita1 > percapita2) {
                if (percapita1 > 50000)
                    printf("Carta 1 venceu: PIB maior!\n");
            } else if (percapita2 > percapita1) {
                if (percapita2 > 50000)
                    printf("Carta 2 venceu: PIB maior!\n");
            } else {
                printf("Empate!\n");
            }
            break;

        case 7: // Super Poder (atributo "misturadão")
            printf("\nComparação: Super Poder\n");
            if (superPoder1 > superPoder2) {
                printf("Carta 1 venceu com super poder!\n");
            } else if (superPoder2  > superPoder1) {
                printf("Carta 2 venceu com super poder!\n");
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida. Tente novamente!\n");
    }
    
        int opcao1, opcao2;

    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    scanf("%d", &opcao1);

    printf("\nEscolha o segundo atributo para comparação (diferente do primeiro):\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2) {
        printf("Você escolheu o mesmo atributo duas vezes. Tente novamente executando o programa.");
        return 0;
    }

    float valor1A = 0, valor2A = 0;
    float valor1B = 0, valor2B = 0;

    if (opcao1 == 1) { valor1A = populacao1; valor2A = populacao2; }
    else if (opcao1 == 2) { valor1A = area1; valor2A = area2; }
    else if (opcao1 == 3) { valor1A = pib1; valor2A = pib2; }
    else if (opcao1 == 4) { valor1A = pontosTuristicos1; valor2A = pontosTuristicos2; }
    else if (opcao1 == 5) { valor1A = densidade1; valor2A = densidade2; }
    else if (opcao1 == 6) { valor1A = percapita1; valor2A = percapita2; }
    else if (opcao1 == 7) { valor1A = superPoder1; valor2A = superPoder2; }

    if (opcao2 == 1) { valor1B = populacao1; valor2B = populacao2; }
    else if (opcao2 == 2) { valor1B = area1; valor2B = area2; }
    else if (opcao2 == 3) { valor1B = pib1; valor2B = pib2; }
    else if (opcao2 == 4) { valor1B = pontosTuristicos1; valor2B = pontosTuristicos2; }
    else if (opcao2 == 5) { valor1B = densidade1; valor2B = densidade2; }
    else if (opcao2 == 6) { valor1B = percapita1; valor2B = percapita2; }
    else if (opcao2 == 7) { valor1B = superPoder1; valor2B = superPoder2; }

    int venceu1A = 0;
    int venceu1B = 0;

    if (opcao1 == 5) {
        if (valor1A < valor2A) venceu1A = 1;
    } else {
        if (valor1A > valor2A) venceu1A = 1;
    }

    if (opcao2 == 5) {
        if (valor1B < valor2B) venceu1B = 1;
    } else {
        if (valor1B > valor2B) venceu1B = 1;
    }

    float soma1 = valor1A + valor1B;
    float soma2 = valor2A + valor2B;

    printf("\nComparando as cartas: %s vs %s\n", cidade1, cidade2);
    printf("Atributo 1 (%d): %.2f x %.2f => %s venceu\n", opcao1, valor1A, valor2A, venceu1A ? cidade1 : cidade2);
    printf("Atributo 2 (%d): %.2f x %.2f => %s venceu\n", opcao2, valor1B, valor2B, venceu1B ? cidade1 : cidade2);

    printf("\nSoma dos atributos:\n%s: %.2f\n%s: %.2f\n", cidade1, soma1, cidade2, soma2);

    if (soma1 > soma2) {
        printf("Resultado final: %s venceu a rodada!\n", cidade1);
    } else if (soma2 > soma1) {
        printf("Resultado final: %s venceu a rodada!\n", cidade2);
    } else {
        printf("Resultado final: Empate!\n");
    }

    return 0;
}
