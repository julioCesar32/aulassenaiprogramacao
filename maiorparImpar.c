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

        printf("O primeiro numero � maior que o segundo\n");

        if(numeroIntA % 2 == 0){

            printf("o primeiro numero � par\n");

        }
        else{

            printf("O primeiro numero � impar\n");

        }
    }
    if(numeroIntB > numeroIntA){

        printf("O segundo numero � maior que o primeiro\n");

        if(numeroIntA % 2 == 0){

            printf("O segundo numero � par\n");

        }
        else{

            printf("O primeiro numero � menor que o segundo\n");

        }
    }
}