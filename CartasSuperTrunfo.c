#include <stdio.h>

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  //Carta 1 - Declaração de variáveis

    char estado_1; // Letra que representa o estado CARTA 1
    char codigo_carta1[20]; // Código da carta (Letra que representa o estado seguido de um número de 01 à 04) CARTA 1
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

  // Área para exibição dos dados da cidade

return 0;
} 
