    #include <stdio.h>

    int main() {

        /*-----Variáveis-----*/
        char estado1, estado2;                                          //Estado (A a H)
        char numCodigo1[3], numCodigo2[3];                              //Código da cidade (01 a 04)
        char nome1[30], nome2[30];                                      //Nome da cidade
        unsigned long int populacao1, populacao2;                       //População
        int pontoTuristico1, pontoTuristico2;                           //Pontos turísticos
        float area1, area2, pib1, pib2;                                 //Área e PIB da cidade
        double densidade1, densidade2;                                  //Densidade populacional
        double pibTotal1, pibTotal2;                                    //PIB total em reais
        double pibPerCapita1, pibPerCapita2;                            //PIB per capita
        float invDensidade1, invDensidade2;                             //Inversão da densidade populacional
        float superPoder1, superPoder2;                                 //Superpoderes das cartas
        
        /*-----Variáveis de resultado-----*/
        int resultado_populacao, resultado_area, resultado_pib, resultado_pontoTuristico, resultado_densidade, resultado_pibPerCapita, resultado_superPoder;


        
        /*-----Entrada de Dados-----*/
        printf("CADASTRO DE CARTAS\n");
        printf("==========================\n");
        printf("Cadastrando a primeira carta...\n");
        // Solicita os dados do estado
        printf("Digite uma letra de 'A' a 'H' (representando um dos oitos estados): ");
        scanf(" %c", &estado1);

        // Solicita os dados do código da cidade
        printf("Digite um número de 01 a 04 (representando uma cidade): ");
        scanf(" %2s", numCodigo1);

        // Solicita os dados da cidade
        printf("Digite o nome da cidade: ");
        scanf(" %[^\n]", nome1);
        
        // Solicita os dados da população
        printf("Digite a população da cidade: ");
        scanf("%lu", &populacao1);
        
        // Solicita os dados da área e PIB
        printf("Digite a área da cidade (em km²): ");
        scanf("%f", &area1);

        // Solicita os dados do PIB
        printf("Digite o PIB da cidade (em bilhões de R$): ");
        scanf("%f", &pib1);

        // Solicita o número de pontos turísticos
        printf("Digite o número de pontos turísticos da cidade: ");
        scanf("%d", &pontoTuristico1);
        printf("\n");

        printf("==========================\n");
        printf("Carta 1 cadastrada com sucesso!\n");
        printf("\n");
        printf("Cadastrando a segunda carta...\n");

        // Repetindo o processo para a segunda carta
        printf("Digite uma letra de 'A' a 'H' (representando um dos oitos estados): ");
        scanf(" %c", &estado2);
        printf("Digite um número de 01 a 04 (representando uma cidade): ");
        scanf(" %2s", numCodigo2);
        printf("Digite o nome da cidade: ");
        scanf(" %[^\n]", nome2);
        printf("Digite a população da cidade: ");
        scanf("%lu", &populacao2);
        printf("Digite a área da cidade (em km²): ");
        scanf("%f", &area2);
        printf("Digite o PIB da cidade (em bilhões de R$): ");
        scanf("%f", &pib2);
        printf("Digite o número de pontos turísticos da cidade: ");
        scanf("%d", &pontoTuristico2);
        printf("\n");
        printf("==========================\n");
        printf("Carta 2 cadastrada com sucesso!\n");
        

        /*-----Cálculos-----*/
        densidade1 = (double)populacao1 / area1;
        densidade2 = (double)populacao2 / area2;
        pibTotal1 = (double)pib1 * 1e9;
        pibTotal2 = (double)pib2 * 1e9;
        pibPerCapita1 = pibTotal1 / populacao1;
        pibPerCapita2 = pibTotal2 / populacao2;

        invDensidade1 = 1.0f / densidade1; //inversão é feito dividindo 1 pela densidade, dessa forma, quanto maior a densidade, menor o valor do superpoder
        invDensidade2 = 1.0f / densidade2; //exemplo, se a densidade for 2->  1 / 2 = 0.5, se for 4 -> 1 / 4 = 0.25, se for 6 -> 1 / 6 = 0.1667, etc.

        superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontoTuristico1 + (float)pibPerCapita1 + invDensidade1;
        superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontoTuristico2 + (float)pibPerCapita2 + invDensidade2;

        
        
        
        /*-----Exibição dos Dados-----*/
        printf("\n");
        printf("EXIBIÇÃO DE CARTAS\n");
        printf("==========================\n");
        printf("CARTA 1\n");
        printf("Estado: %c\n", estado1);
        printf("Código: %c%s\n", estado1, numCodigo1);
        printf("Cidade: %s\n", nome1);
        printf("População: %lu\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: %.2f milhões de reais\n", pib1);
        printf("Pontos turísticos: %d\n", pontoTuristico1);
        printf("Densidade populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per capita: %.2f reais\n", pibPerCapita1);
        
        printf("\n");
        printf("CARTA 2\n");
        printf("Estado: %c\n", estado2);
        printf("Código: %c%s\n", estado2, numCodigo2);
        printf("Cidade: %s\n", nome2);
        printf("População: %lu\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: %.2f bilhões de reais\n", pib2);
        printf("Pontos turísticos: %d\n", pontoTuristico2);
        printf("Densidade populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per capita: %.2f reais\n", pibPerCapita2);
        printf("\n");
        
        /*-----Comparação dos Dados-----*/
        resultado_populacao = (populacao1 > populacao2);
        resultado_area = (area1 > area2);
        resultado_pib = (pib1 > pib2);
        resultado_pontoTuristico = (pontoTuristico1 > pontoTuristico2);
        resultado_densidade = (densidade1 < densidade2);
        resultado_pibPerCapita = (pibPerCapita1 > pibPerCapita2);
        resultado_superPoder = (superPoder1 > superPoder2);
        
        
        /*-----Exibição dos Resultados-----*/
        
        printf("\n");
        printf("COMPARAÇÃO DE CARTAS:\n");
        //Operador ternário para exibir qual carta venceu em cada categoria
        //O operador ternário funciona da seguinte forma:
        //                     (condição) ? valor_se_verdadeiro : valor_se_falso
        //No exemplo: resultado_populacao ? 1 : 2 -> se resultado_populacao for verdadeiro (1), retorna 1, caso contrário (0), retorna 2.
        //Se a condição for verdadeira, o valor_se_verdadeiro é retornado, caso contrário, o valor_se_falso é retornado.
        //No caso, se a carta 1 for maior que a carta 2, retorna 1 (carta 1 venceu), caso contrário, retorna 2 (carta 2 venceu).
        printf("População: Carta %d venceu (%d)\n", resultado_populacao ? 1 : 2, resultado_populacao);
        printf("Área: Carta %d venceu (%d)\n", resultado_area ? 1 : 2, resultado_area);
        printf("PIB: Carta %d venceu (%d)\n", resultado_pib ? 1 : 2, resultado_pib);
        printf("Pontos Turísticos: Carta %d venceu (%d)\n", resultado_pontoTuristico ? 1 : 2, resultado_pontoTuristico);
        printf("Densidade Populacional: Carta %d venceu (%d)\n", resultado_densidade ? 1 : 2, resultado_densidade);
        printf("PIB per Capita: Carta %d venceu (%d)\n", resultado_pibPerCapita ? 1 : 2, resultado_pibPerCapita);
        printf("Super Poder: Carta %d venceu (%d)\n", resultado_superPoder ? 1 : 2, resultado_superPoder);

        printf("\n");
        printf("FIM DO JOGO!\n");
        printf("Obrigado por jogar!\n");
    
        return 0;
    }