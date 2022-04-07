#include <stdio.h>
#define NUMERO_DE_TENTATIVAS 5

int main(){
    //imrpime o cabeçalho do nosso jogo
    printf("******************************************\n");
    printf("**Bem vindo ao nosso jogo de Adivinhação**\n");
    printf("******************************************\n");

    int numeroSecreto = 42;
    int chute;
    int numerodetentativas = 5;

    for(int i = 1; i <= NUMERO_DE_TENTATIVAS; i++){
        printf("Qual é o seu chute?");
        printf("Tentativa permitidas %d\n", NUMERO_DE_TENTATIVAS);
        scanf("%d", &chute);
        printf("Seu chute foi o número %d\n", chute);

        int acertou = (chute == numeroSecreto);
        int maior = chute > numeroSecreto;
        int menor = chute < numeroSecreto;

        if(chute < 0){
            i--;
            printf("Você digitou um numero invalido\n");
            continue;
        }

        else if(acertou) { 
            printf("Parabains Shinji, muitos parabains!\n");
            printf("Tente de novo, você é um bom jogador!\n");
            //para de executar a repetição quando eu acertar
            break;
        }

        else if(maior) {                                                                                                                
            printf("Poxa vida, você errou, o chute foi maior\n");
            printf("Tentativa %d de 5\n", i);
        }
        else {
            printf("Poxa vida, você errou, o chute foi menor\n");
            printf("Tentativa %d de 5\n", i);
        }
        }
    printf("************FIM DE JOGO************");          
}