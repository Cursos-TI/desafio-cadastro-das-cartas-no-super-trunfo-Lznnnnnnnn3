#include<stdio.h>

int main(){

// variaves
//primeira carta

char Estado[2] = "A";
char Codigo_da_carta[4] = "A01";
char Nome_da_cidade[15] = "São paulo";
int Populacao = 12325000;
float Area_em_KM = 1521.11;
float PIB = 699.28;
int numero_de_pontos = 50;
float densidade_populacional;
float pib_per_capita;
float Super_poder;

/// segunda carta

char Estado2[2] = "B";
char Codigo_da_carta2[4] =  "B02";
char Nome_da_cidade2[15] = "Rio de Janeiro";
int Populacao2 = 6748000;
float Area_em_KM2 = 1200.25;
float PIB2 = 300.50;
int numero_de_pontos2 = 30;
float densidade_populacional2;
float pib_per_capita2;
float Super_poder2;


//DIVISÕES!!
//divisão carta 1

densidade_populacional = (float) Populacao / Area_em_KM;

pib_per_capita = PIB / Populacao;

Super_poder = (float) Area_em_KM + PIB + pib_per_capita + 1 / densidade_populacional + numero_de_pontos;

//divisão carta 2

densidade_populacional2 = (float) Populacao2 / Area_em_KM2;

pib_per_capita2 = PIB2 / Populacao2;

Super_poder2 = (float) Area_em_KM2 + PIB2 + pib_per_capita2 + 1 / densidade_populacional2 + numero_de_pontos2;



//entrada de dados
//Primeira carta

printf("Desafio Cartas super trunfos!\n");
printf("Informações da Carta São paulo!\n");

printf("Estado: %s\n", Estado);

printf("Codigo da Carta: %s\n", Codigo_da_carta);

printf("Nome da cidade: %s\n", Nome_da_cidade);

printf("População: %d\n", Populacao);

printf("Área: %.2f\n", Area_em_KM);

printf("PIB: %.2f\n", PIB);

printf("Número de Pontos Turísticos: %d\n", numero_de_pontos);

printf("Densidade Populacinal: %.2f\n", densidade_populacional);

printf("PIB per Capita: %f\n", pib_per_capita);

printf("Super poder: %.3f\n", Super_poder);

//aparencia
printf("//////////////////////////////////////////////////////////////////////////////////////////\n");
//////////////

//segunda carta

printf("Informações da Carta Rio de Janeiro!\n");

printf("Estado: %s\n", Estado2);

printf("Codigo da Carta: %s\n", Codigo_da_carta2);

printf("Nome da cidade: %s\n", Nome_da_cidade2);

printf("População: %d\n", Populacao2);

printf("Área: %.2f\n", Area_em_KM2);

printf("PIB: %.2f\n", PIB2);

printf("Número de Pontos Turísticos: %d\n", numero_de_pontos2);

printf("Densidade Populacinal: %.2f\n", densidade_populacional2);

printf("PIB per Capita: %f\n", pib_per_capita2);

printf("Super poder: %.3f\n", Super_poder2);

//aparencia
printf("//////////////////////////////////////////////////////////////////////////////////////////\n");
///////////////////////

//COMPARAÇÃO DAS CARTAS

printf("RESULTADO DO JOGO!\n");


if (Populacao > Populacao2)
{
    printf("População: São paulo venceu!\n");
}
else
{
    printf("População: Rio de Janeiro venceu!\n");
}
/////////////////////////////////////////////////

if (Area_em_KM > Area_em_KM2)
{
    printf("Área em KM: São paulo venceu!\n");
}
else
{
    printf("Área em KM: Rio de Janeiro venceu!\n");
}
/////////////////////////////////////

if (PIB > PIB2)
{
    printf("PIB: São paulo venceu!\n");
}
else
{
    printf("PIB: Rio de Janeiro venceu!\n");
}
/////////////////////////////////////////////

if (numero_de_pontos > numero_de_pontos2)
{
    printf("Número de Pontos Turísticos: São paulo venceu!\n");
}
else
{
    printf("Número de Pontos Turísticos: Rio de Janeiro venceu!\n");
}
////////////////////////////////////////////////

if (densidade_populacional < densidade_populacional2)
{
    printf("Densidade Populacinal: São paulo venceu!\n");
}
else
{
    printf("Densidade Populacinal: Rio de Janeiro venceu!\n");
}
/////////////////////////////////////////////

if (pib_per_capita > pib_per_capita2)
{
    printf("PIB per capita: São paulo venceu!\n");
}
else
{
    printf("PIB per capita: Rio de Janeiro venceu\n");
}
//////////////////////////////////////////////////////

if (Super_poder > Super_poder2)
{
    printf("Super Poder: São paulo venceu!\n");
}
else
{
    printf("Super Poder: Rio de Janeiro venceu\n");
}




return 0;

}