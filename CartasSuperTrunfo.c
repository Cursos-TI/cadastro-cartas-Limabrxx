#include <stdio.h>

int main() {

  //=================================//
  //=Declaracao de variaveis carta 1=//
  //=================================//

  char estado1;
  char codigo1[10];
  char cidade1[40];
  int populacao1;
  float area1;
  float pib1;
  int pontosturisticos1;

  //=================================//
  //=Declaracao de variaveis carta 2=//
  //=================================//

  char estado2;
  char codigo2[10];
  char cidade2[40];
  int populacao2;
  float area2;
  float pib2;
  int pontosturisticos2;


  //===============================//
  //==Entrada de Dados da Carta 1==//
  //===============================//

  printf("===Cadastro da carta 1===\n");

  printf("Estado (letra de A a H): ");
  scanf(" %c", &estado1);

  printf("Codigo da carta (ex:A01): ");
  scanf(" %[^\n]", codigo1);

  printf("Nome da cidade: ");
  scanf(" %[^\n]", cidade1);

  printf("Numero de Habitantes: ");
  scanf(" %d", &populacao1);

  printf("Area (em km2): ");
  scanf(" %f", &area1);

  printf("PIB (em  bilhoes de reais): ");
  scanf(" %f", &pib1);

  printf("Numero da pontos turisticos: ");
  scanf(" %d", &pontosturisticos1);

  //===============================//
  //==Entrada de Dados da Carta 2==//
  //===============================//

  printf("\n===Cadastro da Carta 2===\n");

  printf("Estado (letra de A a H): ");
  scanf(" %c", &estado2);

  printf("Codigo da carta (ex:B02); ");
  scanf(" %[^\n]", codigo2);

  printf("Nome da cidade:");
  scanf(" %[^\n]", cidade2);

  printf("Numero de Habitantes: ");
  scanf(" %d", &populacao2);

  printf("Area (em km2): ");
  scanf(" %f", &area2);

  printf("PIB (em bilhoes de reais): ");
  scanf(" %f", &pib2);

  printf("Numero de pontos turisticos: ");
  scanf(" %d", &pontosturisticos2);

  printf("\n\n===Cartas cadastradas===\n\n");

  printf("Carta 1: \n");
  printf("Estado: %c\n", estado1);
  printf("Codigo da Carta: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("Numero de Habitantes: %d\n", populacao1);
  printf("Area: %f km2\n", area1);
  printf("PIB: %f bilhoes de reais\n", pib1);
  printf("Pontos Turisticos: %d\n", pontosturisticos1);

  printf("\n==========================\n\n");

  printf("Carta 2: \n");
  printf("Estado: %c\n", estado2);
  printf("Codigo da Carta: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("Numero de Habitantes: %d\n", populacao2);
  printf("Area: %f km2\n", area2);
  printf("PIB: %f bilhoes de reais\n", pib2);
  printf("Pontos Turisticos: %d\n", pontosturisticos2);



return 0;
} 
