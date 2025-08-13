#include <stdio.h>

int main() {

    /*-----Variáveis-----*/
    char estado1, estado2;
    char nome1[4],nome2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2, pontosTur1, pontosTur2;
    float area1, area2, pib1, pib2;
    char codigo1[3], codigo2[3];

    /*
    ---------------- Formatos de entrada e saída em C -- --------------

    %s: Imprime uma cadeia (string) de caracteres. 


    %d: Imprime um inteiro no formato decimal.
    posso colocar %02d para imprimir com dois dígitos, por exemplo, 01, 02, etc.
    posso colocar %03d para imprimir com três dígitos, por exemplo, 001, 002, etc.


    %n: Armazena o número de caracteres impressos até aquele ponto na variável fornecida como argumento.
    scanf("%n[^\n]", &variavel); // Exemplo de uso do %n para ler o número de caracteres lidos até aquele ponto.
    %"n" representa o número de caracteres
    '[^\n]' indica que a leitura deve continuar até encontrar uma nova linha.
    scanf("%50[^\n]", cidade1); // Lê até 50 caracteres ou até encontrar uma nova linha (50 foi definido na variável cidade).
    OBS: Não lê caracteres especiais como acentos, cedilha, etc.
    */

    /*-----codigo-----*/
    printf("Super Trunfo - Estados Brasileiros\n");
    printf("=================================\n");
    printf("Cadastrando o primeiro estado:\n");
    printf("Digite uma letra de A a H para representar um estado brasileiro: ");
    scanf(" %c", &estado1);

    printf("Digite um número de 1 a 4 para representar o nome do estado: ");
    scanf(" %s", nome1);

    printf("Digite o nome da cidade: ");
    scanf(" %50[^\n]", &cidade1);

    printf("Digite o número de habitantes: ");
    scanf(" %d", &populacao1);

    printf("Digite a área da cidade em quilometros quadrados: ");
    scanf(" %f", &area1);

    printf("Digite o Produto Interno Bruto (PIB) do estado: ");
    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos na cidade: ");
    scanf(" %d", &pontosTur1);

    printf("Cadastrando o segundo estado:\n");
    printf("Digite uma letra de A a H para representar um estado brasileiro: ");
    scanf(" %c", &estado2);
    
    printf("Digite um número de 1 a 4 para representar o nome do estado: ");
    scanf(" %s", nome2);

    printf("Digite o nome da cidade: ");
    scanf(" %50[^\n]", &cidade2);

    printf("Digite o número de habitantes: ");
    scanf(" %d", &populacao2);

    printf("Digite a área da cidade em quilometros quadrados: ");
    scanf(" %f", &area2);

    printf("Digite o Produto Interno Bruto (PIB) do estado: ");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos na cidade: ");
    scanf(" %d", &pontosTur2);

    printf("Cartas cadastradas com sucesso!\n");


    printf("\n=================================\n");
    printf("\nA carta 1 possui os seguintes dados:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c0%s\n", estado1, nome1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTur1);
    printf("\n\nA carta 2 possui os seguintes dados:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c0%s\n", estado2, nome2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTur2);

    return 0;
}
