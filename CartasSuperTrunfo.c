#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {
    char estado1[1], estado2[1], cidade2[30], cod_carta2[3];
    char cod_carta1[3];
    char cidade1[30];
    int nmr_turistico1, nmr_turistico2;
    unsigned long int pop1, pop2;
    float area1, pib1, area2, pib2, densidade1, densidade2, pib_capita1, pib_capita2, super1, super2;

    //Solicitando dados para o usuario, para criar a primeira carta
    printf("Crie a primeira carta!\n");
    printf("Digite a letra representante do estado: \n");
    scanf("%s", &estado1);

    printf("Digite o codigo da carta (Letra informada anterior + um numero de 01 a 04): \n");
    scanf("%s", &cod_carta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite a população: \n");
    scanf("%lu", &pop1);

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
    //Calculo da habilidade super
    super1 = (float) pop1 + area1 + pib1 + nmr_turistico1 + pib_capita1 + (area1/pop1);

    /*Exibe status da carta 1
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo da carta: %s\n", cod_carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", pop1);
    printf("Area (km²): %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Quantidade de pontos turisticos: %d\n", nmr_turistico1);
    printf("Densidade populacional é: %.2f hab/km²\n", densidade1);
    printf("PIB per capite é: %.2f reais\n", pib_capita1);
    printf("O valor do super poder é: %.2f\n", super1);
    */

    //Solicitando dados para o usuario, para criar a segunda carta carta
    printf("Crie a Segunda carta!\n");
    printf("Digite a letra representante do estado: \n");
    scanf("%s", &estado2);

    printf("Digite o codigo da carta (Letra informada anterior + um numero de 01 a 04): \n");
    scanf("%s", &cod_carta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a população: \n");
    scanf("%lu", &pop2);

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
    //Calculo da habilidade super
    super2 = (float) pop2 + area2 + pib2 + nmr_turistico2 + pib_capita2 + (area2/pop2);
    
    //Comparação dos atributos das cartas 1 e 2
    //Não sei dizer se a exibição está da forma que se esperava, porém, foi a unica forma que consegui fazer a fim de chegar a solução que foi solicitado.
    printf("---Duelo!---\n");
    printf("A carta %d ganhou! Por possui maior população! (%d)\n", (pop1<pop2) + 1, pop1>pop2);
    printf("A carta %d ganhou! Por possui maior area! (%d)\n", (area1<area2) + 1, area1>area2);
    printf("A carta %d ganhou! Por possui maior PIB! (%d)\n", (pib1<pib2) + 1, pib1>pib2);
    printf("A carta %d ganhou! Por possui mais pontos turisticos! (%d)\n", (nmr_turistico1<nmr_turistico2) + 1, nmr_turistico1>nmr_turistico2);
    printf("A carta %d ganhou! Por possui maior PIB per capita! (%d)\n", (pib_capita1<pib_capita2) + 1, pib_capita1>pib_capita2);
    printf("A carta %d ganhou! Por possui menor densidade populacional! (%d)\n", (densidade1>densidade2) + 1, densidade1<densidade2);
    printf("A carta %d ganhou! Por possui maior super poder! (%d)\n", (super1<super2) + 1, super1>super2);

    /*Exibe status da carta 2
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
    */
    return 0;
}