#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //imrpime o cabe�alho do nosso jogo
    printf("\n\n");
    printf("          P  /_\\  P                               \n");                        
    printf("         /_\\_|_|_/_\\                             \n");                         
    printf("     n_n | ||. .|| | n_n         Bem vindo ao      \n");    
    printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinha��o!  \n");
    printf("    |     |  |_|  |     |                          \n");                     
    printf("    |_____| ' _ ' |_____|                          \n");                       
    printf("          \\__|_|__/                               \n");
    printf("\n\n");

    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();
    int numeroSecreto = numerogrande % 100;
    printf("%d\n", numeroSecreto);

    int chute;
    int ganhou = 0;
    int tentativa = 1;
    int acertou = 0;
    int nivel;
    printf("Qual o nivel de dificuldade?\n");
    printf("(1) F�cil (2) M�dio (3) Dificil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    int numerotentativa;
    switch(nivel){
        case 1:
            numerotentativa = 20;
            break;

        case 2:
            numerotentativa = 15;
            break;

        default:
            numerotentativa = 6;
            break;
    }
    /*if(nivel == 1){
        numerotentativa = 20;
    }
    else if (nivel == 2){
        numerotentativa = 15;
    }
    else{
        numerotentativa = 6;
    }*/

    double pontos = 1000;

    for(int i = 1; i <= numerotentativa; i++){
        printf("Qual � o seu chute?");
        scanf("%d", &chute);
        printf("Seu chute foi o n�mero %d\n", chute);
        printf("Sua tentativa %d\n", tentativa++);


        if(chute < 0){
            printf("Voc� digitou um numero invalido\n");
            continue;
        }
         
         acertou = (chute == numeroSecreto);
         int maior = chute > numeroSecreto;

       if(acertou){ 
        //
        break;
       } 

       else if(maior) {                                                                                                                
            printf("Poxa vida, voc� errou, o chute foi maior\n");
        }

        else {
            printf("Poxa vida, voc� errou, o chute foi menor\n");
        }
                                      
        double pontosperdidos = abs(chute - numeroSecreto) / (double) 2;

        pontos = pontos - pontosperdidos;
    }
        
    if(acertou){
        printf("Parabains Shinji, muitos parabains!\n");
        printf("Tente de novo, voc� � um bom jogador!\n");
        printf("Voc� acertou na tentativa: %d\n", tentativa - 1);
        printf("             OOOOOOOOOOO                                                                    \n");
        printf("         OOOOOOOOOOOOOOOOOOO                                                                \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO                                                             \n");
        printf("    OOOOOO      OOOOO      OOOOOO                                                           \n");
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO                                                         \n");
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO          Ei voce � muito bom                           \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO                                                       \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO           Quer comprar umas paradas m�gicas?????      \n");
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO                                                       \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO                                                        \n");
        printf(" OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO                                                          \n");
        printf("   OOOOO   OOOOOOOOOOOOOOO   OOOO                                                           \n");
        printf("     OOOOOO   OOOOOOOOO   OOOOOO                                                            \n");
        printf("        OOOOOO         OOOOOO                                                               \n");
        printf("            OOOOOOOOOOOO                                                                    \n");
        //para de executar a repeti��o quando eu acertar
    }else{
        printf("Voc� errou \n");
        printf("      \\|\\/ ____ \\|/    \n");   
        printf("        @~/\\ ,. \\~@     \n");    
        printf("       /_( \\__/ )_\\     \n");  
        printf("          \\__U_/        \n");

    }    
      
    printf("************FIM DE JOGO************\n");
    printf("Total de pontos: %.2f\n", pontos);

}