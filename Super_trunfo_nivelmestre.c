
/*
autor: Mayane Thainá
data: 13/07/2025
descrição: desenvolvimento de cartas para o jogo super trunfo


*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    int ponto_turistico_carta2 = 19;
    float densidade_carta1 = populacao_carta1 / area_territorio_carta01;
    float densidade_carta2 = populacao_carta2 / area_territorio_carta2;
    int escolhaJogador, escolhaAtributo, menuatributo1 = 2;
    int pontos_carta1 = 0, pontos_carta2 = 0;
    float soma_carta1 = 0.0;
    float soma_carta2 = 0.0;
    char nome_atributo1[25] = "";
    float valor_atributo_escolhido_carta1;
    char nome_atributo2[25] = "";
    float valor_atributo_escolhido_carta2;


    printf("Menu Jogo das Cartas\n");
    printf("Escolha uma opção\n");
    printf("1. Jogar\n");
    printf("2. Sair\n");
    printf(" Escolha: ");
    scanf("%d", &escolhaJogador);

    switch (escolhaJogador) {
    case 1:
        system("clear");
        printf("Escolha o 1º atributo para comparar.\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Números de pontos turísticos\n");
        printf("5. Densidade\n");
        printf("> ");


        scanf("%d", &escolhaAtributo);
     
        if(escolhaAtributo == 1){
            printf("Escolha o 2º atributo para comparar.\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Números de pontos turísticos\n");
            printf("5. Densidade\n");
            printf("> ");
            scanf("%d", &menuatributo1);
            strcpy(nome_atributo1, "População");
            valor_atributo_escolhido_carta1 = populacao_carta1;

        } else if (escolhaAtributo == 2){
            printf("Escolha o 2º atributo para comparar.\n");
            printf("1. População\n");
            printf("3. PIB\n");
            printf("4. Números de pontos turísticos\n");
            printf("5. Densidade\n");
            printf("> ");
            scanf("%d", &menuatributo1);
            strcpy(nome_atributo1, "Área");
            valor_atributo_escolhido_carta1 = area_territorio_carta01;

        } else if (escolhaAtributo == 3){
            printf("Escolha o 2º atributo para comparar.\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("4. Números de pontos turísticos\n");
            printf("5. Densidade\n");
            printf("> ");
            scanf("%d", &menuatributo1);
            strcpy(nome_atributo1, "Pib");
            valor_atributo_escolhido_carta1 = pib_carta1;

        } else if(escolhaAtributo == 4){
            printf("Escolha o 2º atributo para comparar.\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("5. Densidade\n");
            printf("> ");
            scanf("%d", &menuatributo1);
            strcpy(nome_atributo1, "Pontos Turísticos");
            valor_atributo_escolhido_carta1 = ponto_turistico_carta1;

        } else if(escolhaAtributo == 5){
            printf("Escolha o 2º atributo para comparar.\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Números de pontos turísticos\n");
            printf("> ");
            scanf("%d", &menuatributo1);
            strcpy(nome_atributo1, "Densidade");
            valor_atributo_escolhido_carta1 = densidade_carta1;
        } else {
            printf("Opção invalida!!");
        }
        
        if (escolhaAtributo == 1){
            pontos_carta1 += (populacao_carta1 > populacao_carta2) ? 1 : 0;
            soma_carta1 += populacao_carta1;
        }
        else if(escolhaAtributo == 2){
            pontos_carta1 += (area_territorio_carta01 > area_territorio_carta2) ? 1 : 0;
            soma_carta1 += area_territorio_carta01;
        }
        else if(escolhaAtributo == 3){
            pontos_carta1 += (pib_carta1 > pib_carta2) ? 1 : 0;
            soma_carta1 += pib_carta1;
        }
        else if(escolhaAtributo == 4){
            pontos_carta1 += (ponto_turistico_carta1 > ponto_turistico_carta2) ? 1 : 0;
            soma_carta1 += ponto_turistico_carta1;
        }



        if (menuatributo1 == 1){
            pontos_carta2 += (populacao_carta1 < populacao_carta2) ? 1 : 0;
            soma_carta2 = populacao_carta2;
            strcpy(nome_atributo2, "População");
            valor_atributo_escolhido_carta2 = populacao_carta2;
        }
        else if(menuatributo1 == 2){
            pontos_carta2 += (area_territorio_carta01 < area_territorio_carta2) ? 1 : 0;
            soma_carta2 = area_territorio_carta2;
            strcpy(nome_atributo2, "Área");
            valor_atributo_escolhido_carta2 = area_territorio_carta2;
        }
        else if(menuatributo1 == 3){
            pontos_carta2 += (pib_carta1 < pib_carta2) ? 1 : 0;
            soma_carta2 = pib_carta2;
            strcpy(nome_atributo2, "Pib");
            valor_atributo_escolhido_carta2 = pib_carta2;
        }
        else if(menuatributo1 == 4){
            pontos_carta2 += (ponto_turistico_carta1 < ponto_turistico_carta2) ? 1 : 0;
            soma_carta2 = ponto_turistico_carta2;
            strcpy(nome_atributo2, "Pontos Turísticos");
            valor_atributo_escolhido_carta2 = ponto_turistico_carta2;
        }
        else if(menuatributo1 == 5){
            strcpy(nome_atributo2, "Densidade");
            valor_atributo_escolhido_carta2 = densidade_carta2;
        }


        if((pontos_carta1 > pontos_carta2) ||
            (soma_carta1 > soma_carta2) || (densidade_carta1 < densidade_carta2)){
                printf("\n\n### Carta 1 Vencedora! ###\n");
                printf("\nPais: %s", pais_carta1);
                printf("\n%s", nome_atributo1);
                printf(": %.2f", valor_atributo_escolhido_carta1);
                printf("\n%s", nome_atributo2);
                printf(": %.2f", valor_atributo_escolhido_carta2);
                printf("\nSoma atributos: %.2f", soma_carta1);
                printf("\n");
            }
        else if((pontos_carta1 < pontos_carta2) ||
            (soma_carta1 < soma_carta2) || (densidade_carta1 > densidade_carta2)){

             printf("\n\n### Carta 2 Vencedora! ###\n");
                printf("\nPais: %s", pais_carta2);
                 printf("\n%s", nome_atributo1);
                printf(": %.2f", valor_atributo_escolhido_carta1);
                printf("\n%s", nome_atributo2);
                printf(": %.2f", valor_atributo_escolhido_carta2);
                printf("\nSoma atributos: %.2f", soma_carta2);
                printf("\n");
        } else {
            printf("\nEmpate!!");

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
