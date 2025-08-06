#include <stdio.h>

int main() {

    // armazenamento de dados das cartas

    // carta 1
 
    char codigo1[20];
    char estado1;
    char cidade1[20];
    int populacao1;
    float area1;
    float Pib1;
    int pontosturisticos1;
    float densidadepopulacional1;
    float Pibpercapta1;
    
    // carta2

    char codigo2[20];
    char estado2;
    char cidade2[20];
    int populacao2;
    float area2;
    float Pib2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float Pibpercapta2;

    
    // Cadastro das Cartas:

    printf("*** Super Trunfo ***\n");

    // cadastro da carta1

    printf("\nDigite uma letra de A a H(Representando um dos 8 estados):\n");
    scanf(" %c", &estado1);
    printf("Digite a letra do estado seguido de um numero de 01 a 04: \n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade1);
    printf("Digite o numero de Habitantes da cidade:\n");
    scanf("%d", &populacao1);
    printf("digite a área da cidade em quilômetros quadrados:\n");
    scanf("%f", &area1);
    printf("Digite o pib da cidade:\n");
    scanf("%f", &Pib1);
    printf("Digite o numero de potos turisticos da cidade:\n");
    scanf("%d", &pontosturisticos1);

    printf("\n*** Carta Registrada ***\n");
    printf("Cadastre a Segunda carta:\n");

    // permite que o usuario visualize que a carta foi registrada e entenda oque deve fazer em seguida

    printf("\nDigite uma letra de A a H(Representando um dos 8 estados):\n ");
    scanf(" %c", &estado2);
    printf("Digite a letra do estado seguido de um numero de 01 a 04:\n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade2);
    printf("Digite o numero de Habitantes da cidade:\n");
    scanf("%d", &populacao2);
    printf("digite a área da cidade em quilômetros quadrados:\n");
    scanf("%f", &area2);
    printf("Digite o pib da cidade:\n");
    scanf("%f", &Pib2);
    printf("Digite o numero de potos turisticos da cidade:\n");
    scanf("%d", &pontosturisticos2);

    printf("*** Carta Registrada ***\n");
    // novamente permite que o usuario visualize que o codigo esta funcionando corretamente

    densidadepopulacional1 = (float)populacao1 / area1;
    Pibpercapta1 = Pib1 / (float)populacao1;

    densidadepopulacional2 = (float)populacao2 / area2;
    Pibpercapta2 = Pib2 / (float)populacao2;
    
    // Exibição dos Dados das Cartas:

    // carta 1

    printf("\n*** Carta1 ***\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", Pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f Reais\n");

    // carta 2

     printf("\n*** Carta2 ***\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", Pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f Reais\n");


    return 0;
}
