#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //Carta numero 1
    char estado1[3];
    char idCarta1[3];
    char nomeCidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    //Carta numero 2
    char estado2[3];
    char idCarta2[3];
    char nomeCidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Seja bem vindo! Vamos cadastras duas cartas. \n");
    printf("Digite a letra do seu estado:  ");
    scanf(" %s", estado1);
    printf("Digite o ID da carta:  ");
    scanf("%s", idCarta1);
    printf("Digite o nome da cidade:  ");
    getchar(); // limpa o ENTER deixado no buffer
    fgets(nomeCidade1, 30, stdin);
    fgets(nomeCidade1, 20, stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0';
    printf("Digite a população da cidade de %s:  ", nomeCidade1);
    scanf("%d", &populacao1);
    printf("Digite quantos metros quadrados a cidade de %s tem:  ", nomeCidade1);
    scanf("%f", &area1);
    printf("Digite qual o PIB da cidade de %s:  ", nomeCidade1);
    scanf("%f", &pib1);
    printf("Digite quantos pontos turisticos a cidade %s tem:  ", nomeCidade1);
    scanf("%d", &pontosTuristicos1);

    printf("\nAgora vamos cadastrar a segunda carta. \nDigite a letra do seu estado: ");
    scanf(" %s", estado2);
    printf("Digite o ID da carta:  ");
    scanf("%s", idCarta2);
    printf("Digite o nome da cidade:  ");
    getchar();
    fgets(nomeCidade2, 30, stdin);
    fgets(nomeCidade2, 20, stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0';
    printf("Digite a população da cidade de %s:  ", nomeCidade2);
    scanf("%d", &populacao2);
    printf("Digite quantos metros quadrados a cidade de %s tem:  ", nomeCidade2);
    scanf("%f", &area2);
    printf("Digite qual o PIB da cidade de %s:  ", nomeCidade2);
    scanf("%f", &pib2);
    printf("Digite quantos pontos turisticos a cidade %s tem:  ", nomeCidade2);
    scanf("%d", &pontosTuristicos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\nCarta 1:\n");
    printf("Estado: %s \n", estado1);
    printf("Codigo: %s%s \n", estado1, idCarta1);
    printf("Nome da Cidade: %s \n", nomeCidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Número de pontos turísticos: %d \n", pontosTuristicos1);
    float densidadePopulacional1 = populacao1 / area1;
    printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacional1);
    float pibCapita1 = populacao1 / pib1;
    printf("PIB per Capita: %.2f reais \n", pibCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %s \n", estado2);
    printf("Codigo: %s%s \n", estado2, idCarta2);
    printf("Nome da Cidade: %s \n", nomeCidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Número de pontos turísticos: %d \n", pontosTuristicos2);
    float densidadePopulacional2 = populacao2 / area2;
    printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacional2);
    float pibCapita2 = populacao2 / pib2;
    printf("PIB per Capita: %.2f reais \n", pibCapita2);

    return 0;
}