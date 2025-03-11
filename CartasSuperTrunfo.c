#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(){

// variaves

char Estado[2];
char Codigo_da_carta[4];
char Nome_da_cidade[15];
int Populacao;
float Area_em_KM;
float PIB;
int numero_de_pontos;
float densidade_populacional;
float pib_per_capita;
float Super_poder;

/// segunda carta

char Estado2[2];
char Codigo_da_carta2[4];
char Nome_da_cidade2[15];
int Populacao2;
float Area_em_KM2;
float PIB2;
int numero_de_pontos2;
float densidade_populacional2;
float pib_per_capita2;
float Super_poder2;

//entrada de dados

printf("Desafio Cartas super trunfos!\n");
printf("Digite a Primeira carta!\n");

printf("Estado:  ");
scanf("%s", &Estado);

printf("Codigo:  ");
scanf("%s", &Codigo_da_carta);

printf("Nome da cidade:  ");
scanf("%s", &Nome_da_cidade);

printf("População:  ");
scanf("%d", &Populacao);

printf("Digite a Área:  ");
scanf("%f", &Area_em_KM);

printf("Digite o PIB:  ");
scanf("%f", &PIB);

printf("Número de Pontos Turísticos:  \n");
scanf("%d", &numero_de_pontos);

//segunda carta

printf("Digite a Segunda carta!\n");

printf("Estado:  ");
scanf("%s", &Estado2);

printf("Codigo:  ");
scanf("%s", &Codigo_da_carta2);

printf("Nome da cidade:  ");
scanf("%s", &Nome_da_cidade2);

printf("População:  ");
scanf("%d", &Populacao2);

printf("Digite a Área:  ");
scanf("%f", &Area_em_KM2);

printf("Digite o PIB:  ");
scanf("%f", &PIB2);

printf("Número de Pontos Turísticos:  ");
scanf("%d", &numero_de_pontos2);

//divisão carta 1

densidade_populacional = (float) Populacao / Area_em_KM;

pib_per_capita = PIB / Populacao;

Super_poder = (float) Area_em_KM + PIB + pib_per_capita + 1 / densidade_populacional + numero_de_pontos;

//divisão carta 2

densidade_populacional2 = (float) Populacao2 / Area_em_KM2;

pib_per_capita2 = PIB2 / Populacao2;

Super_poder2 = (float) Area_em_KM2 + PIB2 + pib_per_capita2 + 1 / densidade_populacional2 + numero_de_pontos2;

//saida de dados

//carta 1
printf("RESULTADO DA CARTA 1!\n");
printf("Estado: %s\nCódigo da carta: %s\n", Estado, Codigo_da_carta);

printf("Nome da Cidade: %s\nPopulação: %d\n", Nome_da_cidade, Populacao);

printf("Área em KM: %.2f\nPIB: %.2f\n", Area_em_KM, PIB);

printf("Número de Pontos Turísticos: %d\n", numero_de_pontos);

printf("Densidade populacional: %.2f\n", densidade_populacional);

printf("PIB per capita: %.2f\n", pib_per_capita);

printf ("Super poder da carta: %f\n", Super_poder);


//carta 2
printf("RESULTADO DA CARTA 2!\n");
printf("Estado: %s\nCódigo da carta: %s\n", Estado2, Codigo_da_carta2);

printf("Nome da Cidade: %s\nPopulação: %d\n", Nome_da_cidade2, Populacao2);

printf("Área em KM: %.2f\nPIB: %.2f\n", Area_em_KM2, PIB2);

printf("Número de Pontos Turísticos: %d\n", numero_de_pontos2);

printf("Densidade populacional: %.2f\n", densidade_populacional2);

printf("PIB per capita: %.2f\n", pib_per_capita2);

printf ("Super poder da carta: %f\n", Super_poder2);

//COMPARAÇÃO DAS CARTAS

printf("TODOS QUE APARECER (1) A CARTA 1 GANHOU, TODOS QUE APARECER (0)A CARTA 2 GANHOU!\n");

printf("Poulação: %d\n", Populacao > Populacao2);

printf("Aréa: %d\n", Area_em_KM > Area_em_KM2);

printf("PIB: %d\n", PIB > PIB2);

printf("Pontos Turísticos: %d\n", numero_de_pontos > numero_de_pontos2);

printf("Densidade Populacional: %d\n", densidade_populacional < densidade_populacional2);

printf("Pib per capita: %d\n", pib_per_capita > pib_per_capita2);

printf("Super poder: %d\n", Super_poder > Super_poder2);

return 0;

}