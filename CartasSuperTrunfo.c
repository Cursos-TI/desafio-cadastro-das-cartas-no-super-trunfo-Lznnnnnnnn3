#include<stdio.h>

int main(){

// variaves

int escolhadaCARTA;
int escolhadaCARTA2;
int resultado1;
int resultado2;

//informações da carta
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

/// Informações da segunda carta

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

//divisão da carta 1

densidade_populacional = (float) Populacao / Area_em_KM;

pib_per_capita = PIB / Populacao;

Super_poder = (float) Area_em_KM + PIB + pib_per_capita + 1 / densidade_populacional + numero_de_pontos;

//divisão da carta 2

densidade_populacional2 = (float) Populacao2 / Area_em_KM2;

pib_per_capita2 = PIB2 / Populacao2;

Super_poder2 = (float) Area_em_KM2 + PIB2 + pib_per_capita2 + 1 / densidade_populacional2 + numero_de_pontos2;


//Informação mostrada para o usuario

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

//Sistema de Escolha do primeiro atributo

switch (escolhadaCARTA)
{
case 1:
    printf("Você escolheu População\n");
    resultado1 = Populacao > Populacao2 ? 1 : 0;
    break;
    case 2:
    printf("Você escolheu Área\n");
    resultado1 = Area_em_KM > Area_em_KM2 ? 1 : 0;
    break;
    case 3:
    printf("Você escolheu PIB\n");
    resultado1 = PIB > PIB2 ? 1 : 0;
    break;
    case 4:
    printf("Você escolheu Numero de Pontos Turísticos\n");
    resultado1 = numero_de_pontos > numero_de_pontos2 ? 1 : 0;
    break;
    case 5:
    printf("Você escolheu Densidade Populacional\n");
    resultado1 =  densidade_populacional < densidade_populacional2 ? 1 : 0;
    break;
    case 6:
    printf("Você escolheu Super PIB per Capita\n");
    resultado1 = pib_per_capita > pib_per_capita2 ? 1 : 0;
    break;
    case 7:
    printf("Você escolheu Super Poder\n");
    resultado1 = Super_poder > Super_poder2 ? 1 : 0;
    break;

default:
printf("Opção Invalida");
    break;
}

//Entrada de dados da segundo atributo
printf("Escolha a Segunda caracterisca agora!\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Numero de Pontos Turísticos\n");
printf("5. Densidade populacional\n");
printf("6. PIB per Capita\n");
printf("7. Super Poder\n");
scanf("%d", &escolhadaCARTA2);

//Sistema de escolha do segundo atributo

switch (escolhadaCARTA2)
{
case 1:
    printf("Você escolheu População\n");
    resultado2 = Populacao > Populacao2 ? 1 : 0;
    break;
    case 2:
    printf("Você escolheu Área\n");
    resultado2 = Area_em_KM > Area_em_KM2 ? 1 : 0;
    break;
    case 3:
    printf("Você escolheu PIB\n");
    resultado2 = PIB > PIB2 ? 1 : 0;
    break;
    case 4:
    printf("Você escolheu Numero de pontos Turísticos\n");
    resultado2 = numero_de_pontos > numero_de_pontos2 ? 1 : 0;
    break;
    case 5:
    printf("Você escolheu Densidade Populacional\n");
    resultado2 =  densidade_populacional < densidade_populacional2 ? 1 : 0;
    break;
    case 6:
    printf("Você escolheu PIB per capita\n");
    resultado2 = pib_per_capita > pib_per_capita2 ? 1 : 0;
    break;
    case 7:
    printf("Você escolheu Super Poder\n");
    resultado2 = Super_poder > Super_poder2 ? 1 : 0;
    break;

default:
printf("Opção invalida");
    break;
}

//Comparação do resultado do jogo

if (resultado1 == 1 && resultado2 == 1)
{
    printf("Você Venceu!!");
}
else if (resultado1 == 1 && resultado2 == 0)
{
    printf("Deu Empate");
}
else if (resultado1 == 0 && resultado2 == 1)
{
    printf("Deu Empate");
}
else
{
    printf("Você Perdeu");
}








return 0;

}