#include <stdio.h>
#include <string.h>


int main(){
    int idade;
    float salario;
    float altura;
    char genero;
    char nome[27];

    idade = 20;
    salario = 5800.5;
    altura = 1.63;
    genero = 'F';
    strcpy(nome, "Maria Silva");

    printf("idade: %d\n", idade);
    printf("Salario: %.2f\n", salario);
    printf("Altura: %.2f\n", altura);
    printf("Genero: %c\n", genero);
    printf("Nome: %s\n", nome);
    


}