#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  
    char estado1[2];
    char codigo1[4];
    char nome_da_cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    char estado2[2];
    char codigo2[4];
    char nome_da_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Área para entrada de dados

    printf("Cadastro da Carta 1\n");
    printf("Estado: ");
    scanf("%s", estado1);

    printf("Codigo da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", nome_da_cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("\nCadastro da Carta 2\n");
    printf("Estado: ");
    scanf("%s", estado2);

    printf("Codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", nome_da_cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

      // Área para exibição dos dados da cidade

printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", nome_da_cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos turisticos: %d\n", pontos_turisticos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", nome_da_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);


      return 0;
      } 
      
      