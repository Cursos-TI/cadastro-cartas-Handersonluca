#include <stdio.h>

// Programa de cadastro de cartas do Super Trunfo
// O usuario digita os dados das cartas e o programa exibe as informacoes cadastradas

int main(){

    // CARTA 1
    char estado1;        // letra que representa o estado
    char codigo1[10];    // codigo da carta (ex: A01)
    char cidade1[50];    // nome da cidade
    int populacao1;      // numero de habitantes
    float area1;         // area da cidade
    float pib1;          // PIB da cidade
    int pontos1;         // quantidade de pontos turisticos

    // CARTA 2
    char estado2;
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    printf("=== Cadastro Carta 1 ===\n");

    printf("Estado (letra): ");
    scanf(" %c", &estado1);   // scanf le o valor digitado e guarda na variavel

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf("%s", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1); // & indica o endereco da variavel para ser alterada

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);


    printf("\n=== Cadastro Carta 2 ===\n");

    printf("Estado (letra): ");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf("%s", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);


    printf("\n=== CARTAS CADASTRADAS ===\n");

    // printf mostra os dados na tela
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);

    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);

    return 0;
}