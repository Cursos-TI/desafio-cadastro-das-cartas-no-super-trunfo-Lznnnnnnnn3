#include<stdio.h>

int main(){

// variaves

int escolhadaCARTA;
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

//divisão carta 1

densidade_populacional = (float) Populacao / Area_em_KM;

pib_per_capita = PIB / Populacao;

Super_poder = (float) Area_em_KM + PIB + pib_per_capita + 1 / densidade_populacional + numero_de_pontos;

//divisão carta 2

densidade_populacional2 = (float) Populacao2 / Area_em_KM2;

pib_per_capita2 = PIB2 / Populacao2;

Super_poder2 = (float) Area_em_KM2 + PIB2 + pib_per_capita2 + 1 / densidade_populacional2 + numero_de_pontos2;



//Informações da carta

printf("Desafio Cartas super trunfos!\n");
printf("Sua Carta é o São paulo\n");
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

printf("/////////////////////////////////////////////////////////////\n");

//Entrada de dados da escolha da carta
printf("Escolha uma das caracterisca para usar como comparação\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Numero de Pontos Turísticos\n");
printf("5. Densidade populacional\n");
printf("6. PIB per Capita\n");
printf("7. Super Poder\n");
scanf("%d", &escolhadaCARTA);

//Comparações das caracteristicas

switch (escolhadaCARTA)
{
case 1:
    printf("População selionada, Comparando...\n");
    if (Populacao > Populacao2)
    {
        printf("Você venceu!");
    }
    else if (Populacao ==  Populacao2)
    {
        printf("Você empatou");
    }
    else
    {
        printf("Você perdeu!");
    }
    

    break;

    case 2:
    printf("Área selionada, Comparando...\n");
    if (Area_em_KM > Area_em_KM2)
    {
        printf("Você venceu!\n");
    }
    else if (Area_em_KM ==  Area_em_KM2)
    {
        printf("Você empatou\n");
    }
    else
    {
        printf("Você perdeu!\n");
    }

    break;

    case 3:
    printf("PIB selionada, Comparando...\n");

    if (PIB > PIB2)
    {
        printf("Você venceu!\n");
    }
    else if (PIB ==  PIB2)
    {
        printf("Você empatou\n");
    }
    else
    {
        printf("Você perdeu!\n");
    }

    break;

    case 4:
    printf("Numero de Pontos Turísticos selionada, Comparando...\n");
    if (numero_de_pontos > numero_de_pontos2)
    {
        printf("Você venceu!\n");
    }
    else if (numero_de_pontos ==  numero_de_pontos2)
    {
        printf("Você empatou\n");
    }
    else
    {
        printf("Você perdeu!\n");
    }

    break;

    case 5:
    printf("Densidade Populacional selionada, Comparando...\n");
    if (densidade_populacional < densidade_populacional2)
    {
        printf("Você venceu!\n");
    }
    else if (densidade_populacional ==  densidade_populacional2)
    {
        printf("Você empatou\n");
    }
    else
    {
        printf("Você perdeu!\n");
    }

    break;

    case 6:
    printf("PIB per capita selionada, Comparando...\n");
    if (pib_per_capita > pib_per_capita2)
    {
        printf("Você venceu!\n");
    }
    else if (pib_per_capita ==  pib_per_capita2)
    {
        printf("Você empatou\n");
    }
    else
    {
        printf("Você perdeu!\n");
    }

    break;

    case 7:
    printf("Super Poder selionada, Comparando...\n");
    if (Super_poder > Super_poder2)
    {
        printf("Você venceu!\n");
    }
    else if (Super_poder == Super_poder2)
    {
        printf("Você empatou\n");
    }
    else
    {
        printf("Você perdeu!\n");
    }
    break;

default: 
printf("Opção invalida\n");
    break;
}





return 0;

}