#include <stdio.h>

int main(){
    printf("********************************************\n");
    printf("Escola Senai 'Euclides Facchini' Votuporanga\n");
    printf("********************************************\n");
    printf("Nome do aluno: Julio Cesar da Silva Dias    \n");
    printf("********************************************\n");

    int primeiroNumero;
    int segundoNumero;

    printf("Você o devera digitar numeros diferentes: \n\n");
    printf("Digite o primeiro numero: \n");
    scanf("%d", &primeiroNumero);
    printf("Digite o segundo numero: \n");
    scanf("%d", &segundoNumero);

    int diferenca = primeiroNumero - segundoNumero;

    if(primeiroNumero > segundoNumero){

        printf("A diferença do maior pelo menor numero é: %d\n", diferenca);

    }else{
        diferenca = segundoNumero - primeiroNumero;
        printf("A diferença do maior pelo menor numero é: %d\n", diferenca);
    }



}