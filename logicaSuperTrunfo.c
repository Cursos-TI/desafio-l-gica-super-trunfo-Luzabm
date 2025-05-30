#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Dados da Carta 1
    char estado1[30], codigo1[10], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidade1, pibPerCapita1;

    // Dados da Carta 2
    char estado2[30], codigo2[10], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidade2, pibPerCapita2;

    
    // Cadastro das Cartas:
    printf("\n===== Cadastro da Carta 1 =====\n");
    printf("Digite o estado: ");
    scanf(" %[^\n]", estado1);

    printf("Digite o código da carta: ");
    scanf(" %[^\n]", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em milhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculo da densidade populacional e PIB per capita
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000) / populacao1;

     printf("\n===== Cadastro da Carta 2 =====\n");

    printf("Digite o estado: ");
    scanf(" %[^\n]", estado2);

    printf("Digite o código da carta: ");
    scanf(" %[^\n]", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em milhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade populacional e PIB per capita
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000) / populacao2;

    // Exibição dos Resultados:
    printf("\n========== Dados das Cartas ==========\n");

    printf("\nCarta 1 - %s (%s)\n", nomeCidade1, estado1);
    printf("Código: %s\n", codigo1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f milhões/hab\n", pibPerCapita1);

    printf("\nCarta 2 - %s (%s)\n", nomeCidade2, estado2);
    printf("Código: %s\n", codigo2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f milhões/hab\n", pibPerCapita2);

    // Comparação de Cartas:
   printf("\n========== Comparação das Cartas ==========\n");
printf(">>> Atributo de comparação: POPULAÇÃO <<<\n\n");

printf("-> %s (%s): %d habitantes\n", nomeCidade1, estado1, populacao1);
printf("-> %s (%s): %d habitantes\n", nomeCidade2, estado2, populacao2);

// Estrutura de decisão para determinar o vencedor
if (populacao1 > populacao2) {
    printf("\n Resultado: A carta vencedora é %s (%s) com POPULAÇÃO de %d habitantes.\n", 
            nomeCidade1, estado1, populacao1);
} else if (populacao2 > populacao1) {
    printf("\n Resultado: A carta vencedora é %s (%s) com POPULAÇÃO de %d habitantes.\n", 
            nomeCidade2, estado2, populacao2);
} else {
    printf("\n Resultado: Empate! Ambas as cidades têm POPULAÇÃO de %d habitantes.\n", populacao1);
}

printf("============================================\n");

    return 0;
}
