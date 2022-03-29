#include <stdio.h>

int main(){

    printf("********************************************\n");
    printf("Escola Senai 'Euclides Facchini' Votuporanga\n");
    printf("********************************************\n");
    printf("Nome do aluno: Julio Cesar da Silva Dias    \n");
    printf("********************************************\n");

    int idadeJoana;
    int idadePedro;
    int idadeIsmael;
    printf("Qual a idade da Joana?");
    scanf("%d", &idadeJoana);
    printf("Qual a idade de Pedro?");
    scanf("%d", &idadePedro);
    printf("Qual a idade de Ismael?");
    scanf("%d", &idadeIsmael);

    if(idadeJoana > idadePedro && idadeJoana > idadeIsmael) {
        printf("Joana é mais velha");

    }
    else if(idadePedro > idadeIsmael && idadePedro > idadeJoana) {
        printf("Pedro é mais velho");

    }else{
        printf("Ismael é mais velho");
    }    

}