#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    // Valores Pontos Turisticos
    int pontosTuristicosA = 50, pontosTuristicosB = 30;
    // Valores População
    int populacaoA = 12325000, populacaoB = 6748000;
    // Resultado final
    int resultado1, resultado2;
    // Escolha da carta
    int escolhaCarta;
    // Escolha do atributo
    int primeiroAtributo, segundoAtributo;
    // Valores Densidade Populacional
    float densidadePopuA = 8102.47, densidadePopuB = 5622.24;
    // Valores Área
    float areaA = 1521.11, areaB = 1200.25;
    // valores PIB
    float pibA = 699.28, pibB = 300.50;
    //  Valorres PIB per Capita
    float pibPerCapitaA = 17625.27, pibPerCapitaB = 22455.91;
    // Nomes das Cidades
    char cidade1[15] = "São Paulo", cidade2[15] = "Rio de Janeiro";

    // Início do jogo
    printf("*** Bem Vindo ao Jogo ***\n");
    printf("\n");
    printf("Escolha uma carta:\n");

    printf("1. Para carta 1\n");
    printf("2. Para carta 2\n");
    printf("3. Para sair\n");
    printf("Escolha uma opção:");
    scanf("%d", &escolhaCarta);

    switch (escolhaCarta)
    {
    case 1:

        printf("\n");
        printf("Você secolheu a carta 1: %s!\n", cidade1);
        break;

    case 2:

        printf("\n");
        printf("Você escolheu a carta 2: %s!\n", cidade2);
        break;

    case 3:

        printf("\n");
        printf("Saindo...\n");
        break;

    default:
        printf("\n");
        printf("Você escolheu um número inválido!!\n");
        break;
    }

    // Escolha do Primeiro Atributo:
    printf("\n");
    printf("Escolha o Primeiro Atributo:\n");

    printf("\n");
    printf("1. Para População\n");
    printf("2. Para Área\n");
    printf("3. Para PIB\n");
    printf("4. Para Número de pontos turísticos\n");
    printf("5. Para Densidade Populacional\n");
    printf("6. Para Pib per Capita\n");
    printf("Escolha um atributo:");
    scanf("%d", &primeiroAtributo);

    switch (primeiroAtributo)
    {
    case 1:
        printf("\n");
        printf("O primeiro atributo escolhido foi População!\n");
        escolhaCarta == 1 ? printf("A cidade é %s\n", cidade1) : printf("A cidade é %s\n", cidade2);
        printf("A população da carta 1 é %d", populacaoA);
        printf(" e a carta 2 é %d\n", populacaoB);
        if (populacaoA == populacaoB)
        {
            printf("Empate!!\n");
        }
        else
        {
            populacaoA > populacaoB ? printf("Carta 1 venceu!!\n") : printf("Carta 2 venceu!!\n");
        }
        resultado1 = populacaoA > populacaoB ? 1 : 0;
        break;

    case 2:
        printf("\n");
        printf("O primeiro atributo escolhido foi Área!\n");
        escolhaCarta == 1 ? printf("A cidade é %s\n", cidade1) : printf("A cidade é %s\n", cidade2);
        printf("A Área da carta 1 é %.2f", areaA);
        printf(" e a carta 2 é %.2f\n", areaB);
        if (areaA == areaB)
        {
            printf("Empate!!\n");
        }
        else
        {
            areaA > areaB ? printf("Carta 1 venceu!!\n") : printf("Carta 2 venceu!!\n");
        }
        resultado1 = areaA > areaB ? 1 : 0;
        break;

    case 3:
        printf("\n");
        printf("O primeiro atributo escolhido foi PIB!\n");
        escolhaCarta == 1 ? printf("A cidade é %s\n", cidade1) : printf("A cidade é %s\n", cidade2);
        printf("O PIB da carta 1 é %.2f", pibA);
        printf(" e a carta 2 é %.2f\n", pibB);
        if (pibA == pibB)
        {
            printf("Empate!!\n");
        }
        else
        {
            pibA > pibB ? printf("Carta 1 venceu!!\n") : printf("Carta 2 venceu!!\n");
        }
        resultado1 = pibA > pibB ? 1 : 0;
        break;

    case 4:
        printf("\n");
        printf("O primeiro atributo escolhido foi Número de Pontos Turísticos!\n");
        escolhaCarta == 1 ? printf("A cidade é %s\n", cidade1) : printf("A cidade é %s\n", cidade2);
        printf("O Número de Pontos Turísticos da carta 1 é %d", pontosTuristicosA);
        printf(" e a carta 2 é %d\n", pontosTuristicosB);
        if (pontosTuristicosA == pontosTuristicosB)
        {
            printf("Empate!!\n");
        }
        else
        {
            pontosTuristicosA > pontosTuristicosB ? printf("Carta 1 venceu!!\n") : printf("Carta 2 venceu!!\n");
        }
        resultado1 = pontosTuristicosA > pontosTuristicosB ? 1 : 0;
        break;

    case 5:
        printf("\n");
        printf("O primeiro atributo escolhido foi Densidade Populacional!\n");
        escolhaCarta == 1 ? printf("A cidade é %s\n", cidade1) : printf("A cidade é %s\n", cidade2);
        printf("A densidade Populacional da carta 1 é %.2f", densidadePopuA);
        printf(" e a carta 2 é %.2f\n", densidadePopuB);
        if (densidadePopuA == densidadePopuB)
        {
            printf("Empate!!\n");
        }
        else
        {
            densidadePopuA < densidadePopuB ? printf("Carta 1 venceu!!\n") : printf("Carta 2 venceu!!\n");
        }
        resultado1 = densidadePopuA < densidadePopuB ? 1 : 0;
        break;

    case 6:
        printf("\n");
        printf("O primeiro atributo escolhido foi PIB per Capita!\n");
        escolhaCarta == 1 ? printf("A cidade é %s\n", cidade1) : printf("A cidade é %s\n", cidade2);
        printf("O PIB per Capita da carta 1 é %.2f", pibPerCapitaA);
        printf(" e a carta 2 é %.2f\n", pibPerCapitaB);
        if (pibPerCapitaA == pibPerCapitaB)
        {
            printf("Empate!!\n");
        }
        else
        {
            pibPerCapitaA > pibPerCapitaB ? printf("Carta 1 venceu!!\n") : printf("Carta 2 venceu!!\n");
        }
        resultado1 = pibPerCapitaA > pibPerCapitaB ? 1 : 0;
        break;

    default:
        printf("\n");
        printf("Opção inválida!!\n");
        break;
    }

    // Escolha do Segundo Atributo:
    printf("\n");
    printf("Escolha o Segundo Atributo:\n");
    printf("Atenção: Você deve escolher um atributo diferente do primeiro!\n");

    printf("\n");
    printf("1. Para População\n");
    printf("2. Para Área\n");
    printf("3. Para PIB\n");
    printf("4. Para Número de pontos turísticos\n");
    printf("5. Para Densidade Populacional\n");
    printf("6. Para Pib per Capita\n");
    printf("Escolha um atributo:");
    scanf("%d", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo)
    {
        printf("\n");
        printf("Você escolheu o mesmo Atributo,");
        printf("Escolha outro!!\n");
    }
    else
    {
        switch (segundoAtributo)
        {
        case 1:

            printf("\n");
            printf("O segundo atributo escolhido foi População!\n");
            escolhaCarta == 1 ? printf("A cidade é %s\n", cidade1) : printf("A cidade é %s\n", cidade2);
            printf("A população da carta 1 é %d", populacaoA);
            printf(" e a carta 2 é %d\n", populacaoB);
            if (populacaoA == populacaoB)
            {
                printf("Empate!!\n");
            }
            else
            {
                populacaoA > populacaoB ? printf("Carta 1 venceu!!\n") : printf("Carta 2 venceu!!\n");
            }
            resultado2 = populacaoA > populacaoB ? 1 : 0;
            break;

        case 2:
            printf("\n");
            printf("O segundo atributo escolhido foi Área!\n");
            escolhaCarta == 1 ? printf("A cidade é %s\n", cidade1) : printf("A cidade é %s\n", cidade2);
            printf("A Área da carta 1 é %.2f", areaA);
            printf(" e a carta 2 é %.2f\n", areaB);
            if (areaA == areaB)
            {
                printf("Empate!!\n");
            }
            else
            {
                areaA > areaB ? printf("Carta 1 venceu!!\n") : printf("Carta 2 venceu!!\n");
            }
            resultado2 = areaA > areaB ? 1 : 0;
            break;

        case 3:
            printf("\n");
            printf("O Segundo atributo escolhido foi PIB!\n");
            escolhaCarta == 1 ? printf("A cidade é %s\n", cidade1) : printf("A cidade é %s\n", cidade2);
            printf("O PIB da carta 1 é %.2f", pibA);
            printf(" e a carta 2 é %.2f\n", pibB);
            if (pibA == pibB)
            {
                printf("Empate!!\n");
            }
            else
            {
                pibA > pibB ? printf("Carta 1 venceu!!\n") : printf("Carta 2 venceu!!\n");
            }
            resultado2 = pibA > pibB ? 1 : 0;
            break;

        case 4:
            printf("\n");
            printf("O Segundo atributo escolhido foi Número de Pontos Turísticos!\n");
            escolhaCarta == 1 ? printf("A cidade é %s\n", cidade1) : printf("A cidade é %s\n", cidade2);
            printf("O Número de Pontos Turísticos da carta 1 é %d", pontosTuristicosA);
            printf(" e a carta 2 é %d\n", pontosTuristicosB);
            if (pontosTuristicosA == pontosTuristicosB)
            {
                printf("Empate!!\n");
            }
            else
            {
                pontosTuristicosA > pontosTuristicosB ? printf("Carta 1 venceu!!\n") : printf("Carta 2 venceu!!\n");
            }
            resultado2 = pontosTuristicosA > pontosTuristicosB ? 1 : 0;
            break;

        case 5:
            printf("\n");
            printf("O Segundo atributo escolhido foi Densidade Populacional!\n");
            escolhaCarta == 1 ? printf("A cidade é %s\n", cidade1) : printf("A cidade é %s\n", cidade2);
            printf("A densidade Populacional da carta 1 é %.2f", densidadePopuA);
            printf(" e a carta 2 é %.2f\n", densidadePopuB);
            if (densidadePopuA == densidadePopuB)
            {
                printf("Empate!!\n");
            }
            else
            {
                densidadePopuA < densidadePopuB ? printf("Carta 1 venceu!!\n") : printf("Carta 2 venceu!!\n");
            }
            resultado2 = densidadePopuA < densidadePopuB ? 1 : 0;
            break;

        case 6:
            printf("\n");
            printf("O Segundo atributo escolhido foi PIB per Capita!\n");
            escolhaCarta == 1 ? printf("A cidade é %s\n", cidade1) : printf("A cidade é %s\n", cidade2);
            printf("O PIB per Capita da carta 1 é %.2f", pibPerCapitaA);
            printf(" e a carta 2 é %.2f\n", pibPerCapitaB);
            if (pibPerCapitaA == pibPerCapitaB)
            {
                printf("Empate!!\n");
            }
            else
            {
                pibPerCapitaA > pibPerCapitaB ? printf("Carta 1 venceu!!\n") : printf("Carta 2 venceu!!\n");
            }
            resultado2 = pibPerCapitaA > pibPerCapitaB ? 1 : 0;
            break;

        default:
            printf("\n");
            printf("Opção inválida!!\n");
            break;
        }
    }

    // Carta Vencedora:
    if (resultado1 && resultado2)
    {
        printf("\n");
        printf("*** Parabéns, você venceu!! ***\n");
    }
    else if (resultado1 != resultado2)
    {
        printf("\n");
        printf("*** EMPATE!! ***\n");
    }
    else
    {
        printf("\n");
        printf("Infelizmente, você perdeu!!");
    }

    return 0;
}
      
   

