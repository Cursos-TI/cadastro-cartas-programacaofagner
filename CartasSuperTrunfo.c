#include <stdio.h>

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  //Carta 1 - Declaração de variáveis

    char estado_1; // Letra que representa o estado CARTA 1
    char codigo_carta1[4]; // Código da carta (Letra que representa o estado seguido de um número de 01 à 04) CARTA 1
    char cidade_1[20]; // Nome da cidade CARTA 1
    int populacao_1, pontos_tur_1; // População CARTA 1 | N° pontos turísticos CARTA 1
    float area_1, pib_1; // Área da cidade CARTA 1 | PIB cidade CARTA 1

  // Área para entrada de dados | Carta 1 - Coleta dados de entrada
    printf("Insira os dados da CARTA 01! \n"); // Envia informação para a tela do usuário
    
    // LETRA ESTADO 01
    printf("Digite a letra que representa o Estado: \n"); // Envia informação para a tela do usuário
    scanf("%s", &estado_1); // Coleta dado digitado pelo usuário

    // CÓDIGO CARTA 
    printf("Digite o código da carta: \n"); // Envia informação para a tela do usuário
    scanf("%s", &codigo_carta1); // Coleta dado digitado pelo usuário

    // NOME DA CIDADE 
    printf("Digite o nome da cidade: \n"); // Envia informação para a tela do usuário
    scanf("%s", &cidade_1); // Coleta dado digitado pelo usuário

    // POPULAÇÃO 
    printf("Digite a população: \n"); // Envia informação para a tela do usuário
    scanf("%d", &populacao_1); // Coleta dado digitado pelo usuário

    // ÁREA
    printf("Digite a área em km²: \n"); // Envia informação para a tela do usuário
    scanf("%f", &area_1); // Coleta dado digitado pelo usuário

    // PIB
    printf("Digite o PIB: \n"); // Envia informação para a tela do usuário
    scanf("%f", &pib_1); // Coleta dado digitado pelo usuário

    // N° DE PONTOS TURÍSTICOS
    printf("Digite o n° de pontos turísticos: \n"); // Envia informação para a tela do usuário
    scanf("%d", &pontos_tur_1); // Coleta dado digitado pelo usuário
    printf("\n"); // Pula linha entre cartas
    
    // --------------------------------------------------------------------------------------------------------------------------

    //Carta 2 - Declaração de variáveis

    char estado_2; // Letra que representa o estado CARTA 2
    char codigo_carta2[4]; // Código da carta (Letra que representa o estado seguido de um número de 01 à 04) CARTA 2
    char cidade_2[20]; // Nome da cidade CARTA 2
    int populacao_2, pontos_tur_2; // População CARTA 2 | N° pontos turísticos CARTA 2
    float area_2, pib_2; // Área da cidade CARTA 2 | PIB cidade CARTA 2

    // Área para entrada de dados | Carta 2 - Coleta dados de entrada

    printf("Insira os dados da CARTA 02! \n"); // Envia informação para a tela do usuário
    
    // LETRA ESTADO 02
    printf("Digite a letra que representa o Estado: \n"); // Envia informação para a tela do usuário
    scanf("%s", &estado_2); // Coleta dado digitado pelo usuário

    // CÓDIGO CARTA 
    printf("Digite o código da carta: \n"); // Envia informação para a tela do usuário
    scanf("%s", &codigo_carta2); // Coleta dado digitado pelo usuário

    // NOME DA CIDADE 
    printf("Digite o nome da cidade: \n"); // Envia informação para a tela do usuário
    scanf("%s", &cidade_2); // Coleta dado digitado pelo usuário

    // POPULAÇÃO 
    printf("Digite a população: \n"); // Envia informação para a tela do usuário
    scanf("%d", &populacao_2); // Coleta dado digitado pelo usuário

    // ÁREA
    printf("Digite a área em km²: \n"); // Envia informação para a tela do usuário
    scanf("%f", &area_2); // Coleta dado digitado pelo usuário

    // PIB
    printf("Digite o PIB: \n"); // Envia informação para a tela do usuário
    scanf("%f", &pib_2); // Coleta dado digitado pelo usuário

    // N° DE PONTOS TURÍSTICOS
    printf("Digite o n° de pontos turísticos: \n"); // Envia informação para a tela do usuário
    scanf("%d", &pontos_tur_2); // Coleta dado digitado pelo usuário

    // Área para exibição dos dados da cidade

    printf("Carta 1: \n"); 
    printf("Estado: %c \n", estado_1); // Informa a letra que representa o Estado
    printf("Código: %s \n", codigo_carta1); // Informa o código da carta
    printf("Nome da Cidade: %s \n", cidade_1); // Informa o nome da cidade
    printf("População: %d habitantes \n", populacao_1); // Informa a população
    printf("Área: %f km² \n", area_1); // // Informa a área em km²
    printf("PIB: %f bilhões de reais \n", pib_1); // Informa o PIB
    printf("Número de Pontos Turísticos: %d \n", pontos_tur_1); // Informa o número de pontos turísticos
    printf("\n");

    printf("Carta 2: \n"); 
    printf("Estado: %c \n", estado_2); // Informa a letra que representa o Estado
    printf("Código: %s \n", codigo_carta2); // Informa o código da carta
    printf("Nome da Cidade: %s \n", cidade_2); // Informa o nome da cidade
    printf("População: %d habitantes \n", populacao_2); // Informa a população
    printf("Área: %f km² \n", area_2); // // Informa a área em km²
    printf("PIB: %f bilhões de reais \n", pib_2); // Informa o PIB
    printf("Número de Pontos Turísticos: %d \n", pontos_tur_2); // Informa o número de pontos turísticos
    printf("\n");

return 0;
} 