#include <stdio.h>

int main(){
    
    printf("********************************************\n");
    printf("Escola Senai 'Euclides Facchini' Votuporanga\n");
    printf("********************************************\n");
    printf("Nome do aluno: Julio Cesar da Silva Dias    \n");
    printf("********************************************\n");

    int numeroIntA;
    int numeroIntB;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &numeroIntA);
    printf("Digite outro numero inteiro: \n");
    scanf("%d", &numeroIntB);

    if(numeroIntA > numeroIntB){

        printf("O primeiro numero é maior que o segundo\n");

        if(numeroIntA % 2 == 0){

            printf("o primeiro numero é par\n");

        }
        else{

            printf("O primeiro numero é impar\n");

        }
    }
    if(numeroIntB > numeroIntA){

        printf("O segundo numero é maior que o primeiro\n");

        if(numeroIntA % 2 == 0){

            printf("O segundo numero é par\n");

        }
        else{

            printf("O primeiro numero é menor que o segundo\n");

        }
    }
}