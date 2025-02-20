#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado1[1], estado2[1], cidade2[30], cod_carta2[3];
    char cod_carta1[3];
    char cidade1[30];
    int pop1, nmr_turistico1, pop2, nmr_turistico2;
    float area1, pib1, area2, pib2, densidade1, densidade2, pib_capita1, pib_capita2;

    //Solicitando dados para o usuario, para criar a primeira carta
    printf("Crie a primeira carta!\n");
    printf("Digite a letra representante do estado: \n");
    scanf("%s", &estado1);

    printf("Digite o codigo da carta (Letra informada anterior + um numero de 01 a 04): \n");
    scanf("%s", &cod_carta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite a população: \n");
    scanf("%d", &pop1);

    printf("Digite a area(em km²): \n");
    scanf("%f", &area1);

     printf("Digite o valor do PIB: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &nmr_turistico1);

    //Realiza calculo de densidade populacional para a carta 1
    densidade1 = (float) pop1/area1;
    //Realiza calculo de PIB per capita para a carta 1
    pib_capita1 = (float) pib1/pop1;

    //Exibe status da carta 1
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo da carta: %s\n", cod_carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", pop1);
    printf("Area (km²): %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Quantidade de pontos turisticos: %d\n", nmr_turistico1);
    printf("Densidade populacional é: %.2f hab/km²\n", densidade1);
    printf("PIB per capite é: %.2f reais\n", pib_capita1);

    //Solicitando dados para o usuario, para criar a segunda carta carta
    printf("Crie a Segunda carta!\n");
    printf("Digite a letra representante do estado: \n");
    scanf("%s", &estado2);

    printf("Digite o codigo da carta (Letra informada anterior + um numero de 01 a 04): \n");
    scanf("%s", &cod_carta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a população: \n");
    scanf("%d", &pop2);

    printf("Digite a area(em km²): \n");
    scanf("%f", &area2);

    printf("Digite o valor do PIB: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &nmr_turistico2);

    //Realiza calculo de densidade populacional para a carta 2
    densidade2 = (float) pop2/area2;
    //Realiza calculo de PIB per capita para a carta 2
    pib_capita2 = (float) pib2/pop2;

    //Exibe status da carta 2
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da carta: %s\n", cod_carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", pop2);
    printf("Area (km²): %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Quantidade de pontos turisticos: %d hab/km²\n", nmr_turistico2);
    printf("Densidade populacional é: %.2f reais\n", densidade2);
    printf("PIB per capite é: %.2f reais\n", pib_capita2);
    return 0;
}
