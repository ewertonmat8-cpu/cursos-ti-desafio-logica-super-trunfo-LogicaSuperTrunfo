#include <stdio.h> 

int main() {
      
     // dados da primeira carta
    char estado;
    char nome[20];
    char codigoCarta[4];
    int populacao, nPontosTuristicos;
    float area, pib, densidadePopulacional, pibPerCapita;

    // dados da segunda carta
    char estado2;
    char nome2[20];
    char codigoCarta2[4];
    int populacao2, nPontosTuristicos2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2;
   // menu
   int escolha;

    printf("\nSuper Trunfo\n");

    // solicitar os dados da primeira carta
    printf("Digite os dados da primeira carta conforme o solicitado\n");

    printf("Uma letra de 'A' a 'H' para representar o Estado:\n");
    scanf(" %c", &estado);

    printf("Código da carta:\n");
    scanf("%s", codigoCarta);

    printf("Nome da cidade:\n");
    scanf("%s", nome);

    printf("População da cidade:\n");
    scanf("%d", &populacao);

    printf("Área da cidade em km²:\n");
    scanf("%f", &area);

    printf("PIB da cidade:\n");
    scanf("%f", &pib);

    printf("Número de pontos turísticos:\n");
    scanf("%d", &nPontosTuristicos);

        
    // solicitar dados da segunda carta
    printf("Digite os dados da segunda carta conforme o solicitado\n");

    printf("Uma letra de 'A' a 'H' para representar o Estado:\n");
    scanf(" %c", &estado2);

    printf("Código da carta:\n");
    scanf("%s", codigoCarta2);

    printf("Nome da cidade:\n");
    scanf("%s", nome2);

    printf("População da cidade:\n");
    scanf("%d", &populacao2);

    printf("Área da cidade em km²:\n");
    scanf("%f", &area2);

    printf("PIB da cidade:\n");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos:\n");
    scanf("%d", &nPontosTuristicos2);

    // calculos
    densidadePopulacional = (float)populacao/area;
    pibPerCapita = pib*1000000000/(float)populacao;
    densidadePopulacional2 = (float)populacao2/area2;
    pibPerCapita2 = pib2*1000000000/(float)populacao2;
    
   
    // menu de comparação

    printf("MENU\n");
    printf("escolha o atributo para comparar\n");
    printf("1 - População da cidade\n");
    printf("2 - Área da cidade em km²\n");
    printf("3 - PIB da cidade\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade populacional\n");

    printf("opção: ");
    scanf("%d", &escolha);

switch (escolha)
{
case 1:
    printf("\nComparação de cartas atributo populaçao:\n");
    printf("carta 1 - %s: %d\n", nome, populacao);
    printf("carta 2 - %s: %d\n", nome2, populacao2);

    if (populacao>populacao2)
    {
       printf("Resultado: Carta 1 (%s) venceu!\n", nome);
    }else if (populacao<populacao2)
    {
       printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    }
    else
    {
        printf("Resultado: A carta 1 (%s) e a carta 2 (%s) empataram!\n", nome, nome2);
    }

    break;
case 2:

   printf("\nComparação de cartas atributo área:\n");
    printf("carta 1 - %s: %.2f\n", nome, area);
    printf("carta 2 - %s: %.2f\n", nome2, area2);

    if (area>area2)
    {
       printf("Resultado: Carta 1 (%s) venceu!\n", nome);
    }else if (area<area2)
    {
       printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    }
    else
    {
        printf("Resultado: A carta 1 (%s) e a carta 2 (%s) empataram!\n", nome, nome2);
    }

   break;

case 3:

   printf("\nComparação de cartas atributo área:\n");
    printf("carta 1 - %s: %.2f\n", nome, pib);
    printf("carta 2 - %s: %.2f\n", nome2, pib2);

    if (pib>pib2)
    {
       printf("Resultado: Carta 1 (%s) venceu!\n", nome);
    }else if (pib<pib2)
    {
       printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    }
    else
    {
        printf("Resultado: A carta 1 (%s) e a carta 2 (%s) empataram!\n", nome, nome2);
    }

   break;

case 4:

printf("\nComparação de cartas atributo área:\n");
    printf("carta 1 - %s: %d\n", nome, nPontosTuristicos);
    printf("carta 2 - %s: %d\n", nome2, nPontosTuristicos2);

    if (nPontosTuristicos>nPontosTuristicos2)
    {
       printf("Resultado: Carta 1 (%s) venceu!\n", nome);
    }else if (nPontosTuristicos<nPontosTuristicos2)
    {
       printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    }
    else
    {
        printf("Resultado: A carta 1 (%s) e a carta 2 (%s) empataram!\n", nome, nome2);
    }

   break;

case 5:

printf("\nComparação de cartas atributo área:\n");
    printf("carta 1 - %s: %.2f\n", nome, densidadePopulacional);
    printf("carta 2 - %s: %.2f\n", nome2, densidadePopulacional2);

    if (densidadePopulacional>densidadePopulacional2)
    {
       printf("Resultado: Carta 1 (%s) venceu!\n", nome2);
    }else if (densidadePopulacional<densidadePopulacional2)
    {
       printf("Resultado: Carta 2 (%s) venceu!\n", nome);
    }
    else
    {
        printf("Resultado: A carta 1 (%s) e a carta 2 (%s) empataram!\n", nome, nome2);
    }

   break;

  

default:

printf("Opção inválida!\n");

   break;
}


    return 0;
}



