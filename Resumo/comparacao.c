#include <stdio.h>

int main(){

    printf("********************************************\n");
    printf("Escola Senai 'Euclides Facchini' Votuporanga\n");
    printf("********************************************\n");
    printf("Nome do aluno: Julio Cesar da Silva Dias    \n");
    printf("********************************************\n");

    int idadeJoana;
    int idadePedro;
    int idadesIguais = 0;
    printf("Qual a idade da Joana?");
    scanf("%d", &idadeJoana);
    printf("Qual a idade de Pedro?");
    scanf("%d", &idadePedro);

    int diferenca = idadeJoana - idadePedro;
    if(idadeJoana > idadePedro){

        printf("Joana é mais velha");
        printf("A diferença é de %d anos\n", diferenca);

    }else{
        printf("Pedro é mais velho");
        printf("A diferença é de %d anos\n", diferenca);
    }
}