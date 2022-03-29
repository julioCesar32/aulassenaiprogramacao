#include <stdio.h>

int main(){

    printf("********************************************\n");
    printf("Escola Senai 'Euclides Facchini' Votuporanga\n");
    printf("********************************************\n");
    printf("Nome do aluno: Julio Cesar da Silva Dias    \n");
    printf("********************************************\n");

    int numerointeiro;

    printf("Digite um numero inteiro positivo: \n");
    scanf("%d", &numerointeiro);

    for(int i = 1; i <= numerointeiro; i++){
        if(i % 2 != 0){
            printf("%d\n", i);

        }
    }
}