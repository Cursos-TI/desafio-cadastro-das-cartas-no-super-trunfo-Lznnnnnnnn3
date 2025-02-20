#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char Estado[2];
char Codigo_da_carta[4];
char Nome_da_cidade[15];
int População;
float Area_em_KM;
float PIB;
int numero_de_pontos;
    
printf("Estado:  ");
scanf("%s", &Estado);

printf("Codigo:  ");
scanf("%s", &Codigo_da_carta);

printf("Nome da cidade:  ");
scanf("%s", &Nome_da_cidade);

printf("População:  ");
scanf("%d", &População);

printf("Digite a Área:  ");
scanf("%f", &Area_em_KM);

printf("Digite o PIB:  ");
scanf("%f", &PIB);

printf("Número de Pontos Turísticos:  ");
scanf("%d", &numero_de_pontos);  
    
    printf("Estado: %s\nCódigo da carta: %s\n", Estado, Codigo_da_carta);

    printf("Nome da Cidade: %s\nPopulação: %d\n", Nome_da_cidade, População);
    
    printf("Área em KM: %f\nPIB: %f\n", Area_em_KM, PIB);
    
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos);  
    
    return 0;
}
