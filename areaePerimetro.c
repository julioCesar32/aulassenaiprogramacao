#include <stdio.h>

int main(){
    
    printf("********************************************\n");
    printf("Escola Senai 'Euclides Facchini' Votuporanga\n");
    printf("********************************************\n");
    printf("Nome do aluno: Julio Cesar da Silva Dias    \n");
    printf("********************************************\n");

    int ladoA;
    int ladoB;
    int ladoC;
    int ladoD;

    printf("Digite o lado A em cm: ");
    scanf("%d", &ladoA);
    printf("Digite o lado B em cm: ");
    scanf("%d", &ladoB);
    printf("Digite o lado C em cm: ");
    scanf("%d", &ladoC);
    printf("Digite o lado D em cm: ");
    scanf("%d", &ladoD);

    int area = (ladoA * ladoC); 
    int perimetro = (ladoA + ladoB + ladoC + ladoD);

    printf("O perimetro: %d\n", perimetro);
    printf("A area: %d\n", area);

}
