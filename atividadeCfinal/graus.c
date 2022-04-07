#include <stdio.h>

float celsius;

int temperatura(){
    printf("digite a temperatura em celsius: ");
    scanf("%f", &celsius);
    float fahrenheit = celsius * 1.8 + 32;
    printf("%.2f", fahrenheit);

}

int main(){
    printf("********************************************\n");
    printf("Escola Senai 'Euclides Facchini' Votuporanga\n");
    printf("********************************************\n");
    printf("Nome do aluno: Julio Cesar da Silva Dias    \n");
    printf("********************************************\n");
    
    float celsius;

    temperatura();
    

    
}