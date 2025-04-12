#include <stdio.h>

struct Carta {
    char estado;
    char codigo[4];
    char nomeCidade[100];
    unsigned long int populacao;
    float area;
    float pib; // em bilhões
    int pontosTuristicos;
};

int main() {
    struct Carta carta1, carta2;

    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Leitura da Carta 1
    printf("Cadastro da Carta 1\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Código (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);

    printf("População: ");
    scanf("%lu", &carta1.populacao);

    printf("Área (km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhões de R$): ");
    scanf("%f", &carta1.pib);

    printf("Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    printf("\n---------------------------------------------\n");

    // Leitura da Carta 2
    printf("Cadastro da Carta 2\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Código (ex: B02): ");
    scanf("%s", carta2.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("População: ");
    scanf("%lu", &carta2.populacao);

    printf("Área (km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhões de R$): ");
    scanf("%f", &carta2.pib);

    printf("Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculo das métricas adicionais
    densidade1 = carta1.populacao / carta1.area;
    densidade2 = carta2.populacao / carta2.area;

    pibPerCapita1 = (carta1.pib * 1000000000.0) / carta1.populacao;
    pibPerCapita2 = (carta2.pib * 1000000000.0) / carta2.populacao;

    superPoder1 = (float)carta1.populacao + carta1.area + (carta1.pib * 1000000000.0) +
                  (float)carta1.pontosTuristicos + pibPerCapita1 + (1.0f / densidade1);

    superPoder2 = (float)carta2.populacao + carta2.area + (carta2.pib * 1000000000.0) +
                  (float)carta2.pontosTuristicos + pibPerCapita2 + (1.0f / densidade2);

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %lu\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n---------------------------------------------\n");

    // Exibição dos dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %lu\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // Exibição de Comparações
              printf("\n============= COMPARAÇÃO DE CARTA ============\n");

              printf("População: ");
              if (carta1.populacao > carta2.populacao)
                  printf("Carta 1 venceu (1)\n");
              else if (carta1.populacao < carta2.populacao)
                  printf("Carta 2 venceu (2)\n");
              else
                  printf("Empate (0)\n");

              printf("Área: ");
              if (carta1.area > carta2.area)
                  printf("Carta 1 venceu (1)\n");
              else if (carta1.area < carta2.area)
                  printf("Carta 2 venceu (2)\n");
              else
                  printf("Empate (0)\n");

              printf("PIB: ");
              if (carta1.pib > carta2.pib)
                  printf("Carta 1 venceu (1)\n");
              else if (carta1.pib < carta2.pib)
                  printf("Carta 2 venceu (2)\n");
              else
                  printf("Empate (0)\n");

              printf("Pontos Turísticos: ");
              if (carta1.pontosTuristicos > carta2.pontosTuristicos)
                  printf("Carta 1 venceu (1)\n");
              else if (carta1.pontosTuristicos < carta2.pontosTuristicos)
                  printf("Carta 2 venceu (2)\n");
              else
                  printf("Empate (0)\n");

              printf("Densidade Populacional (menor vence): ");
              if (densidade1 < densidade2)
                  printf("Carta 1 venceu (1)\n");
              else if (densidade1 > densidade2)
                  printf("Carta 2 venceu (2)\n");
              else
                  printf("Empate (0)\n");

              printf("PIB per Capita: ");
              if (pibPerCapita1 > pibPerCapita2)
                  printf("Carta 1 venceu (1)\n");
              else if (pibPerCapita1 < pibPerCapita2)
                  printf("Carta 2 venceu (2)\n");
              else
                  printf("Empate (0)\n");

              printf("Super Poder: ");
              if (superPoder1 > superPoder2)
                  printf("Carta 1 venceu (1)\n");
              else if (superPoder1 < superPoder2)
                  printf("Carta 2 venceu (2)\n");
              else
                  printf("Empate (0)\n");

    return 0;
}
