#include <stdio.h>

int main(){

    printf("********************************************\n");
    printf("Escola Senai 'Euclides Facchini' Votuporanga\n");
    printf("********************************************\n");
    printf("Nome do aluno: Julio Cesar da Silva Dias    \n");
    printf("********************************************\n");

    int mes;
    printf("Digite um numero de 1 a 12 correspondente ao mes desejado: \n");
    scanf("%d", &mes);

    if(mes == 1){
        printf("O numero corresponde ao mes de Janeiro\n");
    }
    else if(mes == 2){
        printf("O numero corresponde ao mes de Fevereiro\n");
    }
    else if(mes == 3){
        printf("O numero corresponde ao mes de Março\n");
    }
    else if(mes == 4){
        printf("O numero corresponde ao mes de Abril\n");
    }
    else if(mes == 5){
        printf("O numero corresponde ao mes de Maio\n");
    }
    else if(mes == 6){
        printf("O numero corresponde ao mes de Junho\n");
    }
    else if(mes == 7){
        printf("O numero corresponde ao mes de Julho\n");
    }
    else if(mes == 8){
        printf("O numero corresponde ao mes de Agosto\n");
    }
    else if(mes == 9){
        printf("O numero corresponde ao mes de Setembro\n");

    }else if(mes == 10){
        printf("O numero corresponde ao mes de Outubro\n");

    }else if(mes == 11){
        printf("O numero corresponde ao mes de Novembro \n");

    }else if(mes == 12){
        printf("O numero corresponde ao mes de Dezembro \n");
        
    }else{
        printf("O numeroo não corresponde a mes nenhum");
    }

}