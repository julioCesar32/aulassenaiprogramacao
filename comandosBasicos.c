#include <stdio.h>

int main(){
    
    printf("********************************************\n");
    printf("Escola Senai 'Euclides Facchini' Votuporanga\n");
    printf("********************************************\n");
    printf("Nome do aluno: Julio Cesar da Silva Dias    \n");
    printf("********************************************\n");

    int alunas;
    int alunos;

    printf("Quantas alunas há na sala?");
    scanf("%d", &alunas);
    printf("Quantos alunos há na sala?");
    scanf("%d", &alunos);

    printf("Nessa sala há %d alunas", alunas);
    printf("Nessa sala há %d alunos", alunos);
}