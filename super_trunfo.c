/*
autor: Mayane Thainá
data: 01/07/2025
descrição: desenvolvimento de cartas para o jogo super trunfo


*/
#include <stdio.h>

int main(){
char estado;
char codigo_carta[3];
char cidade[50];
int populacao;
float area_territorio;
float pib;
int ponto_turistico;

printf("seu estado: ");
scanf("%c",  &estado);

printf("codigo da carta: ");
scanf("%s", codigo_carta);

printf("sua cidade: ");
scanf("%s", cidade);

printf("digite o numero de habitantes: ");
scanf("%d", &populacao);

printf("área em km2: ");
scanf("%f", &area_territorio);

printf("seu PIB: ");
scanf("%f", &pib);

printf("pontos turisticos: ");
scanf("%d", &ponto_turistico);

printf("Carta: 1\n");
printf("\nEstado: %c", estado);
printf("\nCódigo: %s", codigo_carta);
printf("\nNome da cidade: %s", cidade);
printf("\nPopulação: %d", populacao);
printf("\nÁrea em km2: %f", area_territorio);
printf("\nPIB: %f", pib);
printf("\nPontos turisticos: %d", ponto_turistico);
printf("\n");

return 0;
 


}

