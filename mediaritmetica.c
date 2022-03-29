#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("********************************************\n");
    printf("Escola Senai 'Euclides Facchini' Votuporanga\n");
    printf("********************************************\n");
    printf("Nome do aluno: Julio Cesar da Silva Dias    \n");
    printf("********************************************\n");

    int totaldeNumeros;
    int numero;
    int soma = 0;
    double media;

    printf("De quantos numeros voce deseja calcular a media: ");
    scanf("%d", &totaldeNumeros);

    for(int i = 1; i <= totaldeNumeros; i++){
        printf("Digite um numero: ");
        scanf("%d", &numero);
        soma = soma + numero;


    } 

    media = soma / (double) totaldeNumeros;   

    printf("A media dos numeros fornecidos e: %.1f", media);
}