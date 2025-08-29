#include <stdio.h>

int main() {
    /*-----Variáveis das cartas-----*/
    char nomeCidade1[] = "Sao Paulo", nomeCidade2[] = "Rio de Janeiro";
    char numCidade1[] = "SP001", numCidade2[] = "RJ001";
    unsigned long int   populacao1 = 12325000,
                        populacao2 = 6748000,
                        pontosTuristicos1 = 50,
                        pontosTuristicos2 = 30;
    
    float   pib1 = 699.28 * 1.e9,
            pib2 = 300.50 * 1.e9,
            area1 = 1521.11,
            area2 = 1200.25,
            densidade1 = (float)populacao1 / area1,
            densidade2 = (float)populacao2 / area2;
    
    /*-----Variáveis do jogo-----*/
    int opcao, cartaJogador, cartaComputador, atributo1, atributo2;
    
    /*-----Carta 1-----*/
    float valor1_atrib1, valor1_atrib2;
    /*-----Carta 2-----*/
    float valor2_atrib1, valor2_atrib2;
    float superPoder1, superPoder2;
    



    /*-----Entrada de dados-----*/

    printf("===== SUPER TRUNFO - ESTADOS BRASILEIROS =====\n");
    printf("1. Regras\n");
    printf("2. Jogar\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    

    /*-----Processamento e saída de dados-----*/
    

switch (opcao)
{
    case 1:
        printf("REGRAS DO SUPER TRUNFO.");
        printf("O jogo consiste em comparar o atributo de duas cartas.\n");
        printf("A carta com soma de atributos maior vence.\n");
    break;
    case 2:
        printf("Para começar escolha uma carta:\n");
        printf("1. São Paulo\n");
        printf("2. Rio de Janeiro\n");

        printf("Escolha sua opção: ");
        scanf("%d", &cartaJogador);

        switch(cartaJogador) {
            case 1:
            case 2:
            // Exibição da carta escolhida pelo jogador
                (cartaJogador == 1) ?
                printf("Carta do jogador: %s - %s\nCarta do computador: %s - %s\n", numCidade1, nomeCidade1, numCidade2, nomeCidade2) :
                printf("Carta do jogador: %s - %s\nCarta do computador: %s - %s\n", numCidade2, nomeCidade2, numCidade1, nomeCidade1);

            //Atributo de comparação
                printf("\n");
                printf("Agora vamos aos atributos para o Super Poder\n");
            //Primeiro atributo
                printf("1. População\n");
                printf("2. Área\n");
                printf("3. PIB\n");
                printf("4. Pontos Turisticos\n");
                printf("5. Densidade Demográfica\n");
                printf("Selecione sua opção: ");
                scanf("%d", &atributo1);

            //Validando a primeira escolha
                if (atributo1 < 1 || atributo1 >5) {
                    printf("Opção inválida\n");
                    return 1;
                }
                
                printf("Agora Selecione o segundo atributo:\n");
                switch (atributo1){
                case 1:
                    printf("2. Área\n");
                    printf("3. PIB\n");
                    printf("4. Pontos Turisticos\n");
                    printf("5. Densidade Demográfica\n");
                break;
                case 2:
                    printf("1. População\n");
                    printf("3. PIB\n");
                    printf("4. Pontos Turisticos\n");
                    printf("5. Densidade Demográfica\n");
                break;
                case 3:
                    printf("1. População\n");
                    printf("2. Área\n");
                    printf("4. Pontos Turisticos\n");
                    printf("5. Densidade Demográfica\n");
                break;
                case 4:
                    printf("1. População\n");
                    printf("2. Área\n");
                    printf("3. PIB\n");
                    printf("5. Densidade Demográfica\n");
                break;
                case 5:
                    printf("1. População\n");
                    printf("2. Área\n");
                    printf("3. PIB\n");
                    printf("4. Pontos Turisticos\n");
                break;
                }

                printf("Selecione uma opção: ");
                scanf("%d", &atributo2);

                //Validando a segunda escolha
                
                //Se o atributo1 for 1 então ele retorna o atributo2 sem repetir
                //Tive um problema para fazer de forma resumida, não estava funcionando então eu prolonguei o código
                
                if (atributo2 == atributo1) {
                    printf("Você não pode escolher o mesmo atributo duas vezes!\n");
                    return 1;
                    }
                    else if (atributo1 == 1) {
                        // Opções mostradas: 2,3,4,5 → Atributos reais: 2,3,4,5
                        if (atributo2 == 2) atributo2 = 2;
                        else if (atributo2 == 3) atributo2 = 3;
                        else if (atributo2 == 4) atributo2 = 4;
                        else if (atributo2 == 5) atributo2 = 5;
                        else {
                            printf("Esse atributo não existe ou não está disponível.\n");
                            return 1;
                        }
                    }
                    else if (atributo1 == 2) {
                        // Opções mostradas: 1,3,4,5 → Atributos reais: 1,3,4,5
                        if (atributo2 == 1) atributo2 = 1;
                        else if (atributo2 == 3) atributo2 = 3;
                        else if (atributo2 == 4) atributo2 = 4;
                        else if (atributo2 == 5) atributo2 = 5;
                        else {
                            printf("Esse atributo não existe ou não está disponível.\n");
                            return 1;
                        }
                    }
                    else if (atributo1 == 3) {
                        // Opções mostradas: 1,2,4,5 → Atributos reais: 1,2,4,5
                        if (atributo2 == 1) atributo2 = 1;
                        else if (atributo2 == 2) atributo2 = 2;
                        else if (atributo2 == 4) atributo2 = 4;
                        else if (atributo2 == 5) atributo2 = 5;
                        else {
                            printf("Esse atributo não existe ou não está disponível.\n");
                            return 1;
                        }
                    }
                    else if (atributo1 == 4) {
                        // Opções mostradas: 1,2,3,5 → Atributos reais: 1,2,3,5
                        if (atributo2 == 1) atributo2 = 1;
                        else if (atributo2 == 2) atributo2 = 2;
                        else if (atributo2 == 3) atributo2 = 3;
                        else if (atributo2 == 5) atributo2 = 5;
                        else {
                            printf("Esse atributo não existe ou não está disponível.\n");
                            return 1;
                        }
                    }
                    else if (atributo1 == 5) {
                        // Opções mostradas: 1,2,3,4 → Atributos reais: 1,2,3,4
                        if (atributo2 == 1) atributo2 = 1;
                        else if (atributo2 == 2) atributo2 = 2;
                        else if (atributo2 == 3) atributo2 = 3;
                        else if (atributo2 == 4) atributo2 = 4;
                        else {
                            printf("Esse atributo não existe ou não está disponível.\n");
                            return 1;
                        }
                    }

                    /*
                    //Validando a segunda escolha
                if (atributo2 < 1 || atributo2 > 5 || atributo2 == atributo1)
                {
                    printf("Opção inválida! Tente novamente.");
                    return 1;
                }
                    
                    
                    */



                    //Validando a segunda escolha

                switch (atributo1) { //Cadastrando primeiro atributo para carta 1
                    case 1: valor1_atrib1 = populacao1; break; //Se o jogador selecionou população como primeiro atributo, o valor da população da primeira carta será o valor usdo para calculo.¹
                    case 2: valor1_atrib1 = area1; break; //se repete para as demais opções, dependendo da seleção do usuário no menu acima ¹
                    case 3: valor1_atrib1 = pib1; break;
                    case 4: valor1_atrib1 = pontosTuristicos1; break;
                    case 5: valor1_atrib1 = densidade1; break;
                }
                switch (atributo2) { //Cadastrando segundo atributo para carta 1
                    case 1: valor1_atrib2 = populacao1; break; //A mesma lógica se aplica para o segundo atributo
                    case 2: valor1_atrib2 = area1; break;
                    case 3: valor1_atrib2 = pib1; break;
                    case 4: valor1_atrib2 = pontosTuristicos1; break;
                    case 5: valor1_atrib2 = densidade1; break;
                }
                switch (atributo1) { //Cadastrando primeiro atributo para carta 2
                    case 1: valor2_atrib1 = populacao2; break;//E para a carta dois também¹
                    case 2: valor2_atrib1 = area2; break;
                    case 3: valor2_atrib1 = pib2; break;
                    case 4: valor2_atrib1 = pontosTuristicos2; break;
                    case 5: valor2_atrib1 = densidade2; break;
                }
                switch (atributo2) { //Cadastrando segundo atributo para carta 2
                    case 1: valor2_atrib2 = populacao2; break;
                    case 2: valor2_atrib2 = area2; break;
                    case 3: valor2_atrib2 = pib2; break;
                    case 4: valor2_atrib2 = pontosTuristicos2; break;
                    case 5: valor2_atrib2 = densidade2; break;
                }
                
                // Calculo do Super Poder
                superPoder1 = valor1_atrib1 + valor1_atrib2;
                superPoder2 = valor2_atrib1 + valor2_atrib2;


                // Resultado do Jogo
                printf("Pontuação do JOGADOR: %.2f\n", superPoder1);
                printf("Pontuação do COMPUTADOR: %.2f\n", superPoder2);
                printf("\n");
                if (superPoder1 > superPoder2)
                {
                    printf("Parabéns! Você venceu o jogo.\n");
                } else if (superPoder1 == superPoder2)
                {
                    printf("Incrível! O jogo empatou.\n");
                } else{
                    printf("Que pena, você perdeu!\n");
                }
            break;
            default:
                printf("Opção inválida! Tente novamente.");
            break;
        }
    
    break;
    case 3:
        printf("Você escolheu sair.\nAté a próxima.\n");
    break;
    default:
        printf("Opção inválida! Tente novamente.");
    break;
}
    return 0;
}