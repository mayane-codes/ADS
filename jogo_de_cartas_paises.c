
/*
autor: Mayane Thainá
data: 01/07/2025
descrição: desenvolvimento de cartas para o jogo super trunfo


*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    system('clear');

    char pais_carta1[10] = "Brasil";
    char pais_carta2[10] = "Argentina";
    int populacao_carta1 = 751300;
    int populacao_carta2 = 833932;
    float area_territorio_carta01 = 167.3;
    float area_territorio_carta2 = 211.5;
    float pib_carta1 = 24.186;
    float pib_carta2 = 22.000;
    int ponto_turistico_carta1 = 18;
    int ponto_turistico_carta2 = 18;
    float densidade_carta1 = populacao_carta1 / area_territorio_carta01;
    float densidade_carta2 = populacao_carta2 / area_territorio_carta2;
    int escolhaJogador, escolhaAtributo;

    printf("Menu Jogo das Cartas\n");
    printf("Escolha uma opção\n");
    printf("1. Jogar\n");
    printf("2. Sair\n");
    printf(" Escolha: ");
    scanf("%d", &escolhaJogador);

    switch (escolhaJogador) {
    case 1:
        system("clear");
        printf("Qual atributo deseja comparar?\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Números de pontos turísticos\n");
        printf("5. Densidade\n");
        printf("> ");


        scanf("%d", &escolhaAtributo);

        if (escolhaAtributo == 1) {
            printf("\nAtributo escolhido: População");
            printf("\nPopulação carta 1 %d", populacao_carta1);
            printf("\nPopulação carta 2 %d", populacao_carta2);

            if (populacao_carta1 > populacao_carta2) {
                printf("\n\n### Carta 1 Vencedora! ###\n");
                printf("\nPais: %s", pais_carta1);
                printf("\nPopulação: %d", populacao_carta1);
                printf("\nÁrea em km2: %.3f", area_territorio_carta01);
                printf("\nPIB: %.4f", pib_carta1);
                printf("\nPontos turisticos: %d", ponto_turistico_carta1);
                printf("\ndensidade populacional: %f", densidade_carta1);
                printf("\n");
            } else if (populacao_carta1 < populacao_carta2) {
                printf("\n\n### Carta 2 Vencedora! ###\n");
                printf("\nPais: %s", pais_carta2);
                printf("\nPopulação: %d", populacao_carta2);
                printf("\nÁrea em km2: %.3f", area_territorio_carta2);
                printf("\nPIB: %.4f", pib_carta2);
                printf("\nPontos turisticos: %d", ponto_turistico_carta2);
                printf("\ndensidade populacional: %f", densidade_carta2);
                printf("\n");
            } else {
                printf("\n############# Empate entre as duas cartas: População #############\n");
                printf("\n");
            }
        }
        else if (escolhaAtributo == 2) {
            
            printf("\nAtributo escolhido: Área");
            printf("\nArea carta 1 %f", area_territorio_carta01);
            printf("\nArea carta 2 %f", area_territorio_carta2);
            
            if (area_territorio_carta01 > area_territorio_carta2) {
                printf("\n\n### Carta 1 Vencedora! ###\n");
                printf("\nPais: %s", pais_carta1);
                printf("\nPopulação: %d", populacao_carta1);
                printf("\nÁrea em km2: %.3f", area_territorio_carta01);
                printf("\nPIB: %.4f", pib_carta1);
                printf("\nPontos turisticos: %d", ponto_turistico_carta1);
                printf("\ndensidade populacional: %f", densidade_carta1);
                printf("\n");
            }
            else if (area_territorio_carta01 < area_territorio_carta2) {
                printf("\n\n### Carta 2 Vencedora! ###\n");
                printf("\nPais: %s", pais_carta2);
                printf("\nPopulação: %d", populacao_carta2);
                printf("\nÁrea em km2: %.3f", area_territorio_carta2);
                printf("\nPIB: %.4f", pib_carta2);
                printf("\nPontos turisticos: %d", ponto_turistico_carta2);
                printf("\ndensidade populacional: %f", densidade_carta2);
                printf("\n");
            } else {
                printf("\n############# Empate entre as duas cartas: Área #############\n");
                printf("\n");
            }
        }
        else if (escolhaAtributo == 3) {
            
            printf("\nAtributo escolhido: PIB");
            printf("\nPIB carta 1 %d", pib_carta1);
            printf("\nPIB carta 2 %d", pib_carta2);

            if (pib_carta1 > pib_carta2) {
                printf("\n\n### Carta 1 Vencedora! ###\n");
                printf("\nPais: %s", pais_carta1);
                printf("\nPopulação: %d", populacao_carta1);
                printf("\nÁrea em km2: %.3f", area_territorio_carta01);
                printf("\nPIB: %.4f", pib_carta1);
                printf("\nPontos turisticos: %d", ponto_turistico_carta1);
                printf("\ndensidade populacional: %f", densidade_carta1);
                printf("\n");
            }
            else if (pib_carta1 < pib_carta2) {
                printf("\n\n### Carta 2 Vencedora! ###\n");
                printf("\nPais: %s", pais_carta2);
                printf("\nPopulação: %d", populacao_carta2);
                printf("\nÁrea em km2: %.3f", area_territorio_carta2);
                printf("\nPIB: %.4f", pib_carta2);
                printf("\nPontos turisticos: %d", ponto_turistico_carta2);
                printf("\ndensidade populacional: %f", densidade_carta2);
                printf("\n");
            }
            else {
                printf("\n############# Empate entre as duas cartas: PIB #############\n");
                printf("\n"); 
            }
        }
        else if (escolhaAtributo == 4) {

            printf("\nAtributo escolhido: Pontos Turisticos");
            printf("\nPontos Turisticos carta 1 %d", ponto_turistico_carta1);
            printf("\nPontos Turisticos carta 2 %d", ponto_turistico_carta2);

            if (ponto_turistico_carta1 > ponto_turistico_carta2) {
                printf("\n\n### Carta 1 Vencedora! ###\n");
                printf("\nPais: %s", pais_carta1);
                printf("\nPopulação: %d", populacao_carta1);
                printf("\nÁrea em km2: %.3f", area_territorio_carta01);
                printf("\nPIB: %.4f", pib_carta1);
                printf("\nPontos turisticos: %d", ponto_turistico_carta1);
                printf("\ndensidade populacional: %f", densidade_carta1);
                printf("\n");
            }
            else if(ponto_turistico_carta1 < ponto_turistico_carta2) {
                printf("\n\n### Carta 2 Vencedora\! ###n");
                printf("\nPais: %s", pais_carta2);
                printf("\nPopulação: %d", populacao_carta2);
                printf("\nÁrea em km2: %.3f", area_territorio_carta2);
                printf("\nPIB: %.4f", pib_carta2);
                printf("\nPontos turisticos: %d", ponto_turistico_carta2);
                printf("\ndensidade populacional: %f", densidade_carta2);
                printf("\n");
            } 
            else {
                printf("\n############# Empate entre as duas cartas: #############\n");
                printf("\n");
            }
        }
        else if (escolhaAtributo == 5){
             printf("\nAtributo escolhido: Densidade");
            printf("\nDensidade carta 1 %f", densidade_carta1);
            printf("\nDensidade carta 2 %f", densidade_carta2);
           
            if(densidade_carta1 < densidade_carta2){
                 printf("\n\n### Carta 1 Vencedora! ###\n");
                printf("\nPais: %s", pais_carta1);
                printf("\nPopulação: %d", populacao_carta1);
                printf("\nÁrea em km2: %.3f", area_territorio_carta01);
                printf("\nPIB: %.4f", pib_carta1);
                printf("\nPontos turisticos: %d", ponto_turistico_carta1);
                printf("\ndensidade populacional: %f", densidade_carta1);
                printf("\n");
            } else{
                printf("\n\n### Carta 2 Vencedora! ###\n");
                printf("\nPais: %s", pais_carta2);
                printf("\nPopulação: %d", populacao_carta2);
                printf("\nÁrea em km2: %.3f", area_territorio_carta2);
                printf("\nPIB: %.4f", pib_carta2);
                printf("\nPontos turisticos: %d", ponto_turistico_carta2);
                printf("\ndensidade populacional: %f", densidade_carta2);
                printf("\n");

            }
        }

        break;
    case 2:
        printf("Saindo do jogo .....\n");
        break;
    default:
        printf("\nOpção invalida!!\n");
        break;
    }

    return 0;
}
