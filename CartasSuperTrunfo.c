#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
int main() {
    char estado1[50],estado2[50];
    char codigo1[50], codigo2[50];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float pib1, pib2;
    float area1, area2;
    int pontos_turisticos1, pontos_turisticos2;
    float pib_per_capita1, pib_per_capita2;
    float densidade1, densidade2;
    float super_poder1, super_poder2;

    //Entrada de dados da primeira carta
    printf("Carta 1\n");
    printf("Estado:\n");
    scanf("%s", estado1);
    printf("Codigo da carta:\n");
    scanf("%s", codigo1);
    printf("Nome da cidade:\n");
    scanf("%s", &cidade1);
    printf("Populacao da cidade:\n");
    scanf("%lu", &populacao1);
    printf("PIB da cidade:\n");
    scanf("%f", &pib1);
    printf("Area da cidade:\n");
    scanf("%f", &area1);
    printf("Numero de pontos turisticos da cidade:\n");
    scanf("%d", &pontos_turisticos1);


    //Entrada de dados da segunda carta
    printf("Carta 2\n");
    printf("Estado:\n");
    scanf("%s", estado2);
    printf("Codigo da carta:\n");
    scanf("%s", &codigo2);
    printf("Nome da cidade:\n");
    scanf("%s", &cidade2);
    printf("Populacao da cidade:\n");
    scanf("%lu", &populacao2);
    printf("PIB da cidade:\n");
    scanf("%f", &pib2);
    printf("Area da cidade:\n");
    scanf("%f", &area2);
    printf("Numero de pontos turisticos da cidade:\n");
    scanf("%d", &pontos_turisticos2);

    //Calculo de densidade e pib per capita das carta
    densidade1 = (float)populacao1 / area1;
    pib_per_capita1 = pib1 / (float)populacao1;
    super_poder1 = populacao1 + pib1 + area1 + pontos_turisticos1 + pib_per_capita1 +  (1 /densidade1);


    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 / (float)populacao2;
    super_poder2 = populacao2 + pib2 + area2 + pontos_turisticos2 + pib_per_capita2 +  (1 /densidade2);


    //Exibicao dos resultados das cartas
    printf("Carta 1\n"
        "Estado: %s\n"
        "Codigo da carta: %s\n"
        "Nome da cidade: %s\n"
        "Populacao da cidade: %lu\n"
        "PIB da cidade: %.2f\n"
        "Area da cidade: %.2f\n"
        "Numero de pontos turisticos da cidade: %d\n"
        "Densidade populacional: %.2f\n"
        "PIB per capita: %.2f\n"
        "Super poder: %.2f\n",
        estado1, codigo1, cidade1, populacao1, pib1, area1,
        pontos_turisticos1, densidade1, pib_per_capita1, super_poder1);


     printf("Carta 2\n"
        "Estado: %s\n"
        "Codigo da carta: %s\n"
        "Nome da cidade: %s\n"
        "Populacao da cidade: %lu\n"
        "PIB da cidade: %.2f\n"
        "Area da cidade: %.2f\n"
        "Numero de pontos turisticos da cidade: %d\n"
        "Densidade populacional: %.2f\n"
        "PIB per capita: %.2f\n"
        "Super poder: %.2f\n",
        estado2, codigo2, cidade2, populacao2, pib2, area2,
        pontos_turisticos2, densidade2, pib_per_capita2, super_poder2);


        printf("Comparacao de Cartas: \n");
        printf("População: %d\n", (int)(populacao1 > populacao2));
        printf("Área: %d\n", (int)(area1 > area2));
        printf("PIB: %d\n", (int)(pib1 > pib2));
        printf("Pontos Turísticos: %d\n", (int)(pontos_turisticos1 > pontos_turisticos2));
        printf("Densidade Populacional: %d\n", (int)(densidade1 > densidade2));
        printf("PIB per Capita: %d\n", (int)(pib_per_capita1 > pib_per_capita2));
        printf("Super Poder: %d\n", (int)(super_poder1 > super_poder2));


    return 0;
}

