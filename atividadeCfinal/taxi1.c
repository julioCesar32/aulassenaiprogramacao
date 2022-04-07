#include <stdio.h>

int main(){
    printf("********************************************\n");
    printf("Escola Senai 'Euclides Facchini' Votuporanga\n");
    printf("********************************************\n");
    printf("Nome do aluno: Julio Cesar da Silva Dias    \n");
    printf("********************************************\n");

    int bandeira;
    printf("Digite o numero da bandeira <1 ou 2>: \n");
    scanf("%d", &bandeira);

    int kilometragem;
    printf("Digite a kilometragem rodada: \n");
    scanf("%d", &kilometragem);

    float valorCorrida = 0;

    if(bandeira == 1){
        valorCorrida = kilometragem * 1.80;
        printf("Valor da corrida: R$%.2f", valorCorrida);

    }else{
        valorCorrida = kilometragem * 2.30;
        printf("Valor da corrida: R$%.2f", valorCorrida);
    }


}