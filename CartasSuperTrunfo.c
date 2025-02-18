#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado[50];
    char codigo[50];
    char cidade[50];
    int populacao;
    float pib;
    float area;
    int pontos_turisticos;

    printf("Estado:\n");
    scanf("%s", estado);
    printf("Codigo da carta:\n");
    scanf("%s", &codigo);
    printf("Nome da cidade:\n");
    scanf("%s", cidade);
    printf("Populacao da cidade:\n");
    scanf("%d", &populacao);
    printf("PIB da cidade:\n");
    scanf("%f", &pib);
    printf("Area da cidade:\n");
    scanf("%f", &area);
    printf("Numero de pontos turisticos da cidade:\n");
    scanf("%d", &pontos_turisticos);
    printf("Estado: %s\nCodigo da carta: %s\nNome da cidade: %s\nPopulacao da cidade: %.2d\nPIB da cidade: %.2f\nArea da cidade: %.2f\nNumero de pontos turisticos da cidade: %d\n", estado, codigo, cidade, populacao, pib, area, pontos_turisticos);
    return 0;
}
