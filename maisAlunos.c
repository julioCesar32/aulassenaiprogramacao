#include <stdio.h>

int main(){

    printf("********************************************\n  ");
    printf("Escola Senai 'Euclides Facchini' Votuporanga\n  ");
    printf("********************************************\n  ");
    printf("Nome do aluno: Julio Cesar da Silva Dias    \n  ");
    printf("********************************************\n\n");

    int alunos;
    int alunas;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &alunos);
    printf("Digite a quantidade de alunas: ");
    scanf("%d", &alunas);

    if(alunos > alunas){
        printf("H� mais alunos do que alunas");
    }else{
        printf("H� mais alunas do que alunos");
    }

}