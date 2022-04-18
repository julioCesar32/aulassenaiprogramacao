#include <stdio.h>
#include <string.h>

void limpar_entrada(){
    char c;
    while((c = getchar ()) != '\n' && c != EOF)
    {
    }
}


void ler_texto(char *buffer, int length){
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}


int main(){
    int idade1;
    float salario1;
    char genero1;
    char nome1[27];

    int idade2;
    float salario2;
    char genero2;
    char nome2[27];

    printf("Nome da primeira pessoa? ");
    ler_texto(nome1, 27);
    printf("Salario da primeira pessoa: ");
    scanf("%f", &salario1);
    printf("Digite a idade da primeira pessoa: ");
    scanf("%d", &idade1);
    printf("Digite o sexo (F/M) da primeira pessoa: ");
    scanf(" %c", &genero1);

    printf("Nome da segunda pessoa? \n");
    limpar_entrada ();
    ler_texto (nome2, 27);
    printf("Salario da segunda pessoa: \n");
    scanf("%f", &salario2);
    printf("Digite a idade da segunda pessoa: \n");
    scanf("%d", &idade2);
    printf("Digite o sexo (F/M) da segunda pessoa: \n");
    scanf(" %c", &genero2);

    printf("*********** RELATORIO DE DADOS ***********\n\n");
    printf("Nome 1: %s\n", nome1);
    printf("Salario 1: %.2f\n", salario1);
    printf("Idade 1: %d\n", idade1);
    printf("Genero 1: %c\n\n", genero1);

    printf("Nome 2: %s\n", nome2);
    printf("Salario 2: %.2f\n", salario2);
    printf("Idade 2: %d\n", idade2);
    printf("Genero 2: %c\n", genero2);
}