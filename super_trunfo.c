/*
autor: Mayane Thainá
data: 01/07/2025
descrição: desenvolvimento de cartas para o jogo super trunfo


*/
#include <stdio.h>




int main(){

  
char estado_carta1[10] = "RN";
char estado_carta2[10] = "PB";
char codigo_carta1[30] = "NA1"; 
char codigo_carta2[30] = "JP2";
char cidade_carta1[50] = "Natal"; 
char cidade_carta2[50] = "João Pessoa";
int populacao_carta1 = 751300;
int populacao_carta2 = 833932;
float area_territorio_carta01 = 167.3; 
float area_territorio_carta2 = 211.5;
float pib_carta1 = 24.186;
float pib_carta2 = 22.000;
int ponto_turistico_carta1 = 18; 
int ponto_turistico_carta2 = 15;


if (pib_carta1 > pib_carta2){
    // natal
    float densidade = populacao_carta1 / area_territorio_carta01;
    float pib_percapita = pib_carta1 / populacao_carta1;

    printf("\nCarta 1 Vencedora\n");
    printf("\nEstado: %s", estado_carta1);
    printf("\nCódigo: %s", codigo_carta1);
    printf("\nNome da cidade: %s", cidade_carta1);
    printf("\nPopulação: %d", populacao_carta1);
    printf("\nÁrea em km2: %.3f", area_territorio_carta01);
    printf("\nPIB: %.4f", pib_carta1);
    printf("\nPontos turisticos: %d", ponto_turistico_carta1);
    printf("\ndensidade populacional: %f", densidade);
    printf("\npib percapita: %f", pib_percapita);
    printf("\n");

} else{ 
    // joao pessoa
    float densidade = populacao_carta2 / area_territorio_carta2;
    float pib_percapita = pib_carta2 / ponto_turistico_carta2;
    
    printf("\nCarta 2 Vencedora\n");
    printf("\nEstado: %s", estado_carta2);
    printf("\nCódigo: %s", codigo_carta2);
    printf("\nNome da cidade: %s", cidade_carta2);
    printf("\nPopulação: %d", populacao_carta2);
    printf("\nÁrea em km2: %.3f", area_territorio_carta2);
    printf("\nPIB: %.4f", pib_carta2);
    printf("\nPontos turisticos: %d", ponto_turistico_carta2);
    printf("\ndensidade populacional: %f", densidade);
    printf("\npib percapita: %f", pib_percapita);
    printf("\n");

}

return 0;


}
