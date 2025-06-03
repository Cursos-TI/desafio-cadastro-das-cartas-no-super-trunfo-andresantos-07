#include <stdio.h>

int main() {
      // Carta 01 //
    int pontos_turisticos;
    int populacao;
    float area_em_km2;
    float pib;
    char estado;
    char codigo_carta[10];
    char nome_cidade[20];

    // Carta 02 //
    int pontos_turisticos_card2;
    int populacao_card2;
    float area_em_km2_card2;
    float pib_card2;
    char estado_card2;
    char codigo_carta_card2[10];
    char nome_cidade_card2[20];

    printf("Digite o nome do estado:");
    scanf("%c", &estado);

    printf("Digite o código da carta:");
    scanf("%s", &codigo_carta);

    printf("Digite o nome da cidade:");
    scanf("%s", &nome_cidade);

    printf("Digite a populacao do estado:");
    scanf("%d", &populacao);

    printf("Digite a área do estado: ");
    scanf("%f", &area_em_km2);

    printf("Digite o PIB do estado: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turístcos do estado: ");
    scanf("%d", &pontos_turisticos);

    printf("O nome do estado é:%c\n", estado);

    printf("O código da carta é:%s\n", codigo_carta);

    printf("O nome da cidade é:%s\n", nome_cidade);

    printf("A população do estado é de:%d\n", populacao);

    printf("A área do estado é de:%.2f km²\n", area_em_km2);

    printf("O PIB do estado é de:%.2f bilhões de reais\n", pib);

    printf("A quantidade de pontos turísticos do estado é de:%d\n", pontos_turisticos);

    printf("Carta 02 \n");

    // carta 02 //

    printf("Digite o nome do estado:");
    scanf(" %c", &estado_card2);

    printf("Digite o código da carta:");
    scanf("%s", &codigo_carta_card2);

    printf("Digite o nome da cidade:");
    scanf("%s", &nome_cidade_card2);

    printf("Digite a populacao do estado:");
    scanf("%d", &populacao_card2);

    printf("Digite a área do estado:");
    scanf("%f", &area_em_km2_card2);

    printf("Digite o PIB do estado:");
    scanf("%f", &pib_card2);

    printf("Digite o número de pontos turístcos do estado:");
    scanf("%d", &pontos_turisticos_card2);

    printf("O nome do estado é:%c\n", estado_card2);

    printf("O código da carta é:%s\n", codigo_carta_card2);

    printf("O nome da cidade é:%s\n", nome_cidade_card2);

    printf("A população do estado é de:%d\n", populacao_card2);

    printf("A área do estado é de:%.2f km²\n", area_em_km2_card2);

    printf("O PIB do estado é de:%.2f bilhões de reais\n", pib_card2);

    printf("A quantidade de pontos turísticos do estado é de:%d", pontos_turisticos_card2);

    return 0;
}
