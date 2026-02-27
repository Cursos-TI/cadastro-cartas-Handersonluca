#include <stdio.h>

int main() {
    // CARTA 1
    char estado1[] = "Rio de Janeiro";
    char carta1[] = "A01";
    char cidade1[] = "Rio de Janeiro";
    int populacao1 = 6730729;
    float area1 = 43.696;
    float pib1 = 1.17;
    int turisticos1 = 100;

    // CARTA 2
    char estado2[] = "Sao Paulo";
    char carta2[] = "A02";
    char cidade2[] = "Sao Paulo";
    int populacao2 = 11904961;
    float area2 = 1521.0;
    float pib2 = 3.44;
    int turisticos2 = 20;

    printf("Comparacao de cartas (atributo: populacao):\n\n");

    printf("Carta1 %s (%s): %d\n", cidade1, estado1, populacao1);
    printf("Carta2 %s (%s): %d\n\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("A carta1 venceu essa rodada!");
    } else if (populacao2 > populacao1) {
        printf("A carta2 venceu essa rodada!");
    } else {
        printf("EMPATE");
    }

    return 0;
}