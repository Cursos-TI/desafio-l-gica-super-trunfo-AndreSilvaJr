#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    printf("Desafio Cadastro das cartas do SUPER TRUNFO - PAÍSES. \n");
    printf("\n"); //espaçamento para ajuste da exibição. 

    // Definição das variáveis separadas para cada atributo da cidade.
    // Atributos: população, pontos turisticos, área, PIB, Estado, Cidade, código da cidade.
    unsigned long int populacao1, populacao2;
    int turismo1, turismo2;
    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2;
    float percapita1, percapita2;
    float superpoder1, superpoder2;
    char estado1, estado2; 
    char cidade1[50], cidade2[50];
    char codigo1[50], codigo2[50];
    // Cadastro das Cartas:
    // Utilização das funções printf e scanf para entrada e saída dos atributos informados pelo usuário.

    printf("Digite os dados da Carta 01: \n");

    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Código: ");
    scanf("%s", codigo1);
    
    printf("Nome da Cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos Turísticos: ");
    scanf("%d", &turismo1);

    densidade1 = populacao1/area1;
    percapita1 = pib1*1000000/populacao1; // Feita multiplicação para equiparação de valores

    superpoder1 = (float)populacao1 + area1 + pib1 + turismo1 + percapita1 + (1 / densidade1);

    printf("\n"); //espaçamento para ajuste da exibição.
    printf("Digite os dados da Carta 02: \n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Código: ");
    scanf("%s", codigo2);
    
    printf("Nome da Cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turísticos: ");
    scanf("%d", &turismo2);

    densidade2 = populacao2/area2;
    percapita2 = pib2*1000000/populacao2; // Feita multiplicação para equiparação de valores

    superpoder2 = (float)populacao2 + area2 + pib2 + turismo2 + percapita2 + (1 / densidade2);
    
    // Exibição dos Dados das Cartas:
    // Utilização da função printf para exibição das informações das cartas cadastradas pelo usuário.
    // Exibição dos valores inseridos para cada atributo da cidade, um por linha.
    printf("\n");      //espaçamento para ajuste da exibição.
    printf("CARTA 01: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d habitantes. \n", populacao1);
    printf("Área: %.2f KM² \n", area1);
    printf("PIB: %.2f milhões de reais.\n", pib1);
    printf("Número de Pontos Turísticos: %d \n", turismo1);
    printf("Densidade Populacional:%.2f hab/km² \n", densidade2);
    printf("PIB per capita:%.2f reais \n", percapita1);


    printf("\n");       //espaçamento para ajuste da exibição.
    printf("CARTA 02: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d habitantes. \n", populacao2);
    printf("Área: %.2f KM² \n", area2);
    printf("PIB: %.2f milhões de reais. \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", turismo2);
    printf("Densidade Populacional:%.2f hab/km² \n", densidade2);
    printf("PIB per capita:%.2f reais \n", percapita2);


    // comparativo das cartas.
    printf("\n");       //espaçamento para ajuste da exibição.
    printf("Comparação Das Cartas: \n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Número de Pontos Turísticos: Carta 1 venceu (%d)\n", turismo1 > turismo2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", percapita1 > percapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

    printf("\n");
    printf("Resultado!\n");
    if(populacao1 > populacao2){
        printf("Carta 01 venceu!\n");
    } else {
        printf("Carta 02 venceu! \n");
    }

    if(area1 > area2){
        printf("Carta 01 venceu!\n");
    } else {
        printf("Carta 02 venceu! \n");
    }

    if(pib1 > pib2){
        printf("Carta 01 venceu!\n");
    } else {
        printf("Carta 02 venceu! \n");
    }

    if(densidade1 < densidade2){
        printf("Carta 01 venceu!\n");
    } else {
        printf("Carta 02 venceu! \n");
    }

    if(percapita1 > percapita2){
        printf("Carta 01 venceu!\n");
    } else {
        printf("Carta 02 venceu! \n");
    }

    if(superpoder1 > superpoder2){
        printf("Carta 01 venceu!\n");
    } else {
        printf("Carta 02 venceu! \n");
    }
    return 0;
}
