/*
autor: Mayane Thainá
data: 03/07/2025
descrição: desenvolvimento de cartas para o jogo super trunfo


*/
#include <stdio.h>

int main(){
char estado_carta1;
char estado_carta2;
char codigo_carta1[3]; 
char codigo_carta2[3];
char cidade_carta1[50]; 
char cidade_carta2[50];
int populacao_carta1;
int populacao_carta2;
float area_territorio_carta01; 
int area_territorio_carta2;
float pib_carta1;
float pib_carta2;
int ponto_turistico_carta1; 
int ponto_turistico_carta2;

printf("\nSolicitando dados da carta1\n");

printf("seu estado: ");
scanf("%c",  &estado_carta1);
while (getchar() != '\n');

printf("codigo da carta: ");
scanf("%s", codigo_carta1);
while (getchar() != '\n');

printf("sua cidade: ");
scanf("%s", cidade_carta1);
while (getchar() != '\n');


printf("digite o numero de habitantes: ");
scanf("%d", &populacao_carta1);
while (getchar() != '\n');


printf("área em km2: ");
scanf("%f", &area_territorio_carta01);
while (getchar() != '\n');


printf("seu PIB: ");
scanf("%f", &pib_carta1);
while (getchar() != '\n');


printf("pontos turisticos: ");
scanf("%d", &ponto_turistico_carta1);
while (getchar() != '\n');

printf("\nsolicitando dados da carta2\n");

printf("seu estado: ");
scanf("%c",  &estado_carta2);
while (getchar() != '\n');


printf("codigo da carta: ");
scanf("%s", codigo_carta2);
while (getchar() != '\n');


printf("sua cidade: ");
scanf("%s", cidade_carta2);
while (getchar() != '\n');


printf("digite o numero de habitantes: ");
scanf("%d", &populacao_carta2);
while (getchar() != '\n');


printf("área em km2: ");
scanf("%f", &area_territorio_carta2);
while (getchar() != '\n');


printf("seu PIB: ");
scanf("%f", &pib_carta2);
while (getchar() != '\n');


printf("pontos turisticos: ");
scanf("%d", &ponto_turistico_carta2);
while (getchar() != '\n');


printf("\nCarta: 1\n");
printf("\nEstado: %c", estado_carta1);
printf("\nCódigo: %s", codigo_carta1);
printf("\nNome da cidade: %s", cidade_carta1);
printf("\nPopulação: %d", populacao_carta1);
printf("\nÁrea em km2: %f", area_territorio_carta01);
printf("\nPIB: %f", pib_carta1);
printf("\nPontos turisticos: %d", ponto_turistico_carta1);
printf("\n");

printf("\nCarta: 2\n");
printf("\nEstado: %c", estado_carta2);
printf("\nCódigo: %s", codigo_carta2);
printf("\nNome da cidade: %s", cidade_carta2);
printf("\nPopulação: %d", populacao_carta2);
printf("\nÁrea em km2: %f", area_territorio_carta2);
printf("\nPIB: %f", pib_carta2);
printf("\nPontos turisticos: %d", ponto_turistico_carta2);
printf("\n");


return 0;
 


}

