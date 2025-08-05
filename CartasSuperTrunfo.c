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
    int potosturisticos1;
    
    // carta2

    char codigo2[20];
    char estado2;
    char cidade2[20];
    int populacao2;
    float area2;
    float Pib2;
    int potosturisticos2;

    
    // Cadastro das Cartas:

    printf("*** Super Trunfo ***\n");

    // cadastro da carta1

    printf("\nDigite uma letra de A a H(Representando um dos 8 estados):\n");
    scanf(" %c", &estado1);
    printf("Digite a letra do estado seguido de um numero de 01 a 04: \n");
    scanf("%s", &codigo1);
    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade1);
    printf("Digite o numero de Habitantes da cidade:\n");
    scanf("%d", &populacao1);
    printf("digite a área da cidade em quilômetros quadrados:\n");
    scanf("%f", &area1);
    printf("Digite o pib da cidade:\n");
    scanf("%f", &Pib1);
    printf("Digite o numero de potos turisticos da cidade:\n");
    scanf("%d", &potosturisticos1);

    printf("\n*** Carta Registrada ***\n");
    printf("Cadastre a Segunda carta:\n");

    // permite que o usuario visualize que a carta foi registrada e entenda oque deve fazer em seguida

    printf("\nDigite uma letra de A a H(Representando um dos 8 estados):\n ");
    scanf(" %c", &estado2);
    printf("Digite a letra do estado seguido de um numero de 01 a 04:\n");
    scanf("%s", &codigo2);
    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade2);
    printf("Digite o numero de Habitantes da cidade:\n");
    scanf("%d", &populacao2);
    printf("digite a área da cidade em quilômetros quadrados:\n");
    scanf("%f", &area2);
    printf("Digite o pib da cidade:\n");
    scanf("%f", &Pib2);
    printf("Digite o numero de potos turisticos da cidade:\n");
    scanf("%d", &potosturisticos2);

    printf("*** Carta Registrada ***\n");
    // novamente permite que o usuario visualize que o codigo esta funcionando corretamente
    
    // Exibição dos Dados das Cartas:

    // carta 1

    printf("\n*** Carta1 ***\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", Pib1);
    printf("Número de Pontos Turísticos: %d\n", potosturisticos1);

    // carta 2

     printf("\n*** Carta2 ***\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", Pib2);
    printf("Número de Pontos Turísticos: %d\n", potosturisticos2);

    return 0;
}
