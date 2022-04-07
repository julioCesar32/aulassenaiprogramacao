#include <stdio.h>


int main(){
    printf("********************************************\n");
    printf("Escola Senai 'Euclides Facchini' Votuporanga\n");
    printf("********************************************\n");
    printf("Nome do aluno: Julio Cesar da Silva Dias    \n");
    printf("********************************************\n");
    
    float nota;
    float soma = 0;
    float somaNotas;
    float media;
    int maiorNota = 0;
    int menorNota = 10;
    
    

    for(int i = 1; i <= 10; i++){
        printf("Digite a %d.a nota: ", i);
        scanf("%f", &nota);
        soma = soma + nota;

        if(nota > maiorNota){ 
            maiorNota = nota;
        }
        if(nota < menorNota){
            menorNota = nota;
        }
    }

    somaNotas = soma;
    media = soma / 10;
    printf("A soma das notas é: %.1f\n", somaNotas);
    printf("Media das notas é: %.1f\n", media);
    printf("Maior nota é: %d\n", maiorNota);
    printf("Menor nota foi: %d\n", menorNota);
    



    
}