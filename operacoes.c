#include <stdio.h>

int main(){
    printf("********************************************\n");
    printf("Escola Senai 'Euclides Facchini' Votuporanga\n");
    printf("********************************************\n");
    printf("Nome do aluno: Julio Cesar da Silva Dias    \n");
    printf("********************************************\n");

    int invalido = 0;
    int primeiroNumero;
    int segundoNumero;

    printf("Você devera digitar dois numeros diferentes de zero\n\n");

    printf("Digite o primeiro numero: \n");
    scanf("%d", &primeiroNumero);
    printf("Digite o segundo numero: \n");
    scanf("%d", &segundoNumero);
    while(invalido == 0){

        if(primeiroNumero && segundoNumero != 0){
            invalido = 1;
            continue;

        }else{
        printf("Digite o primeiro numero: \n");
        scanf("%d", &primeiroNumero);
        printf("Digite o segundo numero: \n");
        scanf("%d", &segundoNumero);
    }
    }

    int soma = primeiroNumero + segundoNumero;
    int subtracao = primeiroNumero - segundoNumero;
    int produto = primeiroNumero * segundoNumero;
    int divisao = primeiroNumero / segundoNumero;
    double media = (primeiroNumero + segundoNumero) / 2.0;
    printf("A soma %d + %d = %d\n", primeiroNumero, segundoNumero, soma);
    printf("A subtração %d - %d = %d\n", primeiroNumero, segundoNumero, subtracao);
    printf("O produto %d X %d = %d\n", primeiroNumero, segundoNumero, produto);
    printf("A média entre %d e %d = %.2f", primeiroNumero, segundoNumero, media);
}