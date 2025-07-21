#include <stdio.h>
#include <stdlib.h>

#define QTD_CARTAS 2

typedef struct {
    char estado;
    char codigoCarta[5];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

int main() {
    Carta cartas[QTD_CARTAS];

    for (int i = 0; i < QTD_CARTAS; i++) {
        printf("\n--- Cadastro da Carta %d ---\n", i + 1);

        printf("Estado (A-H): ");
        scanf(" %c", &cartas[i].estado);

        printf("Codigo da Carta (ex: A01): ");
        scanf("%s", cartas[i].codigoCarta);

        printf("Nome da Cidade: ");
        scanf(" %[^\n]", cartas[i].nomeCidade);

        printf("Populacao: ");
        scanf("%d", &cartas[i].populacao);

        printf("Area (km²): ");
        scanf("%f", &cartas[i].area);

        printf("PIB: ");
        scanf("%f", &cartas[i].pib);

        printf("Numero de Pontos Turisticos: ");
        scanf("%d", &cartas[i].pontosTuristicos);
    }

    printf("\n--- Dados das Cartas Cadastradas ---\n");
    for (int i = 0; i < QTD_CARTAS; i++) {
        printf("\nCarta %d:\n", i + 1);
        printf("Estado: %c\n", cartas[i].estado);
        printf("Codigo da Carta: %s\n", cartas[i].codigoCarta);
        printf("Nome da Cidade: %s\n", cartas[i].nomeCidade);
        printf("Populacao: %d\n", cartas[i].populacao);
        printf("Area: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f\n", cartas[i].pib);
        printf("Pontos Turisticos: %d\n", cartas[i].pontosTuristicos);
    }

    return 0;
}