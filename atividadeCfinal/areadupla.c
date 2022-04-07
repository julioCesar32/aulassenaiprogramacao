#include <stdio.h>

int main(){
    printf("********************************************\n");
    printf("Escola Senai 'Euclides Facchini' Votuporanga\n");
    printf("********************************************\n");
    printf("Nome do aluno: Julio Cesar da Silva Dias    \n");
    printf("********************************************\n");

    int baseretanguloA;
    printf("Digite a base do primeiro rentagulo em cm: ");
    scanf("%d", &baseretanguloA);

    int alturaretanguloA;
    printf("Digite a altura do primeiro rentagulo em cm: ");
    scanf("%d", &alturaretanguloA);

    int baseretanguloB;
    printf("Digite a base do segundo retangulo em cm: ");
    scanf("%d", &baseretanguloB);

    int alturaretanguloB;
    printf("Digite a altura do segundo retangulo em cm: ");
    scanf("%d", &alturaretanguloB);

    float areadoretanguloA = baseretanguloA * alturaretanguloA;
    float areadoretanguloB = baseretanguloB * alturaretanguloB;

    printf("A area do primeiro retangulo é: R$%.2f cm \n\n", areadoretanguloA);
    printf("A area do segundo retangulo é: R$%.2f cm \n\n", areadoretanguloB);

    if(areadoretanguloA > areadoretanguloB){
        printf("area do primeiro retangulo é maior");

    }
    else if(areadoretanguloB > areadoretanguloA){
        printf("area do segundo retangulo é maior");
    }else{
        printf("Area dos dois retangulos são iguais");
    }

}