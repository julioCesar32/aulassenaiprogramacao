#include <stdio.h>

void numeros(int numero1, int numero2, int numero3){
    if(numero1 < numero2 && numero1 < numero3){
        printf("%d ", numero1);

        if(numero2 < numero3){
            printf("%d ", numero2);
            if(numero3 > numero1 && numero3 > numero2){
            printf("%d ", numero3);
            }
        }
    }
    if(numero2 < numero1 && numero2 < numero3){
        printf("%d ", numero2);

        if(numero3 < numero1){
            printf("%d ", numero3);
            if(numero1 > numero2 && numero3){
                printf("%d ", numero1);

            }
        }
    }
    if(numero3 < numero1 && numero3 < numero2){
            printf("%d ", numero3);

            if(numero2 < numero1){
                printf("%d ", numero2);
                if(numero1 > numero2 && numero1 > numero3){
                    printf("%d ", numero1);

                }
            }
        }
    
    

}

int main(){
    printf("********************************************\n");
    printf("Escola Senai 'Euclides Facchini' Votuporanga\n");
    printf("********************************************\n");
    printf("Nome do aluno: Julio Cesar da Silva Dias    \n");
    printf("********************************************\n\n");

    printf("Voce devera digitar tres numeros inteiro diferentes: \n");

    int numero1;
    printf("Digite o primeiro numero");
    scanf("%d", &numero1);

    int numero2;
    printf("Digite o segundo numero");
    scanf("%d", &numero2);

    int numero3;
    printf("Digite o terceiro numero");
    scanf("%d", &numero3);

    numeros(numero1, numero2, numero3);
}