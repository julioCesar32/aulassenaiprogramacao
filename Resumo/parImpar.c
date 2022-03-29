#include <stdio.h>

int main(){
    printf("********************************************\n");
    printf("Escola Senai 'Euclides Facchini' Votuporanga\n");
    printf("********************************************\n");
    printf("Nome do aluno: Julio Cesar da Silva Dias    \n");
    printf("********************************************\n");

    int numeroInteiro;

    printf("Digite um numero que deseja consultar se é par ou impar: \n\n");
    scanf("%d", &numeroInteiro);


    if(numeroInteiro % 2 == 0 ){
        printf("%d é numero par", numeroInteiro);
    }else{
        printf("%d é numero impar", numeroInteiro);
    }
}