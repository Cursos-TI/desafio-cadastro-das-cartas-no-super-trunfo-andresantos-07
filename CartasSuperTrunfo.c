#include <stdio.h>

int main() {
   
    // Carta 01
       int pontos_turisticos;
       unsigned long int populacao;
       float area_em_km2;
       float pib;
       float densidade_populacional;
       float pib_per_capita;
       float superPoder;
       float inversaoDensidade;
       char estado;
       char codigo_carta[10];
       char nome_cidade[20];

       // Carta 02
       int pontos_turisticos_card2;
       unsigned long int populacao_card2;
       float area_em_km2_card2;
       float pib_card2;
       float densidade_populacional_card2;
       float pib_per_capita_card2;
       float superPoder_card2;
       float inversaoDensidade_card2;
       char estado_card2;
       char codigo_carta_card2[10];
       char nome_cidade_card2[20];

       printf("*** carta 01 ***\n\n");

       printf("Digite o nome do estado:");
       scanf("%c", &estado);

       printf("Digite o código da carta:");
       scanf("%s", &codigo_carta);

       printf("Digite o nome da cidade:");
       scanf("%s", &nome_cidade);

       printf("Digite a populacao da cidade:");
       scanf("%lu", &populacao);

       printf("Digite a área da cidade:");
       scanf("%f", &area_em_km2);

       printf("Digite o PIB da cidade: ");
       scanf("%f", &pib);

       printf("Digite o número de pontos turístcos da cidade: ");
       scanf("%d", &pontos_turisticos);

       densidade_populacional = (populacao / area_em_km2);

       pib_per_capita = (populacao / pib);

       // Caúculo de Super Poder carta 01
       inversaoDensidade = 1 / densidade_populacional;

       superPoder = populacao + area_em_km2 + pib + pib_per_capita + pontos_turisticos + inversaoDensidade;

       // Impressão dos dados carta 01

       printf("O nome do estado é:%c\n", estado);

       printf("O código da carta é:%s\n", codigo_carta);

       printf("O nome da cidade é:%s\n", nome_cidade);

       printf("A população da cidade é de:%lu\n", populacao);

       printf("A área da cidade é de:%.2f km²\n", area_em_km2);

       printf("O PIB da cidade é de:%.2f bilhões de reais\n", pib);

       printf("A quantidade de pontos turísticos da cidade é de:%d\n", pontos_turisticos);

       printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);

       printf("PIB per Capita: %.2f reais\n", pib_per_capita);

       printf("Super Poder: %lu\n\n", superPoder);

       printf("***Carta 02*** \n\n");

       // carta 02
       printf("Digite o nome do estado:");
       scanf(" %c", &estado_card2);

       printf("Digite o código da carta:");
       scanf("%s", &codigo_carta_card2);

       printf("Digite o nome da cidade:");
       scanf("%s", &nome_cidade_card2);

       printf("Digite a populacao da cidade:");
       scanf("%lu", &populacao_card2);

       printf("Digite a área da cidade:");
       scanf("%f", &area_em_km2_card2);

       printf("Digite o PIB da cidade:");
       scanf("%f", &pib_card2);

       printf("Digite o número de pontos turístcos da cidade:");
       scanf("%d", &pontos_turisticos_card2);

       densidade_populacional_card2 = (populacao_card2 / area_em_km2_card2);

       pib_per_capita_card2 = (populacao_card2 / pib_card2);

       // Caúculo de Super Poder Carta 02
       inversaoDensidade_card2 = 1 / densidade_populacional_card2;

       superPoder_card2 = populacao_card2 + area_em_km2_card2 + pib_card2 + pib_per_capita_card2 + pontos_turisticos_card2 + inversaoDensidade_card2;

       // Impressão dos dados carta 02
       printf("O nome do estado é:%c\n", estado_card2);

       printf("O código da carta é:%s\n", codigo_carta_card2);

       printf("O nome da cidade é:%s\n", nome_cidade_card2);

       printf("A população da cidade é de:%lu\n", populacao_card2);

       printf("A área da cidade é de:%.2f km²\n", area_em_km2_card2);

       printf("O PIB da cidade é de:%.2f bilhões de reais\n", pib_card2);

       printf("A quantidade de pontos turísticos da cidade é de:%d\n", pontos_turisticos_card2);

       printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_card2);

       printf("PIB per Capita: %.2f reais\n", pib_per_capita_card2);

       printf("Super Poder: %lu\n\n", superPoder_card2);

       printf("*** Carta 01 versus Carta 02 ***\n\n");

       // Comparar Cartas
       int carta1_vs_carta2, populacao1XPopulacao2, area1XArea2, pib1XPib2, pontosTuristicos1XPontosTuristicos2;
       int densidadePopulacionalXDensidadePopulacional2, pibPerCapita1XPibPerCapita2, superPoder1XsuperPoder2;

       populacao1XPopulacao2 = populacao > populacao_card2;
       area1XArea2 = area_em_km2 > area_em_km2_card2;
       pib1XPib2 = pib > pib_card2;
       pontosTuristicos1XPontosTuristicos2 = pontos_turisticos > pontos_turisticos_card2;
       densidadePopulacionalXDensidadePopulacional2 = densidade_populacional < densidade_populacional_card2;
       pibPerCapita1XPibPerCapita2 = pib_per_capita > pib_per_capita_card2;
       superPoder1XsuperPoder2 = superPoder > superPoder_card2;

       // Comparação total carta 01 VS carta 01
       carta1_vs_carta2 = superPoder > superPoder_card2;

       // Impressão das comparações carta 01 versus carta 02
       printf("População: carta %d venceu (%d)\n", populacao1XPopulacao2, populacao1XPopulacao2);

       printf("Área: carta %d venceu (%d)\n", area1XArea2, area1XArea2);

       printf("PIB: carta %d venceu (%d)\n", pib1XPib2, pib1XPib2);

       printf("Pontos turísticos: carta %d venceu (%d)\n", pontosTuristicos1XPontosTuristicos2, pontosTuristicos1XPontosTuristicos2);

       printf("Densidade populacional: carta 2 venceu (%d)\n", densidadePopulacionalXDensidadePopulacional2);

       printf("PIB per Capita: carta 2 venceu (%d)\n", pibPerCapita1XPibPerCapita2);

       printf("Super Poder: carta %d venceu (%d)\n\n", superPoder1XsuperPoder2, superPoder1XsuperPoder2);

       // Impressão do resultado final carta vencedora
       printf("A carta *** %d *** venceu\n", carta1_vs_carta2);
   
}
