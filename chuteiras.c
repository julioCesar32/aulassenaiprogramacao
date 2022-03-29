#include <stdio.h>

int main(){

    printf("********************************************\n  ");
    printf("Escola Senai 'Euclides Facchini' Votuporanga\n  ");
    printf("********************************************\n  ");
    printf("Nome do aluno: Julio Cesar da Silva Dias    \n  ");
    printf("********************************************\n\n");

    int marcaA;
    int marcaB;
    int marcaC;

    printf("Digite a quantidade de chuteiras da marca A: \n");
    scanf("%d", &marcaA);

    printf("Digite a quantidade de chuteiras da marca B: \n");
    scanf("%d", &marcaB);

    printf("Digite a quantidade de chuteiras da marca C: \n\n");
    scanf("%d", &marcaC);

    printf("Existem %d chuteiras da marca A\n\n", marcaA);

    printf("Existem %d chuteiras da marca B\n\n", marcaB);

    printf("Existem %d chuteiras da marca C\n\n", marcaC);
}