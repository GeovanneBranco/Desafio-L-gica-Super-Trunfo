#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

    int main () {

    // declaracao de algumas das variaveis outros estao declaradas dentro dos codigos
    int escolhaCarta, pt00, pop00, pt01, pop01;
    double area00, pib00, area01, pib01;
    char escolhajogador[50], escolhacomputador[50],vencedor[50],vencedor0[50];

    // um gerador de numeros aleatorios para as escolhas do computador.
    srand(time(0));
    int cartacomputador = rand() % 5 + 1;

     // uma breve saudacao seguida das opcoes disponveis para o jogador.
        printf(" *** Bem vindo ao SuperTrunfo Paises ***\n");
        printf(" Escolha a carta uma das cartas a seguir:\n");
        printf(" 1. Brasil:\n");
        printf(" 2. Argentina:\n");
        printf(" 3. Estados_Unidos:\n");
        printf(" 4. China:\n");
        printf(" 5. Alemanha:\n");
        printf(" 6. Franca:\n");
        start:
        printf(" ----");
        printf(" Opcao Escolhida: ");
        scanf("%d", &escolhaCarta);
        printf("\n");

        //informacoes das cartas disponiveis todas com seus respectivos atributos
     switch (escolhaCarta) {

        case 1:

        char codigo00[] = "C03";
        char pais00[] = "Brasil";
        pop00 = 213000000;
        area00 =  8516.767;
        pib00 = 1800.00;
        pt00 = 2000;
        strcpy(escolhajogador, pais00);
        break;

        case 2:
        char codigo02[] = "b02";
        char pais02[] = "Argentina";
        pop00 = 27804000;
        area00 = 2780.400;
        pib00 = 640.40;
        pt00 = 1000;
        strcpy(escolhajogador, pais02);
        break;

        case 3:
        char codigo01[] = "d04";
        char pais01[] = "Estados_Unidos";
        pop00 = 332000000;
        area00 =  9833.517;
        pib00 = 26000.26;
        pt00 = 3200;
        strcpy(escolhajogador, pais01);
        break;

        case 4:
        char codigo03[] = "e05";
        char pais03[] = "China";
        pop00 = 1412000000;
        area00 =  9596.961;
        pib00 = 18000.78;
        pt00 = 2750;
        strcpy(escolhajogador, pais03);
        break;

        case 5:
        char codigo04[] = "f06";
        char pais04[] = "Alemanha";
        pop00 = 840000;
        area00 = 357.022 ;
        pib00 = 4.318;
        pt00 = 650;
        strcpy(escolhajogador, pais04);
        break;

        case 6:
        char codigo05[] = "g07";
        char pais05[] = "Franca";
        pop00 = 680000;
        area00 =  551.695;
        pib00 = 2.987;
        pt00 = 986;
        strcpy(escolhajogador, pais05);
        break;
        // uma seguranca caso o jogador venha a entrar com dados invalidos.
        default:
         printf(" Escolha uma opcao valida. \n");
         goto start;
       }
      // calculo das variaveis densidade,Renda per capita e SuperPoder, comando de potenciacao para elevar o valor do pib.
       float densidade00 =  pop00 / area00;
       pib00 = pib00 * pow( 10, 7);
       double percap00 = pib00  / pop00 ;
       float sp00 =  (pop00 + area00 + pib00 + (-1 * densidade00) + percap00) / pow( 10, 6);

      // aqui o progama vai sinalizar a escolha ao usuario para que ele possa ver os atributos da sua carta antes de escolher para seguir o jogo.
       printf(" *** Voce escolheu a carta:\n Pais:%s\n Populacao:%d\n Area:%.2f\n PIB:%.2f\n Pontos Turisticos:%d\n Renda Per Cap:%.2f\n Densidade demografica:%.2f\n Superpoder: %.2f\n\n",
          escolhajogador, pop00, area00, pib00, pt00, percap00, densidade00, sp00);

      // fiz uma breve sequencia de logica para evitar que o computador escolha a mesma carta que o usuario.
          if (cartacomputador == escolhaCarta)
            { cartacomputador = (cartacomputador + 1);}
          if (cartacomputador == 7) {
            cartacomputador = 1;
          }
      // aqui com base no numero gerado aleatoriamente vamos associar uma carta ao computador para ser nosso adversario.
       switch (cartacomputador){

        case 1:
        char codigo00[] = "C03";
        char pais00[] = "Brasil";
        pop01 = 213000000;
        area01 =  8516.767;
        pib01 = 1800.00;
        pt01 = 2000;
        strcpy(escolhacomputador, pais00);
        break;
        case 2:
        char codigo02[] = "b02";
        char pais02[] = "Argentina";
        pop01 = 27804000;
        area01 = 2780.400;
        pib01 = 640.40;
        pt01 = 1000;
        strcpy(escolhacomputador, pais02);
        break;

        case 3:
        char codigo01[] = "d04";
        char pais01[] = "Estados_Unidos";
        pop01 = 332000000;
        area01 =  9833.517;
        pib01 = 26000.26;
        pt01 = 3200;
        strcpy(escolhacomputador, pais01);
        break;

        case 4:
        char codigo03[] = "e05";
        char pais03[] = "China";
        pop01 = 1412000000;
        area01 =  9596.961;
        pib01 = 18000.78;
        pt01 = 2750;
        strcpy(escolhacomputador, pais03);
        break;

        case 5:
        char codigo04[] = "f06";
        char pais04[] = "Alemanha";
        pop01 = 840000;
        area01 = 357.022 ;
        pib01 = 4.318;
        pt01 = 650;
        strcpy(escolhacomputador, pais04);
        break;

        case 6:
        char codigo05[] = "g07";
        char pais05[] = "Franca";
        pop01 = 680000;
        area01 =  551.695;
        pib01 = 2.987;
        pt01 = 986;
        strcpy(escolhacomputador, pais05);
        break;
       }
        // novamente o calculo de variaveis agora para a carta do computador.
       float densidade01 =  pop01 / area01;
       pib01 = pib01 * pow( 10, 7);
       double percap01 = pib01  / pop01 ;
       float sp01 =  (pop01 + area01 + pib01 + (-1 * densidade01) + percap01) / pow( 10, 6);

       //declaracao da variavel escolha para seguirmos com a escolha de atributos por parte do usuario.
       // tambem ja declarei a variavel pontosdojogador que sera detalhada adiante no codigo.
         int escolha1, escolha2, pontosdojogador = 0;

         // uma breve orientacao das escolhas do usuario junto com a leitura de entrada de dados.
         printf(" Escolha 2 atributos para comparar com seu adversario(PC):\n 1. Populacao\n 2. Area\n 3. PIB\n 4. Pontos Turisticos\n 5. Renda Per Cap\n 6. Densidade demografica\n 7. SuperPoder\n\n");
         start2:
         printf(" *** 1. Atributo: " );
         scanf("%d", &escolha1);
         fflush(stdin);

         printf("\n");

        // aqui vamos seguir uma grande sequencia de testes de if-else e switchts entao estou declarando as variaveis necessarias para que tudo funcione corretamente.

         double somaescolha = 0;
         double somaescolha2 = 0;
         char atributo1[50];
         char atributo2[50];
         double valoratributo1 = 0;
         double valoratributo2 = 0;
         double valoratributo01 = 0;
         double valoratributo02 = 0;

        // este switch vai determinar a a escolha de atributo do usuario.
        // dentro temos if-else para calcular quem é o vencedor já comparando os valores das 2 cartas que seram exibidos na sequencia.

         switch (escolha1) {
            case 1:
               if (pop00 > pop01){
                pontosdojogador++;
                printf(" Voce venceu o primeiro round !!! \n\n");

               } else if (pop00 < pop01){
                pontosdojogador--;
                printf(" Voce perdeu o primeiro round ! \n\n");
               } else {printf(" Primeiro round empatou !!! \n\n");
               }
               somaescolha = pop00 + somaescolha;
               somaescolha2 = pop01 + somaescolha2;
                char escolha00[] = "Populacao";
                strcpy(atributo1, escolha00);
                valoratributo1 = pop00;
                 valoratributo2 = pop01;
            break;
            case 2:
                if (area00 > area01){
                pontosdojogador++;
                printf(" Voce venceu o primeiro round !!! \n\n");

               } else if (area00 < area01){
                pontosdojogador--;
                printf(" Voce perdeu o primeiro round ! \n\n");
               } else {printf(" Primeiro round empatou !!! \n\n");
               }
               somaescolha = area00 + somaescolha;
               somaescolha2 = area01 + somaescolha2;
               char escolha01[] = "Area";
               strcpy(atributo1, escolha01);
               valoratributo1 = area00;
               valoratributo2 = area01;

                break;
                case 3:
                if (pib00 > pib01){
                pontosdojogador++;
                printf(" Voce venceu o primeiro round !!! \n\n");

               } else if (pib00 < pib01){
                pontosdojogador--;
                printf(" Voce perdeu o primeiro round ! \n\n");
               } else {printf(" Primeiro round empatou !!! \n\n");
               }
               somaescolha = pib00 + somaescolha;
               somaescolha2 = pib01 + somaescolha2;
               char escolha02[] = "PIB";
               strcpy(atributo1, escolha02);
               valoratributo1 = pib00;
               valoratributo2 = pib01;
                break;
                case 4:
                if (pt00 > pt01){
                pontosdojogador++;
                printf(" Voce venceu o primeiro round !!! \n\n");

               } else if (pt00 < pt01){
                pontosdojogador--;
                printf(" Voce perdeu o primeiro round ! \n\n");
               } else {printf(" Primeiro round empatou !!! \n\n");
               }
               somaescolha = pt00 + somaescolha;
               somaescolha2 = pt01 + somaescolha2;
                char escolha03[] = "Pontos_Turisticos";
                strcpy(atributo1, escolha03);
                valoratributo1 = pt00;
                valoratributo2 = pt01;
                break;
                case 5:
                if (percap00 > percap01){
                pontosdojogador++;
                printf(" Voce venceu o primeiro round !!! \n\n");
               } else if (percap00 < percap01){
                pontosdojogador--;
                printf(" Voce perdeu o primeiro round ! \n\n");
               } else {printf(" Primeiro round empatou !!! \n\n");
               }
               somaescolha = percap00 + somaescolha;
               somaescolha2 = percap01 + somaescolha2;
               char escolha04[] = "RendaPerCap";
                strcpy(atributo1, escolha04);
                valoratributo1 = percap00;
                valoratributo2 = percap01;
                break;
                case 6:
                if (densidade00 < densidade01){
                pontosdojogador++;
                printf(" Voce venceu o primeiro round !!! \n\n");

               } else if (densidade00 > densidade01){
                pontosdojogador--;
                printf(" Voce perdeu o primeiro round ! \n\n");
               } else {printf(" Primeiro round empatou !!! \n\n");
               }
               somaescolha = densidade00 + somaescolha;
               somaescolha2 = densidade01 + somaescolha2;
               char escolha05[] = "Densidade_demoragrafica";
                strcpy(atributo1, escolha05);
                valoratributo1 = densidade00;
                valoratributo2 = densidade01;
                break;
                case 7:
                if (sp00 > sp01){
                pontosdojogador++;
                printf(" Voce venceu o primeiro round !!! \n\n");

               } else if (sp00 < sp01){
                pontosdojogador--;
                printf(" Voce perdeu o primeiro round ! \n\n");
               } else {printf(" Primeiro round empatou !!! \n\n");
               }
               somaescolha = sp00 + somaescolha;
               somaescolha2 = sp01 + somaescolha2;
               char escolha06[] = "SuperPoder";
                strcpy(atributo1, escolha06);
                valoratributo1 = sp00;
                valoratributo2 = sp01;
                break;
                default:
                printf(" Opcao invalida.\n\n");
                goto start2;
                }
              start3:
            // como no switch anterior mas agora para um segundo atributo.
            printf(" *** O segundo atributo deve ser diferente do primeiro\n" );
            printf(" 2. atributo: ");
            scanf("%d", &escolha2);
            // aqui o if garante o jogador nao vai selecionar o mesmo atributo novamente.
            if (escolha2 == escolha1){
                printf(" Opcao invalida tente novamente.");
                goto start3;
            }
            // o segundo switch é referente ao segundo atributo calculando adquadamente com base nas duas cartas.
                switch (escolha2) {
            case 1:
               if (pop00 > pop01){
                pontosdojogador++;
                printf(" Voce venceu o primeiro round !!! \n\n");

               } else if (pop00 < pop01){
                pontosdojogador--;
                printf(" Voce perdeu o primeiro round ! \n\n");
               } else {printf(" Primeiro round empatou !!! \n\n");
               }
               somaescolha = pop00 + somaescolha;
               somaescolha2 = pop01 + somaescolha2;
               char escolha08[] = "Populacao";
                strcpy(atributo2, escolha08);
                valoratributo01 = pop00;
                valoratributo02 = pop01;
            break;
            case 2:
                if (area00 > area01){
                pontosdojogador++;
                printf(" Voce venceu o segundo round !!! \n\n");

               } else if (area00 < area01){
                pontosdojogador--;
                printf(" Voce perdeu o segundo round ! \n\n");
               } else {printf(" segundo round empatou !!! \n\n");
               }
               somaescolha = area00 + somaescolha;
               somaescolha2 = area01 + somaescolha2;
               char escolha09[] = "Area";
                strcpy(atributo2, escolha09);
               valoratributo01 = area00;
               valoratributo02 = area01;
                break;
                case 3:
                if (pib00 > pib01){
                pontosdojogador++;
                printf(" Voce venceu o segundo round !!! \n\n");

               } else if (pib00 < pib01){
                pontosdojogador--;
                printf(" Voce perdeu o segundo round ! \n\n");
               } else {printf(" segundo round empatou !!! \n\n");
               }
               somaescolha = pib00 + somaescolha;
               somaescolha2 = pib01 + somaescolha2;
               char escolha10[] = "PIB";
                strcpy(atributo2, escolha10);
                valoratributo01 = pib00;
                valoratributo02 = pib01;
                break;
                case 4:
                if (pt00 > pt01){
                pontosdojogador++;
                printf(" Voce venceu o segundo round !!! \n\n");

               } else if (pt00 < pt01){
                pontosdojogador--;
                printf(" Voce perdeu o segundo round ! \n\n");
               } else {printf(" segundo round empatou !!! \n\n");
               }
               somaescolha = pt00 + somaescolha;
               somaescolha2 = pt01 + somaescolha2;
               char escolha11[] = "Pontos_Turisticos";
                strcpy(atributo2, escolha11);
                valoratributo01 = pt00;
                valoratributo02 = pt01;
                break;
                case 5:
                if (percap00 > percap01){
                pontosdojogador++;
                printf(" Voce venceu o segundo round !!! \n\n");

               } else if (percap00 < percap01){
                pontosdojogador--;
                printf(" Voce perdeu o segundo round ! \n\n");
               } else {printf(" segundo round empatou !!! \n\n");
               }
               somaescolha = percap00 + somaescolha;
               somaescolha2 = percap01 + somaescolha2;
               char escolha12[] = "RendaPerCap";
                strcpy(atributo2, escolha12);
                valoratributo01 = percap00;
                valoratributo02 = percap01;
                break;
                case 6:
                if (densidade00 < densidade01){
                pontosdojogador++;
                printf(" Voce venceu o segundo round !!! \n\n");

               } else if (densidade00 > densidade01){
                pontosdojogador--;
                printf(" Voce perdeu o segundo round ! \n\n");
               } else {printf(" segundo round empatou !!!\n\n");
               }
               somaescolha = densidade00 + somaescolha;
               somaescolha2 = densidade00 + somaescolha2;
               char escolha13[] = "Densidade_demografica";
                strcpy(atributo2, escolha13);
                break;
                valoratributo01 = densidade00;
                valoratributo02 = densidade01;
                case 7:
                if (sp00 > sp01){
                pontosdojogador++;
                printf(" Voce venceu o segundo round !!! \n\n");

               } else if (sp00 < sp01){
                pontosdojogador--;
                printf(" Voce perdeu o segundo round ! \n\n");
               } else {printf(" segundo round empatou !!! \n\n");
               }
               somaescolha = sp00 + somaescolha;
               somaescolha2 = sp01 + somaescolha2;
               char escolha14[] = "Superpoder";
                strcpy(atributo2, escolha14);
                break;
                valoratributo01 = sp00;
                valoratributo02 = sp01;
                default:
                printf(" Opcao invalida.\n\n");
                goto start2;
                }
                //Neste linha de if-else temos a verificacao de pontos
                // dentro dos switchs acima toda vez que o jogador vence a variavel pontos do jogador é elevada em 1
                // da mesma forma ela é reduzida em 1 quando ele perde.
                // a soma das escolhas segue a mesma logica porem com o valor dos dois atributos selecionados somados.
                // aqui a variavel vencedor vai selecionar o texto correspondente com o resultado.

            if (somaescolha > somaescolha2){
                pontosdojogador++;
                printf(" Voce venceu a soma das escolhas !!! \n");
               char vencedor0[] = "Jogador ";
               strcpy(vencedor, vencedor0);
               } else if (somaescolha < somaescolha2){
                pontosdojogador--;
                printf(" Voce perdeu a soma das escolhas :( \n");
                char vencedor0[] = "Computador ";
                strcpy(vencedor, vencedor0);
            }
            else {
                printf(" A soma das escolhas empatou ! !\n");
                char vencedor0[] = "Empatou ";
                strcpy(vencedor, vencedor0);
            }
            //exibicao da pontuacao final e do texto do resultado vencedor, perdedor ou empate.
            printf(" *** Pontuacao Final: ");
            printf("%d\n\n", pontosdojogador);
            if (pontosdojogador >= 2) {
            printf(" *** Voce venceu Parabens !!!\n");
            }else if(pontosdojogador == 0){
            printf(" O Jogo empatou !\n");
            }else{printf(" Infelizmente voce perdeu :( \n");
            }
            // aqui o programa vai mostrar a carta selecionada pelo computador.
            printf(" O computador selecionou a seguinte carta...\n\n");
            printf(" ** O computador escolheu:\n Pais:%s\n Populacao:%d\n Area:%.2f\n PIB:%.2f\n Pontos Turisticos:%d\n Renda Per Cap:%.2f\n Densidade demografica:%.2f\n Superpoder: %.2f\n",
    escolhacomputador, pop01, area01, pib00, pt01, percap01, densidade01, sp01);
            // nesta etapa final sera exibido ambas as cartas em paralelo para que se possa ter uma melhor visualizacao dos atributos.
            printf("\n");
            printf(" *** Pais do Jogador: %s ***\n *** Pais do Computador: %s ***\n", escolhajogador, escolhacomputador);
            printf(" Atributos Escolhidos: %s e %s\n", atributo1, atributo2);
            printf(" Valores do Primeiro atributo:%s\n Atributo do jogador: %lf \n Valor do Atributo do computador: %lf\n",atributo1, valoratributo1, valoratributo2);
            printf(" Valores do Segundo atributo:%s\n Atributo do jogador: %lf \n Valor do Atributo do computador: %lf\n",atributo2, valoratributo01, valoratributo02);
            printf(" Soma dos Atributos do jogador: %lf \n Soma dos Atributos do computador: %lf\n", somaescolha, somaescolha2);
            printf(" O vencedor foi o %s \n", vencedor);

        return 0;
    }


