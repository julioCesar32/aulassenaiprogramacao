#include <stdio.h>

int main(){
    printf("********************************************\n");
    printf("Escola Senai 'Euclides Facchini' Votuporanga\n");
    printf("********************************************\n");
    printf("Nome do aluno: Julio Cesar da Silva Dias    \n");
    printf("********************************************\n");

    int casosSuspeitos;
    int casosConfirmados;
    int mortes;

    printf("Preencha com as seguintes informações sobre a Dengue em Votuporanga: \n\n");
    printf("Quantidade de casos suspeitos?\n");
    scanf("%d", &casosSuspeitos);
    printf("Quantidade de casos confirmados?\n");
    scanf("%d", &casosConfirmados);
    printf("Quantidade de mortes?\n");
    scanf(" %d", &mortes);

    int total = (casosSuspeitos + casosConfirmados + mortes);

    printf("Informações sobre a dengue em Votuporanga: \n\n");
    printf("Casos Suspeitos: %d\n", casosSuspeitos);
    printf("Casos Confirmados: %d\n", casosConfirmados);
    printf("Mortes causada por dengue: %d\n", mortes);
    printf("Total de casos: %d\n", total);


}