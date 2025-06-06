#include <stdio.h>

int main() {
   
    // Carta 01
    int pontos_turisticos;
    int populacao;
    float area_em_km2;
    float pib;
    float densidade_populacional;
    float pib_per_capita;
    char estado;
    char codigo_carta[10];
    char nome_cidade[20];

    // Carta 02
    int pontos_turisticos_card2;
    int populacao_card2;
    float area_em_km2_card2;
    float pib_card2;
    float densidade_populacional_card2;
    float pib_per_capita_card2;
    char estado_card2;
    char codigo_carta_card2[10];
    char nome_cidade_card2[20];

    printf("Digite o nome do estado:");
    scanf("%c", &estado);

    printf("Digite o código da carta:");
    scanf("%s", &codigo_carta);

    printf("Digite o nome da cidade:");
    scanf("%s", &nome_cidade);

    printf("Digite a populacao da cidade:");
    scanf("%d", &populacao);

    printf("Digite a área da cidade:");
    scanf("%f", &area_em_km2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turístcos da cidade: ");
    scanf("%d", &pontos_turisticos);

    densidade_populacional = (populacao / area_em_km2);

    pib_per_capita = (populacao / pib);

    // Impressão dos dados carta 01
    printf("O nome do estado é:%c\n", estado);

    printf("O código da carta é:%s\n", codigo_carta);

    printf("O nome da cidade é:%s\n", nome_cidade);

    printf("A população da cidade é de:%d\n", populacao);

    printf("A área da cidade é de:%.2f km²\n", area_em_km2);

    printf("O PIB da cidade é de:%.2f bilhões de reais\n", pib);

    printf("A quantidade de pontos turísticos da cidade é de:%d\n", pontos_turisticos);

    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);

    printf("PIB per Capita: %.2f reais\n", pib_per_capita);

    printf("Carta 02 \n");

    // carta 02
    printf("Digite o nome do estado:");
    scanf(" %c", &estado_card2);

    printf("Digite o código da carta:");
    scanf("%s", &codigo_carta_card2);

    printf("Digite o nome da cidade:");
    scanf("%s", &nome_cidade_card2);

    printf("Digite a populacao da cidade:");
    scanf("%d", &populacao_card2);

    printf("Digite a área da cidade:");
    scanf("%f", &area_em_km2_card2);

    printf("Digite o PIB da cidade:");
    scanf("%f", &pib_card2);

    printf("Digite o número de pontos turístcos da cidade:");
    scanf("%d", &pontos_turisticos_card2);

    densidade_populacional_card2 = (populacao_card2 / area_em_km2_card2);

    pib_per_capita_card2 = (populacao_card2 / pib_card2);

    // Impressão dos dados carta 02
    printf("O nome do estado é:%c\n", estado_card2);

    printf("O código da carta é:%s\n", codigo_carta_card2);

    printf("O nome da cidade é:%s\n", nome_cidade_card2);

    printf("A população da cidade é de:%d\n", populacao_card2);

    printf("A área da cidade é de:%.2f km²\n", area_em_km2_card2);

    printf("O PIB da cidade é de:%.2f bilhões de reais\n", pib_card2);

    printf("A quantidade de pontos turísticos da cidade é de:%d\n", pontos_turisticos_card2);

    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_card2);

    printf("PIB per Capita: %.2f reais\n", pib_per_capita_card2);

    return 0;

   
}
