#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Melhorado com soma dos atributos


int main() {
    char pais[50];
    int populacao1, populacao2, resultado;
    float pib1, pib2;
    float area1, area2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade1, densidade2;
    int jogador;
    float soma1, soma2;

    printf("##Menu do jogo super trunfo##\n");
    printf("-------------------------------\n");
    printf("Escolha uma das opcoes abaixo\n");
    printf("1. Pais\n");
    printf("2. Populacao\n");
    printf("3. PIB\n");
    printf("4. Pontos turisticos\n");
    printf("5. Densidade\n");
    printf("6. Area\n");
    printf("-------------------------------\n");
    printf("##Escolha uma das opcoes acima##\n");
    scanf("%d", &jogador);

    switch (jogador){
    case 1:
        printf("Digite o pais escolhido\n");
        scanf("%s", &pais);
        break;
    case 2:
        printf("Escolha a populacao 1:\n");
        scanf("%d", &populacao1);
        printf("Escolha a populacao 2:\n");
        scanf("%d", &populacao2);
        soma1 += populacao1;
        soma2 += populacao2;
        resultado = (populacao1 > populacao2) ? 1 : (populacao1 < populacao2 ? 2 : 0);

        if(resultado == 1){
            printf("A populaca 1 ganhou parabens\n");
        }else if (resultado == 2){
            printf("A populaca 2 ganhou parabens\n");
        }else {
            printf("Empate\n");
        }
        break;
    case 3:
        printf("Escolha o PIB 1:\n");
        scanf("%f", &pib1);
        printf("Escolha o PIB 2:\n");
        scanf("%f", &pib2);
        soma1 += pib1;
        soma2 += pib2;
        resultado = (pib1 > pib2) ? 1 : (pib2 < pib2 ? 2 : 0);

        if(resultado == 1){
            printf("O PIB 1 ganhou parabens\n");
        }else if (resultado == 2){
            printf("O PIB 2 ganhou parabens\n");
        }else {
            printf("Empate\n");
        }
        break;
    case 4:
        printf("Escolha a quantidade de pontos turisticos:\n");
        scanf("%d", &pontos_turisticos1);
        printf("Escolha a quantidade de pontos turisticos:\n");
        scanf("%d", &pontos_turisticos2);
        soma1 += pontos_turisticos1;
        soma2 += pontos_turisticos2;
        resultado = (pontos_turisticos1 > pontos_turisticos2) ? 1 : (pontos_turisticos1 < pontos_turisticos2 ? 2 : 0);

        if(resultado == 1){
            printf("Ponto turistico 1 ganhou parabens\n");
        }else if (resultado == 2){
            printf("Ponto turistico 2 ganhou parabens\n");
        }else {
            printf("Empate\n");
        }
        break;
    case 5:
        printf("Escolha a densidade:\n");
        scanf("%f", &densidade1);
        printf("Escolha a densidade:\n");
        scanf("%f", &densidade2);
        soma1 += densidade1;
        soma2 += densidade2;
        resultado = (densidade1 < densidade2) ? 1 : (densidade1 > densidade2 ? 2 : 0);

        if(resultado == 1){
            printf("A densidade 1 ganhou parabens\n");
        }else if (resultado == 2){
            printf("A densidade 2 ganhou parabens\n");
        }else {
            printf("Empate\n");
        }
        break;
    case 6:
        printf("Escolha a primeira area:\n");
        scanf("%f", &area1);
        printf("Escolha a segunda area:\n");
        scanf("%f", &area2);
        soma1 += area1;
        soma2 += area2;
        resultado = (area1 > area2) ? 1 : (area1 < area2 ? 2 : 0);

        if(resultado == 1){
            printf("Area 1 ganhou parabens\n");
        }else if (resultado == 2){
            printf("Area 2 ganhou parabens\n");
        }else {
            printf("Empate\n");
        }
        break;
    default:
        printf("Essa opcao nao existe volte ao jogo!!!\n");

    }

    printf("##Exibicao dos resultado finais##\n");
    printf("Resultado da somas da carta 1: %2.f\n", soma1);
    printf("Resultado da somas da carta 2: %2.f\n", soma2);

    if(soma1 > soma2){
        printf("A carta ganhadora dessa rodada e a carta 1 tragam o trofeu!!!\n");
    }else if (soma1 < soma2) {
         printf("A carta ganhadora dessa rodada e a carta 2 nunca desistam o segundo lugar pode virar o primeiro!!!\n");
    }else {
        printf("Que empate inesperado nessa rodada\n");
    }

    return 0;
}
